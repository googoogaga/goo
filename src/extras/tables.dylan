Module:    simple-tables
Author:    Scott McKay & John Dunning & Jonathan Bachrach
Copyright: 1995 by Harlequin, Inc.

/// Simple hash-table implementation

//--- To-do:
//--- Bugs:
//---   GC-state is not taken into account.  Adding a macro that wraps
//---     up key-searching would help organize this.
//--- Performance:
//---   Finish (hopefully) better hashing functions for both \== and \=.
//---   Make a subclass for \= tables that inlines the test and hash functions.
//---     Should we do this for \= and \== tables?
//---   Remove "below" tests when looping through tables, since we provably
//---     must hit an empty or evacuated cell sometime.
//---   We don't currently need to lock table during rehash, because we always
//---     create a new vector.  This is very inefficient when we are doing a
//---     same-size rehash on behalf of the GC.  Can we do better?
//---     except that a puthash might get lost
//---   Another way to decide to rehash a table might be on the basis of having
//---     collision chains that are "too long".
//---   Rehashing a table should consider the collision chain as it rehashes.
//---     That is, when an object A is hashed to it's preferred place in the
//---     table and there is already an object B there due to secondary 
//---     hashing, then object B should be removed to some other place in its 
//---     collision chain.  This means that object A will end up in its 
//---     preferred place, and object B won't be much worse off.
//---   When removing the last key in a bucket in 'remhash', it can be marked
//---     as empty instead of vacated.
//--- Extensions:
//---   Implement set (0-valued) tables.


define macro inc!
  { inc! (?x:expression, ?dx:expression) }
    => { ?x := ?x + ?dx; }
  { inc! (?x:expression) }
    => { ?x := ?x + 1; }
end macro;

define macro dec!
  { dec! (?x:expression, ?dx:expression) }
    => { ?x := ?x - ?dx; }
  { dec! (?x:expression) }
    => { ?x := ?x - 1; }
end macro;


// Returns a list of the first of each twin prime up to the limit
define constant compute-twin-primes = method (limit :: <integer>)
  let next-prime-pair
    = method (min :: <integer>) => (p :: <integer>, p+2 :: <integer>);
        let p = #f;
        block (return)
          for (p+2 from logior(min, 1) by 2)
            when (block (break)
                    for (factor from 3 to floor(p+2 ^ 0.5) by 2)
                      when (zero?(modulo(p+2, factor)))
                        break(#f)
                      end;
                    finally #t
                    end for
                  end block)
              when (p = p+2 - 2)
                return(p, p+2)
              end when;
              p := p+2
            end when
          end for
        end block
      end method;
  let primes = make(<stretchy-vector>);
  let p = #f;
  let i = 3;
  while (i <= limit)
    p := next-prime-pair(i);
    i := floor(1.025 * (p + 1));
    add!(primes, p)
  end while;
  primes
end method;

// Is 1 million big enough?
define variable *max-prime-for-table* :: <integer> = 1000000;

// List of the first number in each prime pair
define variable *twin-primes* = compute-twin-primes(*max-prime-for-table*);

///
/// SIMPLE-TABLE-VECTOR
///

define class <simple-table-vector> (<object>)
  // Number of filled and vacant elements
  slot %vacated :: <integer>, init-value: 0;
  // Modulus values for primary and secondary hash
  slot %primary-modulus :: <integer>, 
    required-init-keyword: primary-modulus:;
  slot %secondary-modulus :: <integer>,
    required-init-keyword: secondary-modulus:;
  // Number of buckets, and number of elements in each bucket
  slot %n-buckets :: <integer>, required-init-keyword: n-buckets:;
  slot %bucket-depth :: <integer>, required-init-keyword: bucket-depth:;
  // The actual table data representation
  slot %data :: <simple-object-vector>;
  // GC state
  slot %gc-state;
end class <simple-table>;

define method initialize
    (vector :: <simple-table-vector>, #key size = 10, fill = #f) => ()
  next-method();
  vector.%data := make(<vector>, size: size, fill: fill);
end method initialize;

define method elt 
    (vector :: <simple-table-vector>, index :: <integer>) => (value)
  vector.%data[index]
end method elt;

define method elt-setter
    (new-value, vector :: <simple-table-vector>, index :: <integer>) => (value)
  vector.%data[index] := new-value
end method elt-setter;

define method clr! (vector :: <simple-table-vector>, #key fill = #f)
  fill!(vector.%data, fill);
  vector.%vacated := 0;
end method clr!;

///
/// SIMPLE-TABLE
///

define class <simple-table> (<table>)
  // Factor to grow by
  slot table-growth-factor :: <float>,
    init-value: 2.0, init-keyword: growth-factor:;
  // When to grow or shrink (percentage of table size)
  slot table-growth-threshold :: <float>,
    init-value: 0.8, init-keyword: growth-threshold:;
  slot table-shrink-threshold :: <float>,
    init-value: 0.5, init-keyword: shrink-threshold:;
  slot %count :: <integer>, init-value: 0;
  slot %vector :: <simple-table-vector>;
end class <simple-table>;


define constant $empty-cell-marker = list("empty cell");
define constant $vacated-cell-marker = list("vacated cell");


define constant hash-moduli
  = method (hash :: <integer>, primary :: <integer>, secondary :: <integer>)
        => (index :: <integer>, offset :: <integer>)
      values(modulo(hash, primary), modulo(hash, secondary) + 1)
    end method;


define method initialize (table :: <simple-table>, #key size = 10) => ()
  next-method();
  let (n-buckets, bucket-depth) = choose-table-geometry(size);
  table.%vector
    := make(<simple-table-vector>, 
	    size: n-buckets * bucket-depth * 2, fill: $empty-cell-marker,
	    n-buckets: n-buckets, bucket-depth: bucket-depth,
	    primary-modulus: n-buckets, secondary-modulus: n-buckets - 2);
end method initialize;

define method gethash
    (table :: <simple-table>, key, #key default = #f) 
 => (value, found? :: <boolean>)
  block (return)
    let (test-function, hash-function) = table-protocol(table);
    let (hash :: <integer>, state) = hash-function(key);
    let vector = table.%vector;
    let bucket-depth = vector.%bucket-depth;
    let (bucket-index, bucket-offset)
      = hash-moduli(hash, vector.%primary-modulus, vector.%secondary-modulus);
    // Search each bucket
    for (probes from 0 below vector.%n-buckets)
      let index = bucket-index * bucket-depth * 2;
      for (_i from 0 below bucket-depth,
           this-bucket-raw-index from index)
        let this-key = elt(vector, this-bucket-raw-index);
        when (this-key == $empty-cell-marker)
          return(default, #f)
        end when;
        /* N.B. Don't look at already vacated cells along the collision chain */
        when (this-key ~== $vacated-cell-marker & test-function(key, this-key))
          return(elt(vector, this-bucket-raw-index + bucket-depth), #t)
        end when
      end for;
      // Not in this bucket, try the next one;
      dec!(bucket-index, bucket-offset);
      when (negative?(bucket-index))
        inc!(bucket-index, vector.%n-buckets)
      end when;
    finally
      // Table totally full???  That's not right
      error("The table is totally full; this shouldn't happen");
    end for
  end block
end method gethash;

define method puthash (table :: <simple-table>, key, value) => (value)
  let vector = table.%vector;
  case
    table.%count > (vector.%n-buckets * vector.%bucket-depth
                    * table.table-growth-threshold) 
      => // Grow the table if it's too full
         vector := grow-table(table).%vector;
    (table.%count + vector.%vacated) 
      > (vector.%n-buckets * vector.%bucket-depth
           * table.table-growth-threshold) 
      => // Rehash when there are too many vacated elements
         vector := rehash-table(table).%vector;
  end case;
  block (return)
    let (test-function, hash-function) = table-protocol(table);
    let (hash :: <integer>, state) = hash-function(key);
    let bucket-depth = vector.%bucket-depth;
    let (bucket-index, bucket-offset)
      = hash-moduli(hash, vector.%primary-modulus, vector.%secondary-modulus);
    // Search each bucket
    for (probes from 0 below vector.%n-buckets)
      let index = bucket-index * bucket-depth * 2;
      for (_i from 0 below bucket-depth,
           this-bucket-raw-index from index)
        let vacancy-index :: union(singleton(#f), <integer>) = #f;
        let this-key = elt(vector, this-bucket-raw-index);
        case
	    this-key == $empty-cell-marker // end of chain and not found
            => let index 
                 = if (vacancy-index)
		     // use a vacant cell if you found one
                     dec!(vector.%vacated);
                     vacancy-index
		   else
		     // use this cell
                     this-bucket-raw-index
                   end if;
               format-out("FOUND EMPTY CELL @ %d\n", this-bucket-raw-index);
               elt(vector, index) := key;
               elt(vector, index + bucket-depth) := value;
               inc!(table.%count);
               return(value);
          this-key == $vacated-cell-marker // remember vacancy
	    => if (vacancy-index) // N.B. Only record the _first_ vacant cell
		 vacancy-index := this-bucket-raw-index;
		 format-out("FOUND VACATED CELL @ %d\n", vacancy-index);
	       end if;
	  test-function(key, this-key) // key already in table, update value
            => elt(vector, this-bucket-raw-index + bucket-depth) := value;
               format-out("FOUND KEY @ %d\n", this-bucket-raw-index);
               return(value)
        end case
      end for;
      // Not in this bucket, try the next one;
      dec!(bucket-index, bucket-offset);
      when (negative?(bucket-index))
        inc!(bucket-index, vector.%n-buckets)
      end;
    finally
      // Table totally full???  That's not right
      error("The table is totally full; this shouldn't happen");
    end for
  end block
end method puthash;

define method remhash (table :: <simple-table>, key) => (found? :: <boolean>)
  block (return)
    let (test-function, hash-function) = table-protocol(table);
    let (hash :: <integer>, state) = hash-function(key);
    let vector = table.%vector;
    let bucket-depth = vector.%bucket-depth;
    let (bucket-index, bucket-offset)
      = hash-moduli(hash, vector.%primary-modulus, vector.%secondary-modulus);
    // Search each bucket
    for (probes from 0 below vector.%n-buckets)
      let index = bucket-index * bucket-depth * 2;
      for (_i from 0 below bucket-depth,
           this-bucket-raw-index from index)
        let this-key = elt(vector, this-bucket-raw-index);
        when (this-key == $empty-cell-marker)
          return(#f)
        end when;
	// N.B. Don't look at already vacated cells along the collision chain 
        when (this-key ~== $vacated-cell-marker & test-function(key, this-key))
	  elt(vector, this-bucket-raw-index) := $vacated-cell-marker;
          // In a GC-ed environment, clear the value cell too!
          dec!(table.%count);
          inc!(vector.%vacated);
          return(#t)
        end when
      end for;
      // Not in this bucket, try the next one;
      dec!(bucket-index, bucket-offset);
      when (negative?(bucket-index))
        inc!(bucket-index, vector.%n-buckets)
      end when;
    finally
      // Table totally full???  That's not right
      error("The table is totally full; this shouldn't happen");
    end for
  end block;
end method remhash;

define method maphash (function, table :: <simple-table>) => ()
  let vector = table.%vector;
  let bucket-depth = vector.%bucket-depth;
  for (b from 0 below vector.%n-buckets)
    for (i from 0 below bucket-depth)
      let key = elt(vector, i + b * bucket-depth * 2);
      unless (key == $empty-cell-marker | key == $vacated-cell-marker)
        function(key, elt(vector, i + b * bucket-depth * 2 + bucket-depth))
      end unless
    end for
  end for
end method maphash;

define method clrhash (table :: <simple-table>) => ()
  clr!(table.%vector, fill: $empty-cell-marker);
  table.%count := 0;
end method clrhash;

define method size (table :: <simple-table>) => (size :: <integer>)
  table.%count
end method size;


/// Internal functions

define method grow-table
    (table :: <simple-table>) => (table :: <simple-table>)
  format-out("GROWING TABLE\n");
  let vector = table.%vector;
  let (new-n-buckets, new-bucket-depth)
    = choose-table-geometry(vector.%n-buckets * vector.%bucket-depth);
  let new-vector
    = make(<simple-table-vector>,
           size: floor(new-n-buckets * new-bucket-depth * table.table-growth-factor),
           fill: $empty-cell-marker,
	   n-buckets: new-n-buckets, bucket-depth: new-bucket-depth,
	   primary-modulus: new-n-buckets, secondary-modulus: new-n-buckets - 2);
  format-out("OLD DATA %=\n", table.%vector.%data);
  copy-to-new-vector (table, new-vector);
  table.%vector := new-vector;
  format-out("NEW DATA %=\n", table.%vector.%data);
  //--- It would be nice to be able to deallocate the old vector
  table
end method grow-table;

define method rehash-table 
    (table :: <simple-table>) => (table :: <simple-table>)
  let vector = table.%vector;
  let new-vector
    = make(<simple-table-vector>, 
	   size: vector.%n-buckets * vector.%bucket-depth * 2, 
           fill: $empty-cell-marker, 
	   n-buckets: vector.%n-buckets, bucket-depth: vector.%bucket-depth,
	   primary-modulus: vector.%primary-modulus, 
           secondary-modulus: vector.%secondary-modulus);
  copy-to-new-vector(table, new-vector);
  table.%vector := new-vector;
  table
end method rehash-table;

define constant choose-table-geometry 
  = method (capacity :: <integer>)
        => (n-buckets :: <integer>, bucket-depth :: <integer>)
      //--- These numbers are completely arbitrary, and need to be tuned up
      block (return)
	let depth
	  = case
	      capacity < 2000   =>  1;
	      capacity < 5000   =>  2;
	      capacity < 15000  =>  4;
	      capacity < 50000  =>  8;
	      capacity < 250000 => 16;
	      otherwise         => 32
	    end case;
	for (p in *twin-primes*)
	  when (p > ceiling(capacity, depth))
	    return(p + 2, depth)
	  end when;
	finally
	  error("Not enough primes to compute new table size");
	end for
      end block
    end method;

define method copy-to-new-vector (table :: <simple-table>, new-vector) => ()
  maphash
    (method (k, v)
       block (return)
         let (test-function, hash-function) = table-protocol(table);
         let (hash :: <integer>, state) = hash-function(k);
	 let new-n-buckets = new-vector.%n-buckets;
	 let new-bucket-depth = new-vector.%bucket-depth;
	 let new-primary-modulus = new-vector.%primary-modulus;
	 let new-secondary-modulus = new-vector.%secondary-modulus;
         let (new-bucket-index, new-bucket-offset)
           = hash-moduli(hash, new-primary-modulus, new-secondary-modulus);
         // Search each bucket
         for (probes from 0 below new-n-buckets)
           let bucket-start = new-bucket-index * new-bucket-depth * 2;
           for (_i from 0 below new-bucket-depth,
                index from bucket-start)
             let this-key = elt(new-vector, index);
             when (this-key == $empty-cell-marker)
               elt(new-vector, index) := k;
	       elt(new-vector, index + new-bucket-depth) := v;
               return()
             end when
           end for;
           // No room in this bucket, try the next one;
           dec!(new-bucket-index, new-bucket-offset);
           when (negative?(new-bucket-index))
             inc!(new-bucket-index, new-n-buckets)
           end when;
         finally
           // Table totally full???  That's not right
           error("The table is totally full; this shouldn't happen");
         end for
       end block
     end method,
     table)
end method copy-to-new-vector;


/// Glue to the collection protocol

define method element
    (table :: <simple-table>, key, #key default = unsupplied()) => (value)
  let (value, found?) = gethash(table, key);
  if (found?)
    value
  else
    if (supplied?(default))
      default
    else
      signal(make(<key-not-found-error>), collection: table, key: key)
    end if
  end if
end method element;

define method element-setter (value, table :: <simple-table>, key) => (value)
  puthash(table, key, value);
  value
end method element-setter;

define method remove-key! 
    (table :: <simple-table>, key) => (table :: <simple-table>)
  remhash(table, key);
  table
end method remove-key!;

define method includes-key? (table :: <simple-table>, key) => (_ :: <boolean>)
  let (value, found?) = gethash(table, key);
  found?
end method includes-key?;

define method empty? (table :: <simple-table>) => (_ :: <boolean>)
  table.size = 0
end method empty?;

define method key-sequence (table :: <simple-table>) => (keys :: <sequence>)
  let result = make(<vector>, size: table.size);
  maphash(method (key, val) add!(result, key) end, table);
  result
end method key-sequence;


/// Glue to the iteration protocol

define class <simple-table-state> (<object>)
  slot %vector :: <simple-table-vector>, required-init-keyword: vector:;
  slot %bucket, init-value: 0, init-keyword: bucket:;
  slot %index, init-value: 0, init-keyword: index:;
end class <table-state>;

define method table-initial-state (table :: <simple-table>)
  if (table.size = 0)
    #f
  else
    block (return)
      let vector = table.%vector;
      let n-buckets = vector.%n-buckets;
      let bucket-depth = vector.%bucket-depth;
      for (b from 0 below n-buckets)
        for (i from 0 below bucket-depth)
          let key = elt(vector, i + b * bucket-depth * 2);
          unless (key == $empty-cell-marker | key == $vacated-cell-marker)
            return(make(<simple-table-state>, 
                        vector: vector, bucket: b, index: i))
          end unless
        end for;
      finally return(#f)
      end for
    end block
  end if
end method table-initial-state;

define method table-next-state
    (table :: <simple-table>, state :: <simple-table-state>)
  let vector = state.%vector;
  let n-buckets = vector.%n-buckets;
  let bucket-depth = vector.%bucket-depth;
  let bucket = state.%bucket;
  let index = state.%index;
  inc!(index);
  when (index = bucket-depth)
    inc!(bucket);
    index := 0
  end when;
  block (return)
    for (b from bucket below n-buckets)
      for (i from index below bucket-depth)
        let key = elt(vector, i + b * bucket-depth * 2);
        unless (key == $empty-cell-marker | key == $vacated-cell-marker)
          state.%bucket := b;
          state.%index  := i;
          return(state)
        end unless
      end for
    finally
      return(#f)
    end for
  end block
end method table-next-state;

define method table-finished-state? (table :: <simple-table>, state, limit)
  ~state
end method table-finished-state?;

define method table-current-key
    (table :: <simple-table>, state :: <simple-table-state>)
  let vector = state.%vector;
  elt(vector, state.%index + state.%bucket * vector.%bucket-depth * 2)
end method table-current-key;

define method table-current-element
    (table :: <simple-table>, state :: <simple-table-state>)
  let vector = state.%vector;
  let bucket-depth = vector.%bucket-depth;
  elt(vector, state.%index + state.%bucket * bucket-depth * 2 + bucket-depth)
end method table-current-element;

define method table-current-element-setter 
    (value, table :: <simple-table>, state :: <simple-table-state>)
  let vector = state.%vector;
  let bucket-depth = vector.%bucket-depth;
  let offset = state.%index + state.%bucket * bucket-depth * 2 + bucket-depth;
  elt(vector, offset) := value;
end method table-current-element-setter;

define method table-copy-state
    (table :: <simple-table>, state :: <simple-table-state>)
  make(<simple-table-state>,
       vector: state.%vector,
       bucket: state.%bucket, index: state.%index)
end method copy-table-state;

define method forward-iteration-protocol(table :: <simple-table>)
  values(table-initial-state(table),
         #f,
         table-next-state,
         table-finished-state?,
         table-current-key,
         table-current-element,
         table-current-element-setter,
         table-copy-state)
end method forward-iteration-protocol;


/// CONCRETE TABLES

define open generic table-protocol 
    (table :: <simple-table>)
 => (test-function :: <function>, hash-function :: <function>);

define method key-test (table :: <simple-table>) => (test :: <function>)
  let (test-function, hash-function) = table-protocol(table);
  test-function
end method key-test;

define method make (class == <simple-table>, #rest all-keys)
  apply(make, <simple-object-table>, all-keys)
end method make;

define class <simple-object-table> (<simple-table>)
end class <simple-object-table>;

define method table-protocol (table :: <simple-object-table>)
  values(\==, object-hash)
end method table-protocol;

define class <simple-equal-table> (<simple-table>)
end class <simple-equal-table>;

define method table-protocol (table :: <simple-equal-table>)
  values(\=, equal-hash)
end method table-protocol;


/// Test code

define method test-simple-table-1 (#key count = 1000)
  let tab = make(<simple-table>);
  for (i from 0 below count)
    puthash(tab, i, i + 5000);
    format-out("PUTHASH %d/%d -> %=\n", i, i + 5000, tab.%vector.%data);
  end for;
  let x = make(<stretchy-vector>);
  maphash (method (k, v) add!(x, list(k, v)) end, tab);
  for (i from 0 below count)
    let elt = find-value(x, method (_x) first(_x) = i end);
    unless (elt)
      error("%d missing", i)
    end unless;
    unless (second(elt) = first(elt) + 5000)
      error("bogosity: key %d value %d", first(elt), second(elt))
    end unless;
    x := remove!(x, elt)
  end for;
  unless (empty?(x))
    error("Leftover cruft %=", x)
  end unless
end method test-simple-table-1;

define method test-simple-table-2 (#key count = 1000)
  let tab = make(<simple-table>);
  for (i from 0 below count)
    puthash(tab, format-to-string("%d", i), format-to-string("%d", i + 5000))
  end for;
  let x = make(<stretchy-vector>);
  maphash (method (k, v) add!(x, list(k, v)) end, tab);
  for (i from 0 below count)
    let elt
      = find-value(x, method (_x) first(_x) = format-to-string("%d", i) end);
    unless (elt)
      error("%= missing", format-to-string("%d", i))
    end unless;
    unless (second(elt) = format-to-string("%d", i + 5000))
      error("bogosity: key %= value %=", first(elt), second(elt))
    end unless;
    x := remove!(x, elt)
  end for;
  unless (empty?(x))
    error("Leftover cruft %=", x)
  end unless
end method test-simple-table-2;

define method test-simple-table-3 (#key count = 1000)
  let tab = make(<simple-table>);
  for (i from 0 below count)
    puthash(tab, i, i + 5000)
  end for;
  let x = make(<stretchy-vector>);
  maphash (method (k, v) add!(x, list(k, v)) end, tab);
  for (i from 0 below count)
    let elt = find-value(x, method (_x) first(_x) = i end);
    unless (elt)
      error("%d missing", i)
    end unless;
    unless (second(elt) = first(elt) + 5000)
      error("bogosity: key %d value %d", first(elt), second(elt))
    end unless;
    x := remove!(x, elt)
  end for;
  unless (empty?(x))
    error("Leftover cruft %=", x)
  end unless
end method test-simple-table-3;

// eof
