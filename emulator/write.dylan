module: proto

//  -*- Mode: Scheme; Syntax: Scheme; Package: Scheme; -*-
//  Copyright (c) 1993, 1994 Richard Kelsey and Jonathan Rees.  See file COPYING.
//  This is file write.scm.
//  WRITE
//  To use this with some Scheme other than Scheme 48, do the following:
//   1. Copy the definition of output-port-option from port.scm
//   2. Define write-string as appropriate (as a write-char loop)
//   3. (define (disclose x) #f)

// WRITE

define method print-object (x :: <proto>, s :: <stream>) => ()
  proto-write(x, s)
end method;

define method proto-write-to-string (obj) => (res :: <string>)
  call-with-string-output-port(curry(proto-write, obj))
end method proto-write-to-string;

define method proto-write (obj, #rest port-option)
  let port = output-port-option(port-option);
  local method recur (obj)
          recurring-write(obj, port, recur);
        end method recur;
  recur(%import(env(), obj));
end method proto-write;

define method recurring-write (obj :: <list>, port :: <port>, recur)
  if (null?(obj))
    write-string("()", port);
  else
    write-list(obj, port, recur);
  end if;
end method recurring-write;

define method recurring-write (obj :: <boolean>, port :: <port>, recur)
  if (obj)
    write-boolean(#"t", port);
  else
    write-boolean(#"f", port);
  end if;
end method recurring-write;

define method recurring-write (obj :: <symbol>, port :: <port>, recur)
  write-string(as(<string>, obj), port);
end method recurring-write;

define method recurring-write (obj :: <number>, port :: <port>, recur)
  write-number(obj, port);
end method recurring-write;

define method recurring-write (obj :: <string>, port :: <port>, recur)
  write-string-literal(obj, port);
end method recurring-write;

define method recurring-write (obj :: <character>, port :: <port>, recur)
  write-char-literal(obj, port);
end method recurring-write;

define method recurring-write (obj :: <object>, port :: <port>, recur)
  write-other(obj, port, recur);
end method recurring-write;

define method write-boolean (mumble, port :: <port>)
  write-char('#', port);
  proto-write(mumble, port);
end method write-boolean;

define method write-number (n :: <number>, port :: <port>)
  write-string(number->string(n, 10), port);
end method write-number;

define method write-char-literal (obj, port :: <port>)
  let probe = character-name(obj);
  write-string("#\\", port);
  if (probe)
    proto-write(probe, port);
  else
    write-char(obj, port);
  end if;
end method write-char-literal;

define method character-name (char :: <character>) => (res)
  if (char = ' ')
    #"space";
  elseif (char = '\n')
    #"newline";
  else
    #f;
  end if;
end method character-name;

define method write-string-literal (obj, port :: <port>)
  write-char('"', port);
  let len = size(obj);
  for (i = 0 then i + 1, until: i = len)
    let c = obj[i];
    if (c = '\\' | c = '"')
      write-char('\\', port);
    end if;
    write-char(c, port);
  finally
    write-char('"', port);
  end for;
end method write-string-literal;

define method write-list (obj :: <list>, port :: <port>, recur)
  if (quotation?(obj))
    write-char('\'', port);
    recur(second(obj));
  else
    write-char('(', port);
    recur(head(obj));
    local method loop (l, n)
            if (~ instance?(l, <pair>))
              if (~ null?(l))
                write-string(" . ", port);
                recur(l); 
              end if;
            else
              write-char(' ', port);
              recur(head(l));
              loop(tail(l), n + 1);
            end if;
          end method loop;
    loop(tail(obj), 1);
    write-char(')', port);
  end if;
end method write-list;

define method quotation? (obj) => (well? :: <boolean>)
  instance?(obj, <pair>) 
    & head(obj) == #"quote" 
    & instance?(tail(obj), <pair>)
    & null?(tail(tail(obj)));
end method quotation?;

define method write-vector (obj :: <vector>, port :: <port>, recur)
  write-string("#(", port);
  let z = size(obj);
  if (z > 0)
    recur(obj[0]);
    local method loop (i)
            if (i >= z)
              #t
            else
              write-char(' ', port);
              recur(obj[i]);
              loop(i + 1);
            end if;
          end method loop;
    loop(1);
  end if;
  write-char(')', port);
end method write-vector;

define method unspecific? (obj) => (well? :: <boolean>)
  obj == $the-unspecified-value;
  // Was: obj == (if (#f) #f; end if); // not likely to work in Dylan
end method unspecific?;

define method write-disclosure (disclosure, port :: <port>, recur)
  write-string("#{", port);
  display-type-name(head(disclosure), port);
  do(method (x)
       write-char(' ', port);
       recur(x);
     end method,
     tail(disclosure));
  write-string("}", port);
end method write-disclosure;

//  The vector case goes last just so that this version of WRITE can be
//  used in Scheme implementations in which records, ports, or
//  procedures are represented as vectors.  (Scheme 48 doesn't have this
//  property.)

define method write-other (obj, port :: <port>, recur)
  let disclosure = disclose(obj);
  if (disclosure)                       //Since disclose = method (x) #f; end method;
    write-disclosure(disclosure, port, recur); // this will never happen anyway
  /*
  elseif (input-port?(obj))
    write-string("#{Input-port}", port);
  elseif (output-port?(obj))
    write-string("#{Output-port}", port);
  */
  elseif (eof-object?(obj))
    write-string("#{End-of-file}", port);
  elseif (gn(obj) ~== obj & instance?(gn(obj), <symbol>))
    write-string(concatenate("$", as(<string>, gn(obj))), port);
  elseif (proto-method?(obj))
    write-string("#{Method}", port);
  elseif (proto-generic?(obj))
    write-string("#{Generic}", port);
  elseif (proto?(obj))
    let parent = as(<string>, first(gpns(obj)));
    write-string(concatenate("#{Object ", parent, "}"), port);
  // No more objects implemented as vectors
  elseif (instance?(obj, <vector>))
    write-vector(obj, port, recur);
  elseif (instance?(obj, <function>))
    write-string("#{Primitive-procedure}", port);
  elseif (unspecific?(obj))
    write-string("#{Unspecific}", port);
  else
    write-string("#{Random object}", port);
  end if;
end method write-other;

//  Display the symbol WHO-CARES as Who-cares.
define method display-type-name (name, port :: <port>)
  if (instance?(name, <symbol>))
    let s = as(<string>, name);
    let len = size(s);
    if (len > 0 & char-alphabetic?(s[0]))
      write-char(as-uppercase(s[0]), port);
      for (i = 1 then i + 1, until: i >= len)
        write-char(as-lowercase(s[i]), port);
      end for;
    else
      display(name, port);
    end if;
  else
    display(name, port);
  end if;
end method display-type-name;

//  DISPLAY

define method display (obj, #rest port-option)
  let port = output-port-option(port-option);
  local method recur (obj)
          if (instance?(obj, <string>))
            write-string(obj, port);
          elseif (instance?(obj, <character>))
            write-char(obj, port);
          else
            recurring-write(obj, port, recur);
          end if;
        end method recur;
  recur(obj);
end method display;

define method newline (#rest port-option) => ()
  write-char('\n', output-port-option(port-option));
end method newline;

define method disclose (x) => (res :: singleton(#f))
  #f;
end method disclose;

define method output-port-option (port-option) => (res)
  if (empty?(port-option))
    current-output-port();
  elseif (size(port-option) = 1)
    port-option[0];
  else
    error("write-mumble: too many arguments: %=", port-option);
  end if;
end method output-port-option;

