module: proto

define constant <port> = <object>;

define method null? (x) => (well? :: <boolean>)
  instance?(x, <list>) & empty?(x);
end method null?;


// For EVDATA -- From rts/base.scm

define method assq (x, l :: <list>) => (res)
  if (null?(l))
    #f;
  elseif (x == head(head(l)))
    head(l);
  else
    assq(x, tail(l));
  end if;
end method assq;

// For WRITE

define method char-alphabetic? (x :: <character>) => (well? :: <boolean>)
  (('a' <= x) & (x <= 'z')) | (('A' <= x) & (x <= 'Z'))
end method char-alphabetic?;

// Interface to STREAMS library

define function current-output-port () => (res :: <port>)
  *standard-output*;
end function;

define function current-input-port () => (res :: <port>)
  *standard-input*;
end function;

define function open-input-port (filename :: <string>) => (res :: <port>)
  make(<file-stream>, locator: filename, direction: #"input")
end function;

define function open-output-port (filename :: <string>) => (res :: <port>)
  make(<file-stream>, locator: filename, direction: #"output")
end function;

define function close-output-port (port :: <port>)
  close(port)
end function;

define function close-input-port (port :: <port>)
  close(port)
end function;

define method call-with-input-port (filename :: <string>, fun :: <function>)
  with-open-file (stream = filename, direction: #"input")
    fun(stream)
  end with-open-file;
end method;

define method call-with-string-input-port (x :: <string>, fun :: <function>)
  fun(make(<string-stream>, direction: #"input", contents: x));
end method;

define method call-with-output-port (filename :: <string>, fun :: <function>)
  with-open-file (stream = filename, direction: #"output")
    fun(stream)
  end with-open-file;
end method;
  
define method call-with-string-output-port (fun :: <method>) => (x :: <string>)
  let out = make(<stretchy-vector>);
  fun(make(<string-stream>, direction: #"output", contents: out));
  let res = make(<string>, size: size(out));
  map-into(res, curry(as, <character>), out);
end method;


define function write-char (char :: <character>, port :: <port>) => ()
  write-element(port, char);
end function;

define function write-string (string :: <string>, port :: <port>) => ()
  write(port, string);
end function;

define class <eof-object> (<object>)
end class <eof-object>;

define variable $eof-object = make(<eof-object>);

define function read-char (port :: <port>) => (res)
  read-element(port, on-end-of-stream: $eof-object);
end function;

define function eof-object? (x) => (well? :: <boolean>)
  x == $eof-object;
end function;

define function peek-char (port :: <port>) => (res)
  peek(port, on-end-of-stream: $eof-object);
end function;

/// SUPPORT FOR READING/WRITING

define method char-numeric? (char :: <character>) => (well? :: <boolean>)
  member?(char, "0123456789");
end method char-numeric?;

define method char->digit (digit) => (res)
  char->ascii(digit) - char->ascii('0');
end method char->digit;

define method loop-until (thunk :: <function>)
  let result = (thunk)();
  if (result)
    result;
  else
    loop-until(thunk);
  end if;
end method loop-until;

define method string->number (string :: <string>) => (res :: false-or(<number>))
  let s = +1;
  let d = 0;
  let n = 0;
  let i = 0;
  let scale = 1;
  let length = size(string);
  let seen-decimal-point? = #f;
  let radix = 10;
  let number->ssu = 1;
  local method match (char)
          if ((i < length) & (string[i] = char))
            i := i + 1; 
            #t;
          else
            #f; 
          end if;
        end method match,
        method match-digit! (d-formal)
	  d-formal; // ignore
          block (return)
            local method fail!! ()
              //write-char('f', *standard-output*);
              return(#f);
            end method;
	    if (i >= length) fail!!(); end if;
	    let char = string[i];
	    if (char = '.') 
	      if (seen-decimal-point?)
		error("string->number: Two decimal points: %=", string);
	      else
                //write-char('.', *standard-output*);
		seen-decimal-point? := #t;
		i := i + 1;
		if (i >= length) fail!!(); end if;
		char := string[i];
	      end if;
	    end if;
	    if (~ char-numeric?(char)) fail!!(); end if;
	    d := char->digit(string[i]);
	    i := i + 1;
	    if (seen-decimal-point?)
	      scale := scale * radix; 
            end if;
            //write-char('d', *standard-output*);
	    #t;
          end block;
        end method match-digit!,
        method looking-at-alphabetic? ()
          if ((i < length) 
              & char-alphabetic?(string[i]))
            //write-char('a', *standard-output*);
            #t;
          else
            //write-char('n', *standard-output*);
            #f;
          end if;
        end method looking-at-alphabetic?;
  // Now we get to use all this matching machinery
  (((match('+')
     | (match('-') & (s := -1))
     | #t)
    & match-digit!(d) & (n := d)
    & (loop-until(method () 
                    ~(match-digit!(d) & (n := n * radix + d))
                  end method)))
  & (i = length)
  & begin
      let f = s * (as(<float>, n) / scale) * number->ssu;
      if (seen-decimal-point?) f else truncate(f) end;
    end)
end method string->number;

define method decode-optional-argument
    (rest-arg, default, caller-name) => (radix)
  if (empty?(rest-arg))
    default;
  elseif (size(rest-arg) = 1)
    rest-arg[0];
  else
    error("Too many arguments: %=, %=", caller-name, rest-arg);
  end if;
end method decode-optional-argument;

define variable $digit->char = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

define variable *proto-print-base* = 10;

define variable epsilon = 0.000001;

// Hack that only works okay for floats x, where 1e8 < abs(x) < epsilon

define method number->string
    (number :: <float>, #rest radix-option) => (res :: <string>)
  let radix 
    = decode-optional-argument
        (radix-option, *proto-print-base*, #"number->string");
  let s = if (number < 0) -1 else +1 end if;
  let p = number * s;
  local method loop (p, e)
          let i = truncate(p);
          if ((p - i) < epsilon)
            values(number->string(i, radix), e);
          else
            loop(p * radix, e + 1);
          end if;
        end method loop;
  let (string, e) = loop(p, 0);
  let length = size(string);
  if (e = 0)
    string := concatenate(string, ".0");
  elseif (e = length)
    string := concatenate("0.", string);
  elseif (e < length)
    string := concatenate
      (copy-sequence(string, start: 0, end: length - e),
       ".",
       copy-sequence(string, start: length - e, end: length));
  else // (e > length)
    string := concatenate
      (copy-sequence("0.0000000000000", start: 0, end: e - length + 2),
			  string);
  end if;
  if (s < 0)
    concatenate("-", string);
  else
    string;
  end if;
end method number->string;

define method number->string 
    (number :: <integer>, #rest radix-option) => (res :: <string>)
  let radix = decode-optional-argument(radix-option, *proto-print-base*,
                                       #"number->string");
  let s = if (number < 0) -1 else +1 end if;
  local method loop (digit-list, number)
          if (number = 0)
            digit-list;
          else
            loop(pair($digit->char[remainder(number, radix)],
                      digit-list),
                 truncate/(number, radix));
          end if;
        end method loop;
  let digit-list = loop(#(), number * s);
  as(<string>, if (s < 0)
                 pair('-', digit-list)
               elseif (number = 0)
                 "0"
               else
                 digit-list;
               end if);
end method number->string;

