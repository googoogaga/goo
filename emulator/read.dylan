module: proto

//  -*- Mode: Scheme; Syntax: Scheme; Package: Scheme; -*-
//  Copyright (c) 1993, 1994 Richard Kelsey and Jonathan Rees.  See file COPYING.
//  A little Scheme reader.
//  Nonstandard things used:
//   Ascii stuff: char->ascii, ascii->char, ascii-whitespaces, ascii-limit
//     (for dispatch table; portable definitions in alt/ascii.scm)
//   reverse-list->string  -- ok to define as follows:
//     (define (reverse-list->string l n)
//       (list->string (reverse l)))
//   make-immutable! -- ok to define as follows:
//     (define (make-immutable! x) x)
//   signal (only for use by reading-error; easily excised)

// READ

define method proto-read (#rest port-option) => (res)
  let port = input-port-option(port-option);
  local method loop ()
          let form = sub-read(port);
          if (~ reader-token?(form))
            form;
          elseif (form == $close-paren)
            warn("discarding extraneous right parenthesis");
            loop();
          else
            reading-error(port, tail(form));
          end if;
        end method loop;
  loop();
end method proto-read;

define method proto-read-from-string (x :: <string>) => (res)
  call-with-string-input-port(x, proto-read)
end method proto-read-from-string;

define method sub-read-carefully (port :: <port>) => (res)
  let form = sub-read(port);
  if (eof-object?(form))
    reading-error(port, "unexpected end of file");
  elseif (reader-token?(form))
    reading-error(port, tail(form));
  else
    form;
  end if;
end method sub-read-carefully;

define variable $reader-token-marker = vector(#"reader-token");

define method make-reader-token (message) => (res)
  vector($reader-token-marker, message);
end method make-reader-token;

define method reader-token? (form) => (well? :: <boolean>)
  instance?(form, <vector>) & form[0] == $reader-token-marker;
end method reader-token?;

define variable $close-paren = make-reader-token("unexpected right parenthesis");

define variable $dot = make-reader-token("unexpected \" . \"");

//  Main dispatch

define method sub-read (port :: <port>) => (res)
  let c = read-char(port);
  if (eof-object?(c)) 
    c;
  else
    (*read-dispatch-vector*[char->ascii(c)])(c, port);
  end if;
end method sub-read;

define variable *read-dispatch-vector* 
  = make(<vector>, size: ascii-limit,
	 fill: method (c, port)
		 reading-error(port, "illegal character read", c);
	       end method);

define variable *read-terminating?-vector*
  = make(<vector>, size: ascii-limit, fill: #t);

define method set-standard-syntax! (char :: <character>, terminating?, reader)
  *read-dispatch-vector*[char->ascii(char)] := reader;
  *read-terminating?-vector*[char->ascii(char)] := terminating?; 
end method set-standard-syntax!;

begin
  let sub-read-whitespace
    = method (c, port)
	c; // ignored
	sub-read(port);
      end method;
  begin
    do(method (c)
         *read-dispatch-vector*[c] := sub-read-whitespace;
       end method,
       ascii-whitespaces);
    ascii-whitespaces;
  end; end;

begin
  let sub-read-constituent
      = method (c, port)
          parse-token(sub-read-token(c, port), port);
        end method;
  let list10496
    = concatenate-as
        (<list>,
	 "!$%&*+-./0123456789:<=>?@^_~ABCDEFGHIJKLM",
	 "NOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
  begin
    do(method (c)
         set-standard-syntax!(c, #f, sub-read-constituent);
       end method,
       list10496);
    list10496;
  end; end;

// Usual read macros

define method set-standard-read-macro! 
    (char :: <character>, terminating?, proc :: <function>)
  set-standard-syntax!(char, terminating?, proc); 
end method set-standard-read-macro!;

define method sub-read-list (c :: <character>, port :: <port>) => (res)
  let form = sub-read(port);
  if (eof-object?(form))
    reading-error(port, "end of file inside list -- unbalanced parentheses");
  elseif (form == $close-paren)
    #();
  elseif (form == $dot)
    begin
      let last-form = sub-read-carefully(port);
      let another-form = sub-read(port);
      if (another-form == $close-paren)
        last-form;
      else
        reading-error(port, "randomness after form after dot",
		      another-form);
      end if;
    end;
  else
    pair(form, sub-read-list(c, port));
  end if; end method sub-read-list;

set-standard-read-macro!('(', #t, sub-read-list);

set-standard-read-macro!
  (')', #t, method (c, port) c; port; $close-paren; end);

set-standard-read-macro!
  ('\'', #t, method (c, port) c; list(#"quote", sub-read-carefully(port)); end);

set-standard-read-macro!
  ('`', #t,
   method (c, port) c; list(#"quasiquote", sub-read-carefully(port)); end);

set-standard-read-macro!
  (',', #t,
   method (c, port)
     c;
     let next = peek-char(port);
     let keyword
	 = if (eof-object?(next))
	     reading-error(port, "end of file after ,");
	   elseif (next = '@')
	     read-char(port);
	     #"unquote-splicing";
	   else
	     #"unquote";
	   end if;
     list(keyword, sub-read-carefully(port));
   end method);

define constant $string-escape-chars
  = begin
      let vec = make(<vector>, size: ascii-limit);
      vec[as(<integer>, 't')] := '\t';
      vec[as(<integer>, 'f')] := '\f';
      vec[as(<integer>, 'r')] := '\r';
      vec[as(<integer>, 'n')] := '\n';
      vec
    end;

set-standard-read-macro!
  ('"', #t,
   method (c, port)
     c; // ignored
     local method loop (l, i)
	     let c = read-char(port);
	     if (eof-object?(c))
	       reading-error(port, "end of file within a string");
	     elseif (c = '\\')
	       begin
		 let c = read-char(port);
		 if (eof-object?(c))
		   reading-error(port, "end of file within a string");
		 elseif (c = '\\' | c = '"')
		   loop(pair(c, l), i + 1);
		 else
		   let temp = element($string-escape-chars, as(<integer>, c));
		   if (temp)
		     loop(pair(temp, l), i + 1)
		   else
		     reading-error(port, "invalid escaped character in string",
				   c);
		   end if;
		 end if;
	       end;
	     elseif (c = '"')
	       reverse-list->string(l, i);
	     else
	       loop(pair(c, l), i + 1);
	     end if;
	   end method loop;
     loop(#(), 0);
   end method);

set-standard-read-macro!
  (';', #t,
   method (c, port)
     c; // ignored
     gobble-line(port);
     sub-read(port);
   end method);

define method gobble-line (port :: <port>)
  local method loop ()
          let c = read-char(port);
          if (eof-object?(c)) c; elseif (c = '\n') #f; else loop(); end if;
        end method loop;
  loop(); 
end method gobble-line;

define variable *sharp-macros* = #();

define method define-sharp-macro (c, proc)
  *sharp-macros* := pair(pair(c, proc), *sharp-macros*); 
end method define-sharp-macro;

set-standard-read-macro!
  ('#', #f,
   method (c, port)
     c;
     let c = peek-char(port);
     let c
	 = if (eof-object?(c))
	     reading-error(port, "end of file after #");
	   else
	     as-lowercase(c);
	   end if;
     let probe = assq(c, *sharp-macros*);
     if (probe)
       (tail(probe))(c, port);
     else
       reading-error(port, "unknown # syntax", c);
     end if;
   end method);

define-sharp-macro
  ('f', method (c, port) read-char(port); #f; end);

define-sharp-macro('t', method (c, port) read-char(port); #t; end);

define constant $char-long-names
  = #(#(#"tab", '\t'), #(#"page", '\f'), #(#"return", '\r'), 
      #(#"newline", '\n'), #(#"space", ' '));

define-sharp-macro
  ('\\',
   method (c, port)
     read-char(port);
     let c = peek-char(port);
     if (eof-object?(c))
       reading-error(port, "end of file after #\\");
     elseif (char-alphabetic?(c))
       begin
	 let name = sub-read-carefully(port);
	 if (size(as(<string>, name)) = 1)
	   c;
	 else
	   let temp = assq(name, $char-long-names);
	   if (temp)
	     head(tail(temp)); // Proto => syntax
	   else
	     reading-error(port, "unknown #\\ name", name);
	   end if;
	 end if;
       end;
     else
       read-char(port);
     end if;
   end method);

define-sharp-macro
  ('(',
   method (c, port)
     read-char(port);
     as(<vector>, sub-read-list(c, port));
   end method);

begin
  let number-sharp-macro
    = method (c, port)
	let string = sub-read-token('#', port);
	string->number(string)
	  | reading-error(port, "unsupported number syntax", string);
      end method;
  do(method (c) define-sharp-macro(c, number-sharp-macro); end method,
     #('b', 'o', 'd', 'x', 'i', 'e'));
end;

// Tokens

define method sub-read-token (c :: <character>, port :: <port>) => (res)
  local method loop (l, n)
          let c = peek-char(port);
          if (eof-object?(c)
                | *read-terminating?-vector*[char->ascii(c)])
            reverse-list->string(l, n);
          else
            loop(pair(preferred-case(read-char(port)), l), n + 1);
          end if;
        end method loop;
  loop(list(preferred-case(c)), 1); 
end method sub-read-token;

define method parse-token (string :: <string>, port :: <port>) => (res)
  // To Do: number with unit suffix, e.g. 8pt
  if (begin
        let c = string[0];
        char-numeric?(c)
          | c = '+'
          | c = '-'
          | c = '.'; end)
    let maybe-number = string->number(string);
    if (maybe-number)
      maybe-number;
    elseif (member?(string, $strange-symbol-names, test: \=))
      as(<symbol>, make-immutable!(string));
    elseif (string = ".")
      $dot;
    else
      reading-error(port, "unsupported number syntax", string);
    end if;
  else
    as(<symbol>, make-immutable!(string));
  end if; end method parse-token;

define variable $strange-symbol-names 
  = #("+", "-", "...",
      "1st", "2nd", "3rd", // proto seq support
      "1+", "-1+", // Only for S&ICP support
      "->"); // Only for JAR's thesis

define variable preferred-case 
  = // if (as(<string>, #"t")[0] = 'T')
    //  as-uppercase;
    // else
      as-lowercase;
    // end if;

// Reader errors

define method reading-error (port :: <port>, message :: <string>, #rest irritants)
  error(concatenate(message, ": %="),  // was: apply(...)
        concatenate(irritants, list(port)));
end method reading-error;

define method warn (string :: <string>, #rest irritants-and-port)
  apply(signal, string, irritants-and-port);
                           // format-string: string,
                           // format-arguments: irritants-and-port
end method warn;

define method input-port-option (port-option) => (res)
  if (empty?(port-option))
    current-input-port();
  elseif (size(port-option) = 1)
    port-option[0];
  else
    error("read-mumble: too many arguments: %=", port-option);
  end if;
end method input-port-option;

define method reverse-list->string 
    (l :: <list>, n :: <integer>) => (res :: <string>)
  reverse!(as(<string>, l));
end method reverse-list->string;

define method make-immutable! (x) 
  x;
end method make-immutable!;

