module: proto

define generic ast-eval (e :: <program>, env :: <environment>);

define method ast-eval (e :: <constant>, env :: <environment>)
  %export(env, constant-value(e))
end method;

define method ast-eval (e :: <raw-constant>, env :: <environment>)
  constant-value(e)
end method;

define method ast-eval (e :: <compile-time>, ee :: <environment>)
  ast-eval(compile-time-program(e), env());
end method;

define method ast-eval-specs 
    (specs :: <list>, nary? :: <boolean>, env :: <environment>) => (res)
  let nreq
    = if (nary?) size(specs) - 1 else size(specs) end;
  let rev-specs
    = iterate loop (res = #(), specs = specs, i = 0)
        if (i = nreq)
          res
        else
          let spec = head(specs);
          let type = if (spec) ast-eval(spec, env) else *top* end;
          loop(pair(type, res), tail(specs), i + 1);
        end if;
      end iterate;
  let specs
    = iterate loop 
	  (res = env-binding-value(env, #"%spec-nil"), specs = rev-specs)
	if (empty?(specs))
	  res
	else
	  loop(invoke-primitive
		 (env, #"%spec-pair", head(specs), res), tail(specs));
	end if
      end iterate;
  specs
end method;

define function invoke-primitive 
    (env :: <environment>, name :: <symbol>, #rest args)
  let primitive = env-binding-value(env, name);
  proto-apply(primitive, as(<arguments>, args));
end function;

define method rt-boolean (env, x :: <boolean>) => (res)
  env-binding-value(env, if (x) #"%sig-true" else #"%sig-false" end);
end method;

define method export-proto-method (names, specs, nary?, body, env)
  let specs    = ast-eval-specs(specs, nary?, env);
  let rt-nary? = rt-boolean(env, nary?);
  invoke-primitive(env, #"%met", names, body, specs, rt-nary?, env);
end method;

define method export-proto-method-evaling (e :: <ast-method>, env :: <environment>)
  let params = function-bindings(e);
  let eval   = method (env :: <environment>) ast-eval(function-body(e), env) end;
  export-proto-method
    (map(binding-name, params), map(binding-type, params), 
     function-nary?(e), eval, env);
end method;

define method ast-eval (e :: <ast-method>, env :: <environment>)
  export-proto-method-evaling(e, env);
end method;

define method ast-eval (e :: <ast-primitive>, env :: <environment>)
  let params = function-bindings(e);
  let eval   = method (env :: <environment>) ast-eval(function-body(e), env) end;
  make-primitive(map(binding-name, params), function-nary?(e), eval, env);
end method;

define method ast-eval (e :: <ast-generic>, env :: <environment>)
  let params = function-bindings(e);
  let nary?  = rt-boolean(env, function-nary?(e));
  let specs  = ast-eval-specs(map(binding-type, params), function-nary?(e), env);
  invoke-primitive
    (env, #"%gen", map(binding-name, params), 
     method (env :: <environment>) end, // TODO: UNUSED
     specs, rt-boolean(env, nary?), env-binding-value(env, #"%spec-nil"));
end method;

define method ast-eval (e :: <reference>, env :: <environment>)
  env-binding-value
    (env, binding-name(reference-binding(e)));
end method;

define constant $unbound = list("UNBOUND");

define method ast-eval (e :: <bound?>, env :: <environment>)
  let value
    = env-binding-value
        (env, binding-name(reference-binding(bound?-reference(e))), 
	 unbound: method (x) $unbound end);
  %export(env, value ~== $unbound);
end method;

define method ast-eval (e :: <global-assignment>, env :: <environment>)
  let value = ast-eval(assignment-form(e), env);
  env-binding-value(env, binding-name(assignment-binding(e))) := value;
end method;

define method ast-eval (e :: <local-assignment>, env :: <environment>)
  let value   = ast-eval(assignment-form(e), env);
  let binding = reference-binding(assignment-reference(e));
  env-binding-value(env, binding-name(binding)) := value;
end method;

define method ast-eval (e :: <definition>, env :: <environment>)
  let value = ast-eval(assignment-form(e), env);
  env-define-binding!
    (env, binding-name(assignment-binding(e)), value);
  %export(env, #f);
end method;

define method rt-true? (env :: <environment>, x) => (res :: <boolean>)
  x ~== env-binding-value(env, #"%false")
end method;

define method ast-eval (e :: <ast-method-definition>, env :: <environment>)
  next-method();
end method;

define class <box> (<object>)
  slot box-value = *nul*;
end class;

define method ast-eval (e :: <box-read>, env :: <environment>)
  box-value(ast-eval(box-reference(e), env))
end method;

define method ast-eval (e :: <box-write>, env :: <environment>)
  box-value(ast-eval(box-reference(e), env))
    := ast-eval(box-form(e), env);
end method;

define method ast-eval (e :: <box-creation>, env :: <environment>)
  env-binding-value(env, binding-name(reference-binding(box-reference(e))))
    := make(<box>);
end method;

define method ast-eval (e :: <alternative>, env :: <environment>)
  if (ast-eval(alternative-condition(e), env) == *%false*)
    ast-eval(alternative-alternant(e), env)
  else
    ast-eval(alternative-consequent(e), env)
  end if
end method;

define method ast-eval (e :: <sequential>, env :: <environment>)
  iterate eval (e = e)
    let nxt = sequential-tail(e);
    let val = ast-eval(sequential-head(e), env);
    if (empty-sequential?(nxt))
      val
    else
      eval(nxt)
    end if
  end iterate;
end method;

define method ast-eval (e :: <argument-list>, env :: <environment>)
  iterate eval (res = #(), args = e)
    if (empty-argument-list?(args))
      reverse!(res)
    else
      eval(pair(ast-eval(arguments-head(args), env), res), 
	   arguments-tail(args));
    end if
  end iterate
end method;

define method ast-eval (e :: <regular-application>, env :: <environment>)
  let f    = ast-eval(application-function(e), env);
  let args = ast-eval(application-arguments(e), env);
  proto-apply(f, args);
end method;

define method ast-eval (e :: <predefined-application>, env :: <environment>)
  let f    = env-binding-value(env, binding-name(application-binding(e)));
  let args = ast-eval(application-arguments(e), env);
  proto-apply(f, args);
end method;

/// todo: what is this???

define method ast-eval (e :: <fix-let>, env :: <environment>)
  let args = ast-eval(fix-let-arguments(e), env);
  ast-eval(fix-let-body(e),
	   env-extend!
	     (env, map(binding-name, fix-let-bindings(e)), args));
end method;

define method ast-eval (e :: <locals>, env :: <environment>)
  let bindings
    = locals-bindings(e);
  let new-env 
    = env-extend!
        (env, map(binding-name, bindings), map(always(*nul*), bindings));
  do(method (name, value) env-binding-value(new-env, name) := value end, 
     map(binding-name, bindings), 
     map(rcurry(ast-eval, new-env), locals-functions(e)));
  ast-eval(locals-body(e), new-env)
end method;

define method export-exit (return, env) => (res)
  local method rproc (env :: <environment>)
	  apply(return, %import(env, env-binding-value(env, #"x")))
	end method;
  export-proto-method(list(#"x"), #(), #t, rproc, env);
end method;

define method ast-eval (e :: <bind-exit>, env :: <environment>)
  block (return)
    let rproc = method (env :: <environment>) 
		  return(env-binding-value(env, #"x")) 
		end method;
    let exit  = export-proto-method(list(#"x"), list(#f), #f, rproc, env);
    let main  = export-proto-method-evaling(bind-exit-main-fun(e), env);
    proto-apply(main, list(exit))
  end block;
end method;

define method ast-eval (e :: <unwind-protect>, env :: <environment>)
  block ()
    let protect = export-proto-method-evaling(unwind-protect-protected-thunk(e), env);
    proto-apply(protect, #());
  cleanup
    let cleanup = export-proto-method-evaling(unwind-protect-cleanup-thunk(e), env);
    proto-apply(cleanup, #());
  end block;
end method;

define class <proto-condition> (<restart>)
  slot proto-condition-value, required-init-keyword: condition:;
end class;

define method ast-eval (e :: <monitor>, env :: <environment>)
  proto-apply(env-binding-value(env, #"%with-monitor"),
	      list(ast-eval(monitor-handler(e), env), 
		   ast-eval(monitor-main-thunk(e), env)));
end method;

define class <proto-pattern-match-failure> (<simple-condition>)
end class;

define method match-error (message :: <string>, #rest args)
  // format-out("MATCH ERROR %=\n", message);
  signal(make(<proto-pattern-match-failure>,
	      format-string:    message,
	      format-arguments: args));
end method;

define method ast-eval-match (match :: <match-empty-list>, v, e :: <environment>)
  unless (v == *Nil*)
    match-error("Match Empty Failure of %= on %=\n", %import(e, v), match);
  end unless;
end method;

define method ast-eval-match (match :: <match-list>, v, e :: <environment>)
  if (proto-instance?(v, *<Lst>*))
    for (v = v then %tail(v), match in match-elements(match))
       ast-eval-match(match, v, e);
    end for;
  else
    match-error("Match Failure of %= on %= Expected List\n", %import(e, v), match);
  end if;
end method;

define method ast-eval-match (match :: <match-atom>, v, e :: <environment>)
  if (v == *nil*)
    match-error("Match Failure Empty List on %=\n", match);
  else
    let imp-exp = %import(e, %head(v));
    unless (imp-exp == match-value(match))
      match-error("Match Failure of %= on %=\n", imp-exp, match);
    end unless;
  end if;
end method;

define method ast-eval-match (match :: <match-unquote>, v, e :: <environment>)
  if (v == *nil*)
    match-error("Match Failure Empty List on %=\n", match);
  else
    env-binding-value(e, binding-name(match-binding(match))) := %head(v);
  end if;
end method;

define method ast-eval-match
    (match :: <match-unquote-splicing>, v, e :: <environment>)
  env-binding-value(e, binding-name(match-binding(match))) := v;
end method;

define method ast-eval-match
    (match :: <match-sublist>, v, e :: <environment>)
  if (proto-instance?(v, *<Lst>*) & v ~== *nil*)
    ast-eval-match(match-element(match), %head(v), e)
  else
    match-error("Match Failure of %= on %= Expected List\n", 
		%import(e, v), match);
  end if
end method;

define method ast-eval (x :: <syntax-if>, env :: <environment>) => (res)
  let value
    = ast-eval(sif-value(x), env);
  let bindings
    = sif-bindings(x);
  let new-env  
    = env-extend!
        (env, map(binding-name, bindings), map(always(*nul*), bindings));
  block ()
    ast-eval-match(sif-pattern(x), value, new-env);
    ast-eval(sif-consequent(x), new-env);
  exception (exception :: <proto-pattern-match-failure>)
    ast-eval(sif-alternative(x), env);
  end block;
end method;

