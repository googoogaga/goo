module: proto

/// BOOT NOTES
/// 
/// OBJECT AND VALUES BUILTIN
/// TO BE BOOTSTRAPPED:
///   LIST, METHOD, GENERIC
/// MIGHT BE ABLE TO DO THIS ALL FROM PROTO IF
///   HAVE PRIMITIVE FOR BUILDING OBJECTS
///   CAN AVOID DISPATCH
///

define constant <proto-parents> = <list>;
define constant <proto-values>  = <simple-object-vector>;
define constant <proto-slots>  = <list>;

/// PROTO-TRAITS

define class <proto-traits> (<object>)
  slot traits-direct-parents :: <proto-parents> = #(), 
    init-keyword: parents:;
  slot traits-direct-slots :: <proto-slots> = #();
  slot traits-parents :: <proto-parents> = #();
  slot traits-slots :: <proto-slots> = #();
  slot traits-owner :: <proto>,
    required-init-keyword: owner:;
end class;

define class <inconsistent-precedence-class-error> (<simple-error>) end;

define method traits-ordered-parents
    (o :: <proto-traits>) => (cpl :: <proto-parents>)
  local method merge-lists (partial-cpl :: <list>, remaining-lists :: <list>)
	  // The partial-cpl is in reverse order at this point.
          // format-out("CPL %= REM %=\n", partial-cpl, remaining-lists);
	  if (every?(empty?, remaining-lists))
	    reverse!(partial-cpl)
	  else
	    local method unconstrained-proto (p)
		    local method p-in-and-unconstrained-in? (l :: <list>)
			    head(l) == p
			  end method,

		          method p-unconstrained-in? (l :: <list>)
			    head(l) == p | ~member?(p, tail(l))
		          end method;

		    any?(p-in-and-unconstrained-in?, remaining-lists) 
		      & every?(p-unconstrained-in?, remaining-lists) 
		      & p
		  end method,

	          method unconstrained-proto-in-parents (o :: <proto>)
		    let res = any?(unconstrained-proto, proto-direct-parents(o));
                    // format-out("UPIP %= => %=\n", o, res);
                    res
	          end method;
	    
	    let next = any?(unconstrained-proto-in-parents, partial-cpl);
            // format-out("NEXT = %=\n", next);
	    
	    if (next)
	      local method remove-next (l :: <list>)
		      if (head(l) == next) tail(l) else l end
		    end method;
	      merge-lists(pair (next, partial-cpl),
			  map-into(remaining-lists, 
				   remove-next, remaining-lists))
	    else
	      error(make(<inconsistent-precedence-class-error>,
			 format-string: "Inconsistent precedence graph"))
	    end
	  end
	end;
  
  let parents = traits-direct-parents(o);
  if (empty?(parents) 
       | (size(parents) = 1 & parents[0] == traits-owner(o)))
    parents
  else
    merge-lists(list(traits-owner(o)), 
		add(map(proto-parents, parents), parents))
  end if;
end method;

define method traits-ordered-slots 
    (object :: <proto-traits>) => (res :: <proto-slots>)
  remove-duplicates!
    (reduce(concatenate, #(), 
	    map(proto-direct-slots, reverse(traits-parents(object)))))
end method;

define method initialize (x :: <proto-traits>, #key parents, slots, owner)
  proto-traits(owner) := x;
  if (empty?(parents)) traits-direct-parents(x) := list(owner) end;
  traits-parents(x) := traits-ordered-parents(x);
  // format-out("DIRECT-PARENTS %= PARENTS %=\n", 
  //            proto-direct-parents(x), proto-parents(x));
  traits-slots(x)  := traits-ordered-slots(x);
  // format-out("DIRECT-SLOTS %= SLOTS %=\n", 
  //            proto-direct-slots(x), proto-slots(x));
end method;

/// PROTO

define class <proto> (<object>)
  slot proto-traits :: <proto-traits>,
    init-keyword: traits:;
  slot proto-values :: <proto-values> = make(<proto-values>),
    init-keyword: values:;
end class;

define constant *nul* = make(<proto>);

define method proto? (x) => (well? :: <boolean>)
  instance?(x, <proto>)
end method;

// TRAMPOLINE ACCESSORS -- TODO SHOULD USE MACRO

define method proto-direct-slots 
    (x :: <proto>) => (res :: <proto-slots>)
  traits-direct-slots(proto-traits(x))
end method;

define method proto-direct-slots-setter
    (slots :: <proto-slots>, x :: <proto>)
  traits-direct-slots(proto-traits(x)) := slots;
end method;

define method proto-direct-parents
    (x :: <proto>) => (res :: <proto-parents>)
  traits-direct-parents(proto-traits(x))
end method;

define method proto-slots (x :: <proto>) => (res :: <proto-slots>)
  traits-slots(proto-traits(x))
end method;

define method proto-slots-setter (fs :: <proto-slots>, x :: <proto>)
  traits-slots(proto-traits(x)) := fs;
end method;

define method proto-parents (x :: <proto>) => (res :: <proto-parents>)
  traits-parents(proto-traits(x))
end method;

/// SLOTS

define constant <slot-name> = <proto>;

define class <proto-slot> (<object>)
  slot slot-name :: <slot-name>,        
    required-init-keyword: name:;
  slot slot-owner :: <proto>, 
    required-init-keyword: owner:;
  slot slot-init  = method (x :: <proto>) *nul* end,
    init-keyword: init:;
  slot slot-type :: <proto>, 
    required-init-keyword: type:;
end class;

define constant <proto-symbol> = <proto>;

define method proto-slot-offset
    (object :: <proto>, name :: <proto-symbol>) => (res :: false-or(<integer>))
  find-key(proto-slots(object), method (slot) slot-name(slot) == name end)
end method;

define method %slot-value (object :: <proto>, name :: <proto-symbol>) => (res)
  let offset = proto-slot-offset(object, name);
  if (offset)
    let val = element(proto-values(object), offset);
    if (val == *nul*)
      let slots = proto-slots(object);
      element(proto-values(object), offset)
	:= slot-init(element(slots, offset))(object);
    else
      val
    end if;
  else
    error("Slot %s not found in %=", name, object)
  end if;
end method;

define method %slot-value-setter (z, object :: <proto>, name :: <proto-symbol>)
  let offset = proto-slot-offset(object, name);
  if (offset)
    element(proto-values(object), offset) := z;
  else
    error("Slot %s not found in %=", name, object)
  end if;
end method;

/// OBJECT CLONING AND MODIFICATION 

define method make-proto-values (size :: <integer>) => (res :: <proto-values>)
  make(<proto-values>, size: size, fill: *nul*);
end method;

define method ensure-traits (x :: <proto>) => (res :: <proto>)
  if (traits-owner(proto-traits(x)) == x) 
    x
  else // need fresh traits?
    let traits = make(<proto-traits>, 
		      parents: list(traits-owner(proto-traits(x))),
		      slots:   traits-direct-slots(proto-traits(x)),
		      owner:   x);
    proto-traits(x) := traits;
    x
  end if;
end method;
    
define method %isa
    (parents :: <proto>, names :: <proto>, vals :: <proto>) 
 => (res :: <proto>)
  %isa(%shallow-import-list(parents), 
       %shallow-import-list(names), 
       %shallow-import-list(vals));
end method;

define method %isa
    (parents :: <list>, names :: <list>, vals :: <list>) 
 => (res :: <proto>)
  let object
    = make(<proto>);
  let traits 
    = if (size(parents) = 1)
	proto-traits(ensure-traits(parents[0]));
      else
	make(<proto-traits>,
	     parents: map(ensure-traits, parents),
	     slots:  #(),
	     owner:   object)
      end if;
  proto-traits(object) := traits;
  proto-values(object) := make-proto-values(size(proto-slots(object)));
  for (slot in proto-slots(object))
    %slot-value(object, slot-name(slot))
      := %slot-value(slot-owner(slot), slot-name(slot));
  end for;
  for (name in names, val in vals)
    %slot-value(object, name) := val;
  end for;
  object
end method;

define method %slot 
    (owner :: <proto>, name :: <slot-name>, type :: <proto>, init :: <method>)
  ensure-traits(owner);
  let traits
    = proto-traits(owner);
  let slot
    = make(<proto-slot>, name: name, owner: owner, type: type, init: init);
  traits-direct-slots(traits)
    := concatenate!(traits-direct-slots(traits), list(slot));
  traits-slots(traits)
    := traits-ordered-slots(traits);
  // TODO: NEED TO MIGRATE OLD VALUES
  let slots      = proto-slots(owner);
  let old-values = proto-values(owner);
  let new-values = make-proto-values(size(proto-slots(owner)));
  proto-values(owner) := new-values;
  for (old-value in old-values, i :: <integer> from 0)
    new-values[i] := old-value;
  end for;
  %slot-value(owner, name) := init(owner);
  slot
end method;

define method %slot
    (owner :: <proto>, name :: <slot-name>, type :: <proto>, init :: <proto>)
  %slot(owner, name, type, method (x) proto-apply(init, list(x)) end);
end method;
