module: proto

//  Evaluator from section 4.1.6
//  Analyze produces (lambda (env) ...)

define method analyze (exp) => (res)
  if (sexpr-self-evaluating?(exp))
    analyze-self-evaluating(exp);
  elseif (sexpr-quoted?(exp))
    analyze-quoted(exp);
  elseif (sexpr-backquote?(exp))
    analyze-backquote(exp);
  elseif (sexpr-syntax-if?(exp))
    analyze-syntax-if(exp);
  elseif (sexpr-variable?(exp))
    analyze-variable(exp);
  elseif (sexpr-assignment?(exp))
    analyze-assignment(exp);
  elseif (sexpr-definition?(exp))
    analyze-definition(exp);
  elseif (sexpr-if?(exp))
    analyze-if(exp);
  elseif (sexpr-method?(exp))
    analyze-method(exp);
  elseif (sexpr-begin?(exp))
    analyze-sequence(sexpr-begin-actions(exp));
  elseif (sexpr-let?(exp))
    analyze(sexpr-let->combination(exp));
  elseif (sexpr-itr?(exp))
    analyze(sexpr-itr->loc(exp));
  elseif (sexpr-loc?(exp))
    analyze-loc(exp);
  elseif (sexpr-block?(exp))
    analyze-block(exp);
  elseif (sexpr-unwind-protect?(exp))
    analyze-unwind-protect(exp);
  elseif (sexpr-monitor?(exp))
    analyze-monitor(exp);
  elseif (sexpr-signal?(exp))
    analyze-signal(exp);
  elseif (sexpr-isa?(exp))
    analyze-isa(exp);
  elseif (sexpr-slot?(exp))
    analyze-slot(exp);
  elseif (sexpr-macro?(exp))
    analyze-macro(exp);
  elseif (macro-application?(exp))
    analyze(macro-expand(exp));
  elseif (sexpr-macro-expand?(exp))
    analyze-macro-expand(exp);
  elseif (sexpr-application?(exp))
    analyze-application(exp);
  else
    error("Unknown expression type -- ANALYZE: %=", exp);
  end if;
end method analyze;

define method analyze-self-evaluating (exp) => (res)
  method (env :: <environment>)
    %export(exp);
  end method;
end method analyze-self-evaluating;

define method analyze-quoted (exp :: <list>) => (res)
  let qval = sexpr-text-of-quotation(exp);
  method (env :: <environment>)
    %export(qval);
  end method;
end method analyze-quoted;

define method analyze-variable (exp :: <symbol>) => (res)
  method (env :: <environment>)
    env-binding-value(env, exp);
  end method;
end method analyze-variable;

define method analyze-assignment (exp :: <list>) => (res)
  let var = sexpr-assignment-variable(exp);
  if (sexpr-application?(var))
    let op = sexpr-operator(var);
    if (sexpr-variable?(op))
      analyze-application
	(sexpr-make-application
	   (sexpr-make-setter-name(op), 
	    concatenate(list(sexpr-assignment-value(exp)), sexpr-operands(var))));
    else
      error("Unsupported Set!: %=", exp);
    end if
  else
    let vproc = analyze(sexpr-assignment-value(exp));
    method (env :: <environment>)
      env-binding-value(env, var) := vproc(env);
    end method;
  end if
end method analyze-assignment;

define method analyze-definition (exp :: <list>) => (res)
  let var   = sexpr-definition-variable(exp);
  let vproc = analyze(sexpr-definition-value(exp));
  method (env :: <environment>)
    env-define-binding!(env, var, vproc(env)); %export(#f);
  end method;
end method analyze-definition;

define method map-eval 
    (procs :: <list>, env :: <environment>) => (res :: <list>)
  map(method (proc) proc(env) end, procs)
end method;

define method analyze-method (exp :: <list>) => (res)
  let vars   = sexpr-method-parameters(exp);
  let names  = map(sexpr-variable-name, vars);
  let opts?  = #f;
  let types  = choose(method (x) 
			if (x == #"...") opts? := #t; #f else #t end 
		      end method,
                      map(sexpr-variable-type, vars));
  let tprocs = map(analyze, types);
  let bproc  = analyze-sequence(sexpr-method-body(exp));
  method (env :: <environment>)
    make-proto-method(names, map-eval(tprocs, env), opts?, bproc, env);
  end method;
end method analyze-method;

define method analyze-if (exp :: <list>) => (res)
  let pproc = analyze(sexpr-if-predicate(exp));
  let cproc = analyze(sexpr-if-consequent(exp));
  let aproc = analyze(sexpr-if-alternative(exp));
  method (env :: <environment>)
    let t = pproc(env);
    if (t == #f) error("Found bogus #f in %=\n", exp); end;
    if (t == *%false*)
      aproc(env);
    else
      cproc(env);
    end if;
  end method;
end method analyze-if;

define method analyze-sequence (exps :: <list>) => (res)
  local method sequentially (a, b)
	  method (env :: <environment>)
	    a(env);
	    b(env);
	  end method;
	end method sequentially,

        method loop (first, rest)
	  if (null?(rest))
	    first;
	  else
	    loop(sequentially(first, head(rest)), tail(rest));
	  end if;
	end method loop;
  let procs = map(analyze, exps);
  if (null?(procs))
    method (env :: <environment>) %export(#f) end
  else
    loop(head(procs), tail(procs));
  end if;
end method analyze-sequence;

define method analyze-application (exp :: <list>) => (res)
  let fproc  = analyze(sexpr-operator(exp));
  let aprocs = map(analyze, sexpr-operands(exp));
  method (env :: <environment>) 
    proto-apply(fproc(env), map-eval(aprocs, env))
  end method;
end method analyze-application;

// LOC

define method analyze-loc (exp :: <list>) => (res)
  let names  = sexpr-loc-bound-names(exp);
  let funs   = map(sexpr-make-anonymous-method, 
		   sexpr-loc-bound-parameters(exp),
		   sexpr-loc-bound-bodies(exp));
  let fprocs = map(analyze, funs);
  let bproc  = analyze(sexpr-loc-body(exp));
  method (env :: <environment>) 
    let new-env = env-extend!(env, names, map(always(*nul*), names));
    do(method (n, v) env-binding-value(new-env, n) := v end, 
       names, map-eval(fprocs, new-env));
    bproc(new-env);
  end method;
end method analyze-loc;

// BLOCK

define method export-exit (return, env) => (res)
  local method rproc (env :: <environment>)
	  apply(return, %import(env-binding-value(env, #"x")))
	end method;
  make-proto-method(list(#"x"), #(), #t, rproc, env);
end method;

define method analyze-block (exp :: <list>) => (res)
  let name  = sexpr-block-name(exp);
  let bproc = analyze-sequence(sexpr-block-body(exp));
  method (env :: <environment>) 
    block (return)
      let rproc   = method (env :: <environment>) 
		      return(env-binding-value(env, #"x"))
		    end method;
      let new-ret = make-proto-method(list(#"x"), list(*top*), #f, rproc, env);
      let new-env = env-extend!(env, list(name), list(new-ret));
      bproc(new-env);
    end block;
  end method;
end method analyze-block;

// UNWIND-PROTECT

define method analyze-unwind-protect (exp :: <list>) => (res)
  // (unwind-protect ?protect-form ?body ...)
  let pproc = analyze(sexpr-unwind-protect-protected-form(exp));
  let cproc = analyze-sequence(sexpr-unwind-protect-cleanup-forms(exp));
  method (env :: <environment>) 
    block ()
      pproc(env);
    cleanup
      cproc(env);
    end block;
  end method;
end method analyze-unwind-protect;

// MONITOR

// define method analyze-monitor (exp :: <list>) => (res)
//   // (monitor (fun (next-handler, condition) ...) body)
//   let hproc = analyze(monitor-handler(exp));
//   let bproc = analyze-sequence(monitor-body(exp));
//   method (env :: <environment>) 
//     local method handle (c, resume)
// 	    proto-apply(hproc(env), list(c, resume));
// 	    (head(*handlers*))(c, resume);
// 	  end method;
//     dynamic-bind (*handlers* = pair(hproc(env), *handlers*))
//       bproc(env);
//     end dynamic-bind;
//   end method;
// end method;
// 
// define method analyze-signal (exp :: <list>) => (res)
//   // (signal condition)
//   let cproc = analyze(signal-condition(exp));
//   method (env :: <environment>)
//     block (resume)
//       // proto-apply(head(*handlers*), list(cproc(env), export-exit(resume, env)))
//       (head(*handlers*))(cproc(env), export-exit(resume, env));
//     end block;
//   end method;
// end method;

// MONITOR

define class <proto-condition> (<restart>)
  slot proto-condition-value, required-init-keyword: condition:;
end class;

define method analyze-monitor (exp :: <list>) => (res)
  // (monitor (fun (next-handler, condition) ...) body)
  let hproc = analyze(sexpr-monitor-handler(exp));
  let bproc = analyze-sequence(sexpr-monitor-body(exp));
  method (env :: <environment>) 
    local method handle (c :: <proto-condition>, next-handler :: <function>)
	    block (resume)
	      let pc = proto-condition-value(c);
	      proto-apply(hproc(env), list(pc, export-exit(resume, env)));
	      next-handler();
	    end block;
	  end method;
    let handler <proto-condition> = handle;
    bproc(env);
  end method;
end method;

// SIGNAL

define method analyze-signal (exp :: <list>) => (res)
  // (signal condition)
  let cproc = analyze(sexpr-signal-condition(exp));
  method (env :: <environment>)
    signal(make(<proto-condition>, condition: cproc(env)));
  end method;
end method;

// Isa

define method analyze-isa (exp :: <list>) => (res)
  let pprocs = map(analyze, sexpr-isa-parents(exp));
  let finits = sexpr-isa-slot-inits(exp);
  let fprocs = map(analyze, sexpr-isa-init-values(finits));
  let slots  = map(%%sym, sexpr-isa-init-slots(finits));
  method (env :: <environment>) 
    %isa(map-eval(pprocs, env), slots, map-eval(fprocs, env))
  end method;
end method analyze-isa;

// Slot

define method analyze-slot (exp :: <list>) => (res)
  let type   = sexpr-slot-object(exp);
  let fproc  = analyze(type);
  let var    = sexpr-slot-variable(exp);
  let name   = %%sym(sexpr-variable-name(var));
  let ftype  = sexpr-variable-type(var);
  let ftproc = analyze(ftype);
  let getter = sexpr-make-getter(sexpr-variable-name(var), type);
  let gproc  = analyze(getter);
  let zetter = sexpr-make-setter(sexpr-variable-name(var), type, ftype);
  let zproc  = analyze(zetter);
  let init   = sexpr-slot-init(exp);
  let iproc  = analyze(init);
  method (env :: <environment>) 
    gproc(env); zproc(env);
    %slot(fproc(env), name, ftproc(env), method (x) iproc(env) end);
    %export(#f);
  end method;
end method analyze-slot;

// BACKQUOTE

define method analyze-backquote (exp :: <list>) => (res)
  let bqproc    = analyze(sexpr-expand-backquote(exp));
  let expansion = bqproc(env());
  analyze(%import(expansion));
end method;

// SYNTAX-IF

define method analyze-syntax-if (exp :: <list>) => (res)
  // (syntax-if (?pattern ?value) ?form ...)
  // x   => just matches etc
  // ,x  => binds x to an sexpr
  // ,@x => binds x to a series of sexprs
  // TODO: make this deals with multiple bindings
  let pattern = sexpr-syntax-if-pattern(exp);
  let value   = sexpr-syntax-if-value(exp);
  let vars    = sexpr-bind-pattern-variables(pattern);
  let vproc   = analyze(value);
  let cproc   = analyze(sexpr-syntax-if-consequent(exp));
  let aproc   = analyze(sexpr-syntax-if-alternative(exp));
  let pproc   = analyze-bind-list(pattern);
  method (env :: <environment>)
    let value   = vproc(env);
    let new-env = env-extend!(env, vars, map(always(*nul*), vars));
    block ()
      pproc(value, new-env);
      cproc(new-env);
    exception (exception :: <proto-pattern-match-failure>)
      aproc(env);
    end block;
  end method;
end method;

define class <proto-pattern-match-failure> (<simple-condition>)
end class;

define method match-error (message :: <string>, #rest args)
  signal(make(<proto-pattern-match-failure>,
	      format-string:    message,
	      format-arguments: args));
end method;

define method analyze-bind-list (pat) => (res)
  error("Expected Pattern List %=\n", pat);
end method;

define method analyze-bind-list (pat :: <empty-list>) => (res)
  method (v, e :: <environment>)
    unless (proto-instance?(v, *Nil*))
      match-error("Match Empty Failure of %= on %=\n", %import(v), pat);
    end unless;
  end method;
end method;

define method analyze-bind-list (pat :: <list>) => (res)
  case
    sexpr-unquote?(pat)
      => error("Unquote Unexpected Here %=\n", pat);
    sexpr-unquote-splicing?(pat)
      => error("Unquote Splicing Unexpected Here %=\n", pat);
    otherwise
      => analyze-bind-list*(pat);
  end case;
end method;

define method analyze-bind-list* (pat :: <list>) => (res)
  let procs = map(analyze-bind-element, pat);
  method (v, e :: <environment>)
    if (proto-instance?(v, *<Lst>*))
      for (v = v then %tail(v), proc in procs)
         proc(v, e);
      end for;
    else
      match-error("Match Failure of %= on %= Expected List\n", %import(v), pat);
    end if;
  end method;
end method;

define method analyze-bind-element (pat) => (res)
  method (v, e :: <environment>)
    let imp-exp = %import(%head(v));
    unless (imp-exp == pat)
      match-error("Match Failure of %= on %=\n", imp-exp, pat);
    end unless;
  end method;
end method;

define method analyze-bind-element (pat :: <list>) => (res)
  case
    sexpr-unquote?(pat)
      => analyze-bind-unquote(pat);
    sexpr-unquote-splicing?(pat)
      => analyze-bind-unquote-splicing(pat);
    otherwise
      => let proc = analyze-bind-list(pat);
         method (v, e :: <environment>)
           if (proto-instance?(v, *<Lst>*))
             proc(%head(v), e)
           else
             match-error("Match Failure of %= on %= Expected List\n", 
			 %import(v), pat);
           end if
         end method;
  end case;
end method;

define method analyze-bind-unquote (pat :: <list>) => (res)
  method (v, e :: <environment>)
    env-binding-value(e, second(pat)) := %head(v);
  end method;
end method;

define method analyze-bind-unquote-splicing (pat :: <list>) => (res)
  method (v, e :: <environment>)
    env-binding-value(e, second(pat)) := v;
  end method;
end method;

/// MACROS

define class <macro> (<object>)
  slot macro-expander, required-init-keyword: expander:;
end class;

define method analyze-macro-function (exp :: <list>) => (res)
  analyze-method(sexpr-make-macro-function(exp));
end method;

define method analyze-macro (exp :: <list>) => (res)
  let mproc = analyze-macro-function(exp);
  method (env :: <environment>)
    make(<macro>, expander: mproc(env))
  end method;
end method;

define method analyze-macro-expand (exp :: <list>) => (res)
  let x = macro-expand(second(exp));
  method (env :: <environment>)
    %export(x)
  end method;
end method;

define method macro-application? (exp) => (well? :: <boolean>)
  if (instance?(exp, <pair>))
    let val = env-binding-value(env(), head(exp), unbound: always(#f));
    instance?(val, <macro>)
  else
    #f
  end if;
end method;

define method macro-expand (exp :: <list>) => (res)
  let mac :: <macro> = env-binding-value(env(), head(exp));
  let res =
  proto-apply(macro-expander(mac), list(%export(exp)));
  // format-out("EXPANSION "); proto-write(res); format-out("\n");
  %import(res)
end method;

// Proto EVAL

define method proto-eval (exp, env) => (#rest vals)
  (analyze(exp))(env);
end method proto-eval;


