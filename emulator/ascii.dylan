module: proto

//  -*- Mode: Scheme; Syntax: Scheme; Package: Scheme; -*-
//  Copyright (c) 1993, 1994 Richard Kelsey and Jonathan Rees.  See file COPYING.
//  Portable definitions of char->ascii and ascii->char
//  Don't detabify this file!
//  This module defines char->ascii and ascii->char in terms of
//  char->integer and integer->char, with no assumptions about the encoding.
//  Portable except maybe for the strings that contain tab, page, and
//  carriage return characters.  Those can be flushed if necessary.
define variable ascii-limit = 128;

define variable ascii-chars :: <simple-object-vector>
  = begin
      let ascii-chars = make(<vector>, size: ascii-limit, fill: #f);
      let unusual
	  = method (s)
	      if (~ (size(s) = 1)
		    | begin let c = s[0]; (c = ' ' | c = '\n'); end)
		error("unusual whitespace character lost: %=", s);
	      else
		s;
	      end if;
	    end method;
      let init
	  = method (i, s)
	      for (i = i then i + 1, j = 0 then j + 1, until: j = size(s))
		ascii-chars[i] := s[j];
	      end for;
	    end method;
      init(9, unusual("\t"));
      // tab
      init(12, unusual("\f"));
      // page
      init(13, unusual("\r"));
      // carriage return
      init(10, as(<string>, list('\n')));
      init(32, " !\"#$%&'()*+,-./0123456789:;<=>?");
      init(64, "@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_");
      init(96, "`abcdefghijklmnopqrstuvwxyz{|}~");
      ascii-chars;
    end;

define method ascii->char (n :: <integer>) => (c :: <character>)
  ascii-chars[n] | error("not a standard character's ASCII code: %=", n);
end method ascii->char;

define method char->integer (char :: <character>) => (n :: <integer>)
  as(<integer>, char);
end method char->integer;

define method integer->char (n :: <integer>) => (c :: <character>)
  as(<character>, n);
end method integer->char;

define variable native-chars :: <pair>
  = begin
      let end259 = size(ascii-chars);
      local method loop (i, least, greatest)
	      if (i = end259)
		begin
		  let v = make(<vector>, size: greatest - least + 1, fill: #f);
		  for (i = 0 then i + 1, until: i = end259)
		    let c = ascii-chars[i];
		    if (c) v[char->integer(c) - least] := i; end if;
		  finally
		    pair(least, v);
		  end for;
		end;
	      else
		begin
		  let c = ascii-chars[i];
		  if (c)
		    let n = char->integer(c);
		    loop(i + 1, if (least) min(least, n); else n; end if,
			 if (greatest) max(greatest, n); else n; end if);
		  else
		    loop(i + 1, least, greatest);
		  end if;
		end;
	      end if;
	    end method loop;
      loop(0, #f, #f);
    end;

define method char->ascii (char :: <character>) => (n :: <integer>)
  tail(native-chars)[char->integer(char) - head(native-chars)]
    | error("not a standard character: %=", char);
end method char->ascii;

define variable ascii-whitespaces = #(32, 10, 9, 12, 13);
