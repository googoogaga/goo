module: proto

define method parse (s :: <string>, #key ct-env = ct-env())
  objectify(proto-read-from-string(s), ct-env, #f);
end method;

define method str-parse (s :: <string>, #key ct-env = ct-env())
  format-out("%=\n", parse(s, ct-env: ct-env));
end method;

define method eval
    (x :: <string>, #key ct-env = ct-env(), rt-env = env()) => (res)
  let o = parse(x, ct-env: ct-env);
  let e = ast-eval(o, rt-env);
  e
end method;

define method boot-eval (x :: <string>)
  eval(x, ct-env: ct-boot-env(), rt-env: boot-env());
end method;

define method str-eval
    (x :: <string>, #key ct-env = ct-env(), rt-env = env()) => (res)
  proto-write-to-string(eval(x, ct-env: ct-env, rt-env: rt-env));
end method;

define method str-boot-eval (x :: <string>)
  str-eval(x, ct-env: ct-boot-env(), rt-env: boot-env());
end method;

define method read-file (filename :: <string>) => (res)
  call-with-input-port
    (filename,
     method (port)
       iterate loop (forms = #())
	 let x = proto-read(port);
	 if (eof-object?(x))
           sexpr-sequence->begin(reverse!(forms))
         else
	   loop(pair(x, forms));
	 end if;
       end iterate;
     end method);
end method;

define method load-file 
    (filename :: <string>, rt-env :: <environment>, ct-env) 
  let x = read-file(filename);
  let o = objectify(x, ct-env, #f);
  ast-eval(o, rt-env);
  report-undefined-global-bindings(ct-env);
end method;

// define variable *base-path* = "\\jrb\\proto\\src\\";
// define variable *base-path* = "\\jrb\\ai\\proto\\src\\";
define variable *base-path* = "E:\\proto\\SRC\\";
define variable *c-base-path* = concatenate(*base-path*, "..\\c\\");
// define variable *base-path* = "d:\\gregs\\proto\\";

define function proto-filename (name)
  concatenate(*base-path*, name, ".proto")
end function;

define function c-filename (name)
  concatenate(*c-base-path*, name, ".c")
end function;

define method load-runtime ()
  load-file(proto-filename("macros"), env(), ct-env());
  load-file(proto-filename("runtime-emulator-prologue"), env(), ct-env());
  load-file(proto-filename("runtime"), env(), ct-env());
  load-file(proto-filename("runtime-emulator-epilogue"), env(), ct-env());
end method;

define method load-objects ()
  load-file(proto-filename("objects"), env(), ct-env());
end method;

define method load-io ()
  load-file(proto-filename("io"), env(), ct-env());
end method;

define method load-ascii ()
  load-file(proto-filename("ascii"), env(), ct-env());
end method;

define method load-read ()
  load-file(proto-filename("read"), env(), ct-env());
end method;

define method load-write ()
  load-file(proto-filename("write"), env(), ct-env());
end method;

define method load-syntax ()
  load-file(proto-filename("syntax"), env(), ct-env());
end method;

define method load-ast ()
  load-file(proto-filename("ast"), env(), ct-env());
end method;

define method load-environment ()
  load-file(proto-filename("environment"), env(), ct-env());
end method;

define method load-ast-eval ()
  load-file(proto-filename("ast-eval"), env(), ct-env());
end method;

define method load-top ()
  load-file(proto-filename("top"), env(), ct-env());
end method;

define method load-tables ()
  load-file(proto-filename("tables"), env(), ct-env());
end method;

define method load-boot ()
  load-file(proto-filename("boot"), boot-env(), ct-boot-env());
end method;

define method load-functions ()
  load-file(proto-filename("functions"), env(), ct-env());
end method;

define method load-tests ()
  load-file(proto-filename("tests"), env(), ct-env());
end method;

define method prompt-for-command-expression (level, prompt)
  display(level);
  display(prompt);
  proto-read();
end method prompt-for-command-expression;

define variable *debugger-stack* = #f;

define method backtrace (env :: <environment>)
  iterate loop (env = env, i = 0)
    unless (instance?(env, <global-environment>))  
      let frame = environment-frame(env);
      let fun   = frame-binding-value(frame, #"%%fun", always(#f));
      format-out("FRAME %= FUN %=\n", i, fun);
      frame-do-bindings
	(frame, method (name, value)
		  unless (name == #"%%fun")
		    format-out("  %= %=\n", name, value);
		  end unless;
		end method);
      loop(environment-parent(env), i + 1);
    end unless;
  end iterate;
end method;

//  Initialization and driver loop
//  The prompt is handled a bit differently than in the notes
define method top (#key ct-env = ct-env(), rt-env = env())
  sub-top(0, ct-env, rt-env);
end method top;

//  Initialization and driver loop
//  The prompt is handled a bit differently than in the notes
define method sub-top (level, ct-env, rt-env)
  block ()
    newline();
    let form   = prompt-for-command-expression(level, "<= ");
    unless (form = #(#"quit"))
      let ast    = objectify(form, ct-env, #f);
      let result = ast-eval(ast, rt-env);
      display(level); display("=> ");
      proto-write(result);
      sub-top(level, ct-env, rt-env);
    end unless;
  exception (e :: <error>)
    format-out("CAUGHT %=\n", e);
    format-out("CONTINUING ...\n");
    sub-top(level, ct-env, rt-env);
  end block;
end method;



