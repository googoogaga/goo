module: proto

//  Primitive procedures are inherited from Scheme. (er... Dylan)
define variable primitive-procedure? = rcurry(instance?, <function>);

define constant apply-primitive-procedure = apply; // Dylan APPLY

define constant <parameter-names> = <list>;
define constant <specializers>    = <list>;
define constant <body>            = <object>;

// define class <proto-function> (<object>)
//   slot proto-function-specializers :: <specializers>, 
//     required-init-keyword: specializers:;
//   slot proto-function-optionals? :: <boolean>,
//     required-init-keyword: optionals?:;
// end class <proto-function>;

define constant <proto-function> = <proto>;

// define class <proto-method> (<proto-function>)
//   slot proto-function-parameter-names :: <parameter-names>, 
//     required-init-keyword: parameter-names:;
//   slot proto-function-body        :: <body>,   
//     required-init-keyword: body:;
//   slot proto-function-environment :: <environment>,   
//     required-init-keyword: environment:;
// end class <proto-method>;

define constant <proto-method> = <proto>;

define method proto-function-number-required
    (x :: <proto-method>) => (res :: <integer>)
  size(proto-function-specializers(x))
end method;

define method proto-function-specializer 
    (x :: <proto-method>, i :: <integer>) => (res :: <proto>)
  element(proto-function-specializers(x), i)
end method;

define method make-proto-method 
    (parameter-names :: <parameter-names>, body :: <body>,
     specializers :: <specializers>, nary? :: <boolean>, env :: <environment>)
 => (res :: <proto-method>)
  %%clone(%ct-name(<Met>), specializers, nary?, parameter-names, body, env);
  // make(<proto-method>, 
  //      parameter-names: parameter-names, specializers: specializers,
  //      optionals?: optionals?, body: body, environment: env);
end method make-proto-method;

define %binding (%met) = make-proto-method;

define method proto-method? (exp) => (well? :: <boolean>)
  instance?(exp, <proto-method>) & proto-instance?(exp, %ct-name(<Met>))
end method proto-method?;

define constant <methods> = <list>;

// define class <proto-generic> (<proto-function>)
//   slot proto-function-methods :: <methods> = #(),   
//     init-keyword: methods:;
//   slot proto-function-cache = #f,   
//     init-keyword: cache:;
// end class <proto-generic>;

define constant <proto-generic> = <proto>;

define method make-proto-generic 
    (names :: <list>, body :: <function>,
     specs :: <specializers>, nary? :: <boolean>, methods :: <methods>) => (res :: <proto-generic>)
  // make(<proto-generic>, specializers: specs, methods: methods);
  %%clone(%ct-name(<Gen>), specs, nary?, methods)
end method make-proto-generic;

define %binding (%gen) = make-proto-generic;

define method proto-generic? (exp) => (well? :: <boolean>)
  instance?(exp, <proto-method>) & proto-instance?(exp, %ct-name(<Gen>))
end method proto-generic?;

define %binding (%gen?) = method (exp) %export(env(), proto-generic?(exp)) end;

define method proto-generic-from-method
    (x :: <proto-method>) => (gen :: <proto-generic>)
  let specs = map(always(*<any>*), proto-function-specializers(x));
  make-proto-generic
    (#(), method (env) end, specs, proto-function-optionals?(x), #());
end method;

define %binding (%met-to-gen) = proto-generic-from-method;

define method proto-function-same-method? 
    (x :: <proto-method>, y :: <proto-method>) => (well? :: <boolean>)
  every?(\==, proto-function-specializers(x), proto-function-specializers(y))
end method;

define method proto-generic-add-method
    (g :: <proto-generic>, m :: <proto-method>) => (res :: <proto-generic>)
  let methods
    = collecting ()
        let a? = #f;
	for (gm in proto-function-methods(g))
	  collect(if (proto-function-same-method?(gm, m)) a? := #t; m else gm end)
	end for;
        a? | collect(m);
        // format-out("ADD METHOD %=\n", ~a?);
      end collecting;
  proto-function-methods(g) := methods;
  proto-function-cache(g) := #f;
  g
end method;

define %binding (gen-add-met) = proto-generic-add-method;

define method %define-method (gen, met :: <proto-method>) => (res)
  let gen
    = if (proto-generic?(gen))
	gen
      else
	proto-generic-from-method(met)
      end if;
  proto-generic-add-method(gen, met);
  gen
end method;

define %binding (%define-method) = %define-method;

define constant <arguments> = <list>;

define method proto-instance?
    (o1 :: <proto>, o2 :: <proto>)
 => (well? :: <boolean>)
  if (o1 == o2)
    #t
  else
    block (return)
      for (o :: <proto> in proto-parents(o1))
	if (o == o2)
	  return(#t);
	end if;          
      end for;
      #f
    end block;
  end if;
end method;

define method %proto<
    (o1 :: <proto>, o2 :: <proto>, wrt :: <proto>)
 => (well? :: <boolean>)
  block (return)
    local method compare (o)
            if (o == o1)
              return(#t);
            elseif (o == o2)
              return(#f);
            else
              // look at the next one
            end if;     
          end method;     
    compare(wrt);
    for (o :: <proto> in proto-parents(wrt))
      compare(o);
    end for;
    error("Can't order specializers - arg/reference object %= is "
	  "neither %= nor %=", wrt, o1, o2)          
  end block;
end method;

define method %order-specializers
    (t1 :: <proto>, t2 :: <proto>, arg :: <proto>)
 => (order :: <symbol>, canonical-type :: <proto>)
  if (t1 == t2) 
    values(#"=", t1)
  else
    if (%proto<(t1, t2, arg))
      values(#"<", t1)
    else
      values(#">", t2)
    end if
  end if;
end method;

define method %order-methods
    (m1 :: <proto-method>, m2 :: <proto-method>, args :: <arguments>)
 => (order :: <symbol>)
  let nreq :: <integer> = proto-function-number-required(m1);
  local method loop (state :: <symbol>, idx :: <integer>)
	  if (idx == nreq)
	    state
	  else
	    let m1spec :: <proto> = proto-function-specializer(m1, idx);
	    let m2spec :: <proto> = proto-function-specializer(m2, idx);
	    let cmp :: <symbol>
	      = %order-specializers(m1spec, m2spec, element(args, idx));
	    let idx :: <integer> = idx + 1;
	    if (cmp == #"=")
	      loop(state, idx)
	    elseif (cmp ~== #"<>" & (state == #"=" | cmp == state))
	      loop(cmp, idx)
	    else
	      #"<>"
	    end if
	  end if
	end method;
  loop (#"=", 0)
end method;

define method proto-compute-sorted-applicable-methods-1
    (methods :: <list>, args :: <arguments>, order-methods :: <function>)
 => (ordered :: <list>, ambig :: <list>)
  let ohead :: <pair> = pair(#f, #());
  let ahead :: <pair> = pair(#f, #());
  local method loop (methods :: <list>) => ()
	  unless (methods == #())
	    let meth :: <proto-method> = head(methods);
	    local method make-ambiguous (headed-list :: <pair>) => ();
		    local method loop (l :: <list>)
			    unless (l == #())
			      let t1 :: <list> = tail(l);
			      tail(l) := tail(ahead);
			      tail(ahead) := l;
			      loop(t1)
			    end unless
			  end method;
		    loop(tail(headed-list));
		    tail(headed-list) := #();
		    tail(ahead) := pair(meth, tail(ahead))
		  end method;
	    local method precedes-all? (l :: <list>)
		    local method loop (l :: <list>)
			    if (l == #())
			      #t
			    elseif (order-methods(meth, head(l), args) ~== #"<")
			      #f
			    else
			      loop(tail(l))
			    end if
			  end method;
		    loop(l)
		  end method;
	    local method check-subsequent-ambiguities (oprev :: <pair>) => ();
		    if (~precedes-all?(tail(oprev)) | ~precedes-all?(tail(ahead)))
		      make-ambiguous(oprev)
		    else
		      tail(oprev) := pair(meth, tail(oprev))
		    end if;
		  end method;
	    local method insert (oprev :: <pair>, osub :: <list>) => ()
		    if (empty?(osub))
		      check-subsequent-ambiguities(oprev)
		    else
		      let indic = order-methods(meth, head(osub), args);
		      if (indic == #"<")          // Comes before current one.
			check-subsequent-ambiguities(oprev)
		      elseif (indic == #">")      // Comes after, check further.
			insert(osub, tail(osub))
		      else // Ambiguous.  All following ordered methods are too.
                        make-ambiguous(oprev)
		      end if
		    end if
		  end method;
	    insert(ohead, tail(ohead));
	    loop(tail(methods))
	  end unless
	end method;
  loop(methods);
  values(tail(ohead), tail(ahead))
end method;

define method %method-applicable?
    (meth :: <proto-method>, args :: <arguments>) => (answer :: <boolean>)
  let n :: <integer> = proto-function-number-required(meth);
  local method loop (i :: <integer>)
          if (i == n)
            #t
          elseif (proto-instance?(args[i], proto-function-specializer(meth, i)))
            loop(i + 1)
          else
            #f
          end if
        end method;
  loop(0)
end method;

define method proto-compute-sorted-applicable-methods
    (gf :: <proto-generic>, args :: <arguments>)
 => (ordered :: <list>, ambig :: <list>)
  let considered-methods
    = for (ans = #() 
	     then if (%method-applicable?(m, args)) pair(m, ans) else ans end,
	   m in proto-function-methods(gf))
      finally ans
      end for;
  proto-compute-sorted-applicable-methods-1
    (considered-methods, args, %order-methods)
end method;

define method proto-apply 
    (proc :: <function>, args :: <arguments>)
  apply-primitive-procedure(proc, args);
end method proto-apply;

define method optionalize-arguments 
    (env :: <environment>, n :: <integer>, args :: <arguments>)
 => (res :: <arguments>)
  iterate col
      (i :: <integer> = 0, l :: <arguments> = #(), p :: <arguments> = args)
    if (i = n)
      if (empty?(l))
	list(%export(env, p))
      else
	tail(l) := list(%export(env, p));
        args
      end if;
    else
      col(i + 1, p, tail(p));
    end if
  end iterate;
end method;

define class <primitive> (<object>)
  slot primitive-parameters,  required-init-keyword: parameters:;
  slot primitive-nary?,       required-init-keyword: nary?:;
  slot primitive-body,        required-init-keyword: body:;
  slot primitive-environment, required-init-keyword: environment:;
end class;

define method make-primitive 
    (params :: <list>, nary? :: <boolean>, 
     body :: <function>, env :: <environment>)
 => (res :: <primitive>)
  make(<primitive>, 
       parameters: params, nary?: nary?, body: body, environment: env)
end method;

define method primitive-apply (proc :: <primitive>, args :: <arguments>) 
  let names = primitive-parameters(proc);
  let env   = primitive-environment(proc);
  let reg-args
    = if (primitive-nary?(proc))
        format-out("NARGS = %=\n", args);
	optionalize-arguments
	  (env, size(primitive-parameters(proc)) - 1, args);
      else
	args
      end if;
  (primitive-body(proc))(env-extend!(env, names, reg-args));
end method;

define method proto-apply (proc :: <primitive>, args :: <arguments>) 
  primitive-apply(proc, args);
end method;

define method proto-apply
    (proc :: <proto-function>, args :: <arguments>) 
  if (proto-method?(proc))
    proto-apply-method(#f, proc, args)
  elseif (proto-generic?(proc))
    proto-apply-generic(proc, args)
  else
    error("APPLY NON-FUNCTION OBJECT %=\n", proc);
  end if
end method;

define method proto-apply-method (gen, proc :: <proto-method>, args :: <arguments>)
  let env
    = proto-function-environment(proc);
  let names
    = proto-function-parameters(proc);
  let reg-args
    = if (proto-function-optionals?(proc))
	optionalize-arguments(env, proto-function-number-required(proc), args);
      else
	args
      end if;
  let fun
    = gen | proc;
  let env
    = env-extend!(env, add(names, #"%%fun"), add(reg-args, fun));
  (proto-function-body(proc))(env);
end method;

define method proto-apply-generic (proc :: <proto-generic>, args :: <arguments>)
  if (%trace?())
    display("APPLY "); proto-write(proc); 
      display(" "); proto-write(map(curry(%import, env()), args)); newline();
  end if;
  let methods = proto-function-methods(proc);
  if (size(methods) = 1)
    let met = first(methods);
    if (%method-applicable?(met, args))
      proto-apply-method(proc, met, args)
    else
      format-out("No Applicable Methods Error %= on %=\n", proc, args);
      error("No Applicable Methods Error when calling %= on %=", proc, args);
    end if
  else
    gen-lookup(proc, args);
    /*
    let (sorted-methods, ambig-methods) 
      = proto-compute-sorted-applicable-methods(proc, args);
    if (size(ambig-methods) > 0)
      error("Ambiguous Method Error when calling %= on %=", proc, args);
    elseif (size(sorted-methods) = 0)
      format-out("No Applicable Methods Error %= on %=\n", proc, args);
      error("No Applicable Methods Error when calling %= on %=", proc, args);
    else
      proto-apply-method(proc, first(sorted-methods), args);
    end if;
    */
  end if;
end method;

define method export-boot-list (env :: <environment>, x :: <list>)
  iterate loop (r = env-binding-value(env, "nil"), x :: <list> = x)
    if (empty?(x))
      invoke-primitive(env, #"%rev!", r)
    else
      loop(invoke-primitive(env, #"%pair", head(x), r), tail(x))
    end if
  end iterate
end method;

define method import-boot-list (env :: <environment>, x)
  iterate loop (r = #(), x = x)
    if (rt-true?(env, invoke-primitive(env, #"%empty?")))
      reverse!(r)
    else
      let head = invoke-primitive(env, #"%head", x);
      let tail = invoke-primitive(env, #"%tail", x);
      loop(pair(head, r), tail)
    end if
  end iterate
end method;

define method proto-apply (proc :: <&proto>, args :: <arguments>)
  format-out("APPLYING PROC %=\n", gbn(proc));
  %fun-reg() := proc;
  // TODO: GET THESE OFFSETS FROM RUNTIME 
  let body
    = %slot-elt(proc, 1); // body offset
  if (instance?(body, <primitive>))
    proto-apply(body, args)
  else
    let env
      = boot-env();
    let names
      = invoke-primitive(env, #"%fun-names", proc);
    let reg-args
      = if (rt-true?(env, invoke-primitive(env, #"%fun-nary?", proc)))
          format-out("  APPLYING NARY PROC\n");
          let specs = invoke-primitive(env, #"%fun-specs", proc);
          let nreq  = %slot-elt(invoke-primitive(env, #"%len", specs), 0);
          format-out("  NREQ %=\n", nreq);
          let args  = optionalize-arguments(env, nreq, args);
          args[nreq] := export-boot-list(env, args[nreq]);
        else
          args
        end if;
    body(env-extend!(%slot-elt(proc, 4), names, reg-args)); // env offset
  end if;
end method;

define function %build-booted-accessors ()
  local method eval (sexpr)
          // format-out("SEXPR = %=\n", sexpr);
	  let o = objectify(sexpr, ct-env(), #f);
	  let e = ast-eval(o, env());
	  e
	end method;
  do(eval, *booted-accessors*);
end function;

define %binding (%apply) = proto-apply;

define %binding (%spec-nil)  = #();
define %binding (%spec-pair) = pair;
define %binding (%sig-true)  = #t;
define %binding (%sig-false) = #f;

define %binding (%%fun-specs-setter)
  = method (specs, fun) 
      proto-function-specializers(fun)
        := %shallow-import-list(specs);
    end method;

define %binding (%%fun-nary?-setter)
  = method (nary?, fun) 
      proto-function-optionals?(fun) := %import(env(), nary?);
    end method;
