module: proto

//// BASED ON Lisp In Small Pieces by Christian Queinnec

define method objectify-error (message :: <string>, #rest arguments)
  apply(error, message, arguments)
end method;

/// a low-level macro system offering hygiene.

/// bindings are not programs! they represent bindings.

define class <binding> (<object>) 
  slot binding-name :: type-union(<symbol>, <integer>),  
    required-init-keyword: name:;
  slot binding-type :: false-or(<program>) = #f, init-keyword: type:;
end class;

define class <global-binding> (<binding>) 
  slot binding-free? = #t, init-keyword: free?:;
end class;

define class <predefined-binding> (<binding>) 
  slot binding-description = #f, init-keyword: description:;
end class;

define method binding-free? 
    (x :: <predefined-binding>) => (well? :: <boolean>)
  #f
end method;

define class <local-binding> (<binding>) 
  slot binding-mutable?        = #f;
  slot binding-dynamic-extent? = #t, init-keyword: dynamic-extent?:;
  slot binding-dotted?         = #f, init-keyword: dotted?:;
  slot binding-value           = #f;
end class;

/// descriptions

define class <description> (<object>)
end class;

define class <functional-description> (<description>) 
  slot description-comparator, required-init-keyword: comparator:;
  slot description-arity,      required-init-keyword: arity:;
  slot description-generator,  required-init-keyword: generator:;
end class;

define class <constant-description> (<description>) 
  slot description-value, required-init-keyword: value:;
end class;

/// programs

define class <program> (<object>) 
end class;

/// compile-time

define class <compile-time> (<program>) 
  slot compile-time-program :: <program>, required-init-keyword: program:;
end class;

/// references are programs.

define class <reference> (<program>) 
end class;

/// special category of bindings

define class <magic-binding> (<global-binding>, <reference>) 
  slot binding-handler,     required-init-keyword: handler:;
end class;

define method initialize (x :: <magic-binding>, #key) => ()
  next-method();
  binding-free?(x) := #f;
end method;

define method reference-binding 
    (x :: <magic-binding>) => (res :: <magic-binding>)
  x
end method;

define class <real-reference> (<reference>) 
  slot reference-binding, required-init-keyword: binding:;
end class;

define class <local-reference> (<real-reference>) 
  slot reference-called-function? = #f;
end class;

define class <global-reference> (<real-reference>) 
end class;

define class <predefined-reference> (<real-reference>) 
end class;

define class <bound?> (<program>) 
  slot bound?-reference, required-init-keyword: reference:;
end class;

define class <assignment> (<program>)
  slot assignment-form, required-init-keyword: form:;
end class;

define class <local-assignment> (<assignment>) 
  slot assignment-reference, required-init-keyword: reference:;
end class;

define class <global-assignment> (<assignment>) 
  slot assignment-binding, required-init-keyword: binding:;
end class;

define class <definition> (<global-assignment>) 
end class;

define class <variable-definition> (<definition>)
end class;

define class <ast-generic-definition> (<definition>)
end class;

define class <ast-function-definition> (<definition>)
end class;

define class <ast-method-definition> (<definition>)
end class;

define class <ast-primitive-definition> (<definition>)
end class;

define class <ast-function> (<program>) 
  slot function-name = #f,  init-keyword: name:;
  slot function-bindings,   required-init-keyword: bindings:;
  slot function-nary? = #f, init-keyword: nary?:;
  slot function-value = #f, init-keyword: value:;
end class;

define method function-kind (x :: <ast-function>)
  "FUN"
end method;

define class <ast-method> (<ast-function>) 
  slot function-body, required-init-keyword: body:;
end class;

define method function-kind (x :: <ast-method>)
  "MET"
end method;

define class <ast-primitive> (<ast-method>) 
end class;

define method function-kind (x :: <ast-primitive>)
  "PRM"
end method;

define class <ast-generic> (<ast-function>) 
end class;

define method function-kind (x :: <ast-generic>)
  "GEN"
end method;

define class <alternative> (<program>) 
  slot alternative-condition,  required-init-keyword: condition:;
  slot alternative-consequent, required-init-keyword: consequent:;
  slot alternative-alternant,  required-init-keyword: alternant:;
end class;

define class <sequential> (<program>) 
  slot sequential-head, required-init-keyword: head:;
  slot sequential-tail, required-init-keyword: tail:;
end class;

define constant $empty-sequential 
  = make(<sequential>, head: #f, tail: #f);

define method empty-sequential () => (res :: <sequential>)
  $empty-sequential
end method;

define method empty-sequential? (e :: <sequential>) => (well? :: <boolean>)
  e == $empty-sequential
end method;

define class <constant> (<program>) 
  slot constant-value, required-init-keyword: value:;
end class;

define class <raw-constant> (<constant>) 
end class;

define class <application> (<program>) 
  slot application-arguments, required-init-keyword: arguments:;
  slot application-tail?, required-init-keyword: tail?:;
end class;

define class <regular-application> (<application>) 
  slot application-function, required-init-keyword: function:;
  slot application-known? = #f;
end class;

define class <predefined-application> (<application>) 
  slot application-binding,  required-init-keyword: binding:;
end class;

define class <fix-let> (<program>) 
  slot fix-let-bindings,  required-init-keyword: bindings:;
  slot fix-let-arguments, required-init-keyword: arguments:;
  slot fix-let-body,      required-init-keyword: body:;
end class;

define class <argument-list> (<program>)
  slot arguments-head, required-init-keyword: head:;
  slot arguments-tail, required-init-keyword: tail:;
end class;

define constant $argument-empty-list = make(<argument-list>, head: #f, tail: #f);

define method empty-argument-list () => (res :: <argument-list>)
  $argument-empty-list 
end method;

define method empty-argument-list? (e :: <argument-list>) => (well? :: <boolean>)
  e == $argument-empty-list 
end method;

define method as (c == <list>, e :: <argument-list>) => (res :: <list>)
  iterate loop (res = #(), e = e)
    if (empty-argument-list?(e))
      reverse!(res)
    else
      loop(pair(arguments-head(e), res), arguments-tail(e));
    end if
  end iterate;
end method;

define class <locals> (<program>)
  slot locals-bindings,  required-init-keyword: bindings:;
  slot locals-functions, required-init-keyword: functions:;
  slot locals-body,      required-init-keyword: body:;
end class;

define class <bind-exit> (<program>)
  slot bind-exit-main-fun,   required-init-keyword: main:;
end class;

define class <unwind-protect> (<program>)
  slot unwind-protect-protected-thunk, required-init-keyword: protected:;
  slot unwind-protect-cleanup-thunk,   required-init-keyword: cleanup:;
end class;

define class <monitor> (<program>)
  slot monitor-handler,    required-init-keyword: handler:;
  slot monitor-main-thunk, required-init-keyword: main:;
end class;

define class <syntax-if> (<program>)
  slot sif-pattern,     required-init-keyword: pattern:;
  slot sif-bindings,    required-init-keyword: bindings:;
  slot sif-value,       required-init-keyword: value:;
  slot sif-consequent,  required-init-keyword: consequent:;
  slot sif-alternative, required-init-keyword: alternative:;
end class;

define class <match> (<object>)
end class;

define class <match-structure> (<match>)
end class;

define class <match-atom> (<match-structure>)
  slot match-value, required-init-keyword: value:;
end class;  

define class <match-list> (<match-structure>)
  slot match-elements, required-init-keyword: elements:;
end class;  

define class <match-sublist> (<match-structure>)
  slot match-element, required-init-keyword: element:;
end class;  

define class <match-empty-list> (<match-structure>)
end class;  

define class <match-binding> (<match>)
  slot match-binding, required-init-keyword: binding:;
end class;

define class <match-unquote> (<match-binding>)
end class;  

define class <match-unquote-splicing> (<match-binding>)
end class;  

/// ENVIRONMENT

define class <static-environment> (<object>) 
  slot environment-next = #f, init-keyword: next:;
end class;

define class <static-global-environment> (<static-environment>) 
  slot environment-bindings = make(<table>);
end class;

define class <static-predefined-global-environment> 
    (<static-global-environment>) 
end class;

define class <static-empty-environment> (<static-environment>) 
end class;

define constant $empty-static-environment = make(<static-empty-environment>);

define class <static-local-environment> (<static-environment>) 
  slot environment-binding, required-init-keyword: binding:;
end class;

////
//// CONVERT TO AST FORM

define method objectify 
    (e :: <list>, r :: <static-environment>, tail?) => (res)
  let m = objectify(head(e), r, tail?);
  if (instance?(m, <magic-binding>))
    (binding-handler(m))(e, r, tail?);
  else
    objectify-application(m, tail(e), r, tail?);
  end if
end method;

define method objectify
    (e :: <symbol>, r :: <static-environment>, tail?) => (res)
  objectify-symbol(e, r);
end method;

define method objectify
    (e :: <magic-binding>, r :: <static-environment>, tail?) => (res)
  e
end method;

define method objectify
    (e :: <program>, r :: <static-environment>, tail?) => (res)
  e
end method;

define method objectify 
    (e, r :: <static-environment>, tail?) => (res)
  objectify-quotation(e, r)
end method;

define method objectify-quotation
    (value, r) => (res :: <constant>)
  make(<constant>, value: value);
end method;

define method objectify-raw
    (value, r, tail?) => (res :: <raw-constant>)
  make(<raw-constant>, value: value);
end method;

define method objectify-bound?
    (e :: <symbol>, r :: <static-environment>, tail?) => (res)
  let ref = objectify-symbol(e, r);
  make(<bound?>, reference: ref);
end method;

define variable *native?* = #f;

define macro with-emulated
  { with-emulated ?:body end }
    => { let old-native? = *native?*; 
	 block () 
	   *native?* := #f; ?body 
	 cleanup
	   *native?* := old-native?;
	 end block }
end macro;

define macro with-native
  { with-native ?:body end }
    => { let old-native? = *native?*; 
	 block () 
	   *native?* := #t; ?body 
	 cleanup
	   *native?* := old-native?;
	 end block }
end macro;

define method objectify-compile-time
    (program, r, tail?) => (res :: <constant>)
  // make(<compile-time>, program: objectify(program, r));
  with-emulated
    let program = objectify(program, r, tail?);
    ast-eval(program, env());
    make(<constant>, value: #f);
  end with-emulated;
end method;

define method objectify-alternative 
    (t, c, a, r, tail?) => (res :: <alternative>)
  make(<alternative>, 
       condition:  objectify(t, r, #f),
       consequent: objectify(c, r, tail?),
       alternant:  objectify(a, r, tail?));
end method;

define method sequentialize (e* :: <list>) => (res :: <program>)
  if (empty?(e*))
    make(<constant>, value: #f);
  elseif (empty?(tail(e*)))
    head(e*)
  else
    iterate loop (e* = e*)
      if (empty?(e*))
        empty-sequential()
      else
        make(<sequential>, head: head(e*), tail: loop(tail(e*)))
      end if;
    end iterate;
  end if
end method;

define method objectify-sequential 
    (e* :: <list>, r, tail?) => (res :: <program>)
  let asts 
    = iterate loop (res = #(), e* = e*)
	if (empty?(e*))
	  reverse!(res)
	else
	  let tail? = if (empty?(tail(e*))) tail? else #f end;
	  let head  = objectify(head(e*), r, tail?);
	  loop(pair(head, res), tail(e*))
        end if;
      end iterate;
  sequentialize(asts);
end method;

define method objectify-application
    (ff :: <ast-method>, e*, r, tail?) => (res :: <program>)
  let ee* = convert2arguments(map(method (e) objectify(e, r, #f) end, e*));
  process-closed-application(ff, ee*, r, tail?);
end method;

// TODO: USE THIS FOR PRIMITIVES

define method objectify-application 
    (ff :: <predefined-reference>, e*, r, tail?) => (res :: <program>)
  let ee*  = convert2arguments(map(method (e) objectify(e, r, #f) end, e*));
  let fvf  = reference-binding(ff);
  let desc = binding-description(fvf);
  make(<predefined-application>, binding: fvf, arguments: ee*, tail?: tail?);
  /*
  if (instance?(desc, <functional-description>))
    if ((description-comparator(desc))
	  (size(e*), description-arity(desc)))
      make(<predefined-application>, binding: fvf, arguments: ee*);
    else
      objectify-error("incorrect predefined arity", ff, e*);
    end if;
  else
    make(<regular-application>, function: ff, arguments: ee*);
  end if;
  */
end method;

define method objectify-application (ff, e*, r, tail?) => (res :: <program>)
  let ee* = convert2arguments(map(method (e) objectify(e, r, #f) end, e*));
  make(<regular-application>, function: ff, arguments: ee*, tail?: tail?);
end method;

define method process-closed-application 
    (f :: <ast-method>, e*, r, tail?) => (res :: <fix-let>)
  let v* = function-bindings(f);
  let b  = function-body(f);
  if (function-nary?(f))
    process-nary-closed-application(f, e*, r, tail?)
  else 
    if (number-of(e*) = size(function-bindings(f)))
      make(<fix-let>, 
	   bindings: function-bindings(f), 
	   arguments: e*, body: function-body(f));
    else
      objectify-error("incorrect regular arity", f, e*)
    end if;
  end if;
end method;

define method process-nary-closed-application 
    (f, e*, r, tail?) => (res :: <fix-let>)
  local method pack-dotted-arguments (e*)
	  if (empty-argument-list?(e*))
	    make(<constant>, value: #());
          else
	    make(<regular-application>, // <predefined-application>,
		 function:  
                   // SHOULD BE PREDEFINED
		   objectify-symbol(#"%pair", r),
		 arguments:
		   make(<argument-list>,
			head:
			  arguments-head(e*),
			tail:
			  make(<argument-list>, 
			       head: pack-dotted-arguments(arguments-tail(e*)),
			       tail: empty-argument-list())),
		 tail?:
		   #f)
	  end if;
	end method,
        method gather-arguments (e*, v*)
	  if (binding-dotted?(head(v*)))
	    make(<argument-list>,
		 head: pack-dotted-arguments(e*),
		 tail: empty-argument-list())
	  else
	    if (empty-argument-list?(e*))
	      objectify-error("incorrect dotted arity", f, e*);
	    else
	      make(<argument-list>, 
		   head: arguments-head(e*),
		   tail: gather-arguments(arguments-tail(e*), tail(v*)))
	    end if;
	  end if;
	end method;
  let v* = function-bindings(f);
  let b  = function-body(f);
  let o  = make(<fix-let>, 
		bindings:  v*,
		arguments: gather-arguments(e*, v*),
		body:      b);
  binding-dotted?(last(v*)) := #f;
  o
end method;
 
define method convert2arguments (e* :: <list>) => (res)
  if (empty?(e*))
    empty-argument-list()
  else
    make(<argument-list>, head: head(e*), tail: convert2arguments(tail(e*)));
  end if
end method;

define method number-of (o :: <argument-list>) => (res :: <integer>)
  if (empty-argument-list?(o))
    0
  else
    1 + number-of(arguments-tail(o))
  end if
end method;

/// assignment on mutable local bindings are immediately
/// processed. references to local mutable bindings must wait the
/// second pass.

define method objectify-assignment 
    (binding :: <list>, e, r, tail?) => (res :: <program>)
  let op = sexpr-operator(binding);
  if (sexpr-variable?(op))
    objectify
      (sexpr-make-application
	 (objectify(sexpr-make-setter-name(op), r, #f), 
	  pair(e, sexpr-operands(binding))),
       r, tail?);
  else
    objectify-error("Unsupported Set!: %=", e);
  end if
end method;

define method objectify-assignment 
    (binding :: <symbol>, e, r, tail?) => (res :: <assignment>)
  let ov = objectify(binding, r, #f);
  let of = objectify(e, r, #f);
  select (ov by instance?) 
    <local-reference>
      => binding-mutable?(reference-binding(ov)) := #t;
         make(<local-assignment>, reference: ov, form: of);
    <global-reference>
      => make(<global-assignment>, 
	      binding: reference-binding(ov), form: of);
    otherwise
      => objectify-error("illegal mutated reference", binding);
  end select;
end method;

// TODO: HANDLE REDEF

define method ast-define-binding 
    (r, name, type, #rest args, #key, #all-keys) => (res)
  let existing-binding
    = find-binding(name, r);
  let binding
    = if (existing-binding)
        if (binding-free?(existing-binding))
          binding-free?(existing-binding) := #f;
        else
          format-out("REDEF %s\n", name);
        end if;
        existing-binding
      else
	format-out("DEF %s\n", name);
        let binding = apply(make, type, name: name, free?: #f, args);
        insert-global!(binding, r);
        binding
      end if;
  binding
end method;

define variable *macro-tracing?* = #t;

define method objectify-definition 
    (var, e, r) => (res :: type-union(<constant>, <definition>))
  let name
    = sexpr-variable-name(var);
  let binding
    = ast-define-binding(r, name, <global-binding>);
  let defn
    = make(<definition>, binding: binding, form: objectify(e, r, #f));
  defn
end method;

define method objectify-syntax-definition 
    (name, e, r) => (res :: type-union(<constant>, <definition>))
  // let expander = analyze-macro-function(e);
  let sep-expander = sexpr-make-macro-function(e);
  // format-out("DEFMACRO "); proto-write(sep-expander); format-out("\n");
  let ast-expander = with-emulated objectify(sep-expander, r, #f) end;
  let expander     = ast-eval(ast-expander, env());
  local method expand (x, r, tail?)
	  if (*macro-tracing?*)
	    format-out("MACRO "); proto-write(x); format-out("\n");
	  end if;
	  // let exp = %import(env(), proto-apply(expander(env()), list(%export(env(), x))));
	  let exp = %import(env(), proto-apply(expander, list(%export(env(), x))));
	  if (*macro-tracing?*)
	    format-out("  => "); proto-write(exp); format-out("\n");
	  end if;
	  objectify(exp, r, tail?)
	end method;
  format-out("DEFMAC %=\n", name);
  let binding = ast-define-binding(r, name, <magic-binding>, handler: expand);
  make(<constant>, value: #f);
end method;

define method objectify-function-definition 
    (name, e, r) => (res :: <ast-function-definition>)
  let binding = ast-define-binding(r, name, <global-binding>);
  let fun     = objectify(e, r, #f);
  function-name(fun) := binding;
  let defn    = make(<ast-function-definition>, binding: binding, form: fun);
  defn
end method;

define method objectify-primitive-definition 
    (name, sig, body, r) => (res :: <ast-primitive-definition>)
  let binding
    = ast-define-binding(r, name, <predefined-binding>);
  let (bindings, nary?, value)
    = objectify-signature(sig, r);
  let body
    = objectify-sequential(body, r-extend*(r, bindings), #t);
  let form
    = make(<ast-primitive>, 
           name: binding, bindings: bindings, nary?: nary?, value: value, 
           body: body);
  binding-description(binding)
    := form;
  let defn
    = make(<ast-primitive-definition>, binding: binding, form: form);
  defn
end method;

define method objectify-generic-definition 
    (name, sig, r) => (res :: type-union(<constant>, <definition>))
  let binding
    = ast-define-binding(r, name, <global-binding>);
  let (bindings, nary?, value)
    = objectify-signature(sig, r);
  let form
    = make(<ast-generic>, 
	   name: binding, bindings: bindings, nary?: nary?, value: value);
  let defn
    = make(<ast-generic-definition>, binding: binding, form: form);
  defn
end method;

define method objectify-method-definition 
    (name, e, r) => (res :: type-union(<constant>, <definition>))
  let binding = ast-define-binding(r, name, <global-binding>);
  let gen     = list(#"if", list(#"bound?", name), name, #f);
  let met     = objectify(e, r, #f);
  function-name(met) := name;
  // TODO: NAME AND MARK AS GENERIC METHOD
  let call    = list(#"%define-method", gen, met);
  let form    = objectify(call, r, #f);
  let defn    = make(<ast-method-definition>, binding: binding, form: form);
  function-name(met) := name;
  defn
end method;

/// it is important that the body is objectified first, so mutability
/// of local bindings is known and they can be appropriately handled
/// in objectify-bindings-list. 
/// all bindings are considered immutable at the beginning.

define method objectify-function
    (sig, body, r, tail?) => (res :: <ast-method>)
  let (bindings, nary?, value) = objectify-signature(sig, r);
  let b = objectify-sequential(body, r-extend*(r, bindings), #t);
  make(<ast-method>, bindings: bindings, nary?: nary?, value: value, body: b);
end method;

define constant $sexpr-optionals-tag       = #"...";
define constant $sexpr-optionals-type-name = #"<opts>";

define method objectify-signature (signature, r) => (bindings, nary?, value)
  let nary? = #f;
  collecting (bindings)
    for (param in sexpr-signature-parameters(signature)) 
      let sname   = sexpr-variable-name(param);
      let stype   = sexpr-variable-type(param);
      let dotted? = stype == $sexpr-optionals-tag;
      let stype   = if (dotted?) $sexpr-optionals-type-name else stype end;
      let type    = objectify(stype, r, #f);
      let binding
        = make(<local-binding>, name: sname, type: type, dotted?: dotted?);
      collect-into(bindings, binding);
      nary? := dotted?;
    end for;
    let sexpr-value = sexpr-signature-value(signature);
    let value = objectify(sexpr-value | default-type(r), r, #f);
    values(collected(bindings), nary?, value)
  end collecting;
end method;

define method objectify-binding 
    (n, b :: <magic-binding>, r) => (res :: <magic-binding>)
  b
end method;

define method objectify-binding
    (n, b :: <local-binding>, r) => (res :: <reference>)
  make(<local-reference>, binding: b);
end method;

define method objectify-binding
    (n, b :: <global-binding>, r) => (res :: <reference>)
  make(<global-reference>, binding: b);
end method;

define method objectify-binding
    (n, b :: <predefined-binding>, r) => (res :: <reference>)
  make(<predefined-reference>, binding: b);
end method;

/// a free binding is defined to be a global binding defined on the fly.

define method default-type (r) 
  objectify(#"<Any>", r, #f)
end method;

define method objectify-free-global-reference 
    (name, r) => (res :: <global-reference>)
  let b = make(<global-binding>, name: name);
  insert-global!(b, r);
  make(<global-reference>, binding: b)
end method;

define method objectify-binding (n, b, r) => (res :: <reference>)
  objectify-free-global-reference(n, r);
end method;

define method objectify-symbol (name, r) => (res :: <reference>)
  objectify-binding(name, find-binding(name, r), r)
end method;

define method ftype (r)
  objectify(#"<fun>", r, #f);
end method;

define method objectify-locals 
    (names, sigs, bodies, body, r, tail?) => (res :: <locals>)
  let bindings
    = map(method (n) make(<local-binding>, name: n, type: ftype(r)) end, names);
  let new-r
    = r-extend*(r, bindings);
  let function-forms
    = map(sexpr-make-anonymous-method, sigs, bodies);
  let functions
    = map(rcurry(objectify, new-r, #f), function-forms);
  do (method (x, n) function-name(x) := n; binding-value(n) := x; end, 
      functions, bindings);
  make(<locals>,
       bindings:  bindings,
       functions: functions,
       body:      objectify-sequential(body, new-r, #t))
end method;

define method objectify-bind-exit (name, body, r, tail?) => (res :: <bind-exit>)
  make(<bind-exit>,
       main: objectify(sexpr-make-anonymous-method(list(name), body), r, #f));
end method;

define method objectify-unwind-protect 
    (protected-form, cleanup-forms, r, tail?) => (res :: <unwind-protect>)
  make(<unwind-protect>,
       protected: 
	 objectify(sexpr-make-anonymous-method(#(), list(protected-form)), r, #f),
       cleanup:
	 objectify(sexpr-make-anonymous-method(#(), cleanup-forms), r, #f))
end method;

define method objectify-monitor (handler, body, r, tail?) => (res :: <monitor>)
  make(<monitor>,
       handler: objectify(handler, r, #f),
       main:    objectify(sexpr-make-anonymous-method(#(), body), r, #f))
end method;

define method objectify-bind-list (pat) => (res)
  error("Expected Pattern List %=\n", pat);
end method;

define method objectify-bind-list (pat :: <empty-list>) => (res)
  make(<match-empty-list>)
end method;

define method objectify-bind-list (pat :: <list>) => (res)
  case
    sexpr-unquote?(pat)
      => error("Unquote Unexpected Here %=\n", pat);
    sexpr-unquote-splicing?(pat)
      => error("Unquote Splicing Unexpected Here %=\n", pat);
    otherwise
      => objectify-bind-list*(pat);
  end case;
end method;

define method objectify-bind-list* (pat :: <list>) => (res)
  let matchers = map(objectify-bind-element, pat);
  make(<match-list>, elements: matchers)
end method;

define method objectify-bind-element (pat) => (res)
  make(<match-atom>, value: pat)
end method;

define method objectify-bind-element (pat :: <list>) => (res)
  case
    sexpr-unquote?(pat)
      => objectify-bind-unquote(pat);
    sexpr-unquote-splicing?(pat)
      => objectify-bind-unquote-splicing(pat);
    otherwise
      => let matcher = objectify-bind-list(pat);
         make(<match-sublist>, element: matcher)
  end case;
end method;

define method objectify-bind-unquote (pat :: <list>) => (res)
  let binding = make(<local-binding>, name: second(pat));
  make(<match-unquote>, binding: binding)
end method;

define method objectify-bind-unquote-splicing (pat :: <list>) => (res)
  let binding = make(<local-binding>, name: second(pat));
  make(<match-unquote-splicing>, binding: binding)
end method;

define method objectify-pattern (pattern) => (res :: <match>)
  objectify-bind-list(pattern)
end method;

define method objectify-syntax-if 
    (pattern, bindings, value, consequent, alternative, r) => (res :: <syntax-if>)
  let bindings = map(method (n) make(<local-binding>, name: n) end, bindings);
  make(<syntax-if>,
       pattern:     objectify-pattern(pattern),
       bindings:    bindings,
       value:       objectify(value, r, #f),
       consequent:  objectify(consequent, r-extend*(r, bindings), #f),
       alternative: objectify(alternative, r, #f))
end method;

/// AST ENVIRONMENT

/// these functions deal with the environment.  r is a sequential of
/// full-environment objects containing local bindings followed by an
/// instance of environment followed by a sequential of full-environment
/// containing the global mutable bindings mixed with the global
/// macros followed by the predefined bindings.

define method r-extend* (r, bindings :: <list>) => (res :: <static-environment>)
  if (empty?(bindings))
    r
  else
    r-extend(r-extend*(r, tail(bindings)), head(bindings))
  end if
end method;

define method r-extend (r, binding) => (res :: <static-local-environment>)
  make(<static-local-environment>, next: r, binding: binding)
end method;

define method insert-global! (binding, r) => ()
  let r :: <static-global-environment> = find-static-global-environment(r);
  // environment-next(r)
  //   := make(<static-local-environment>, 
  // 	       next: environment-next(r), binding: binding);
  element(environment-bindings(r), binding-name(binding)) := binding;
end method;

define method insert-globals! (bindings :: <list>, r) => ()
  do(rcurry(insert-global!, r), bindings)
end method;

define method find-static-global-environment 
    (r :: <static-local-environment>) => (res :: <static-global-environment>)
  find-static-global-environment(environment-next(r))
end method;

define method find-static-global-environment
    (r :: <static-global-environment>) => (res :: <static-global-environment>)
  r
end method;

define method find-binding 
    (name, r :: <static-local-environment>) => (res :: false-or(<binding>))
  let binding = environment-binding(r);
  if (name == binding-name(binding))
    binding
  else
    find-binding(name, environment-next(r))
  end if
end method;

define method find-binding 
    (name, r :: <static-global-environment>) => (res :: false-or(<binding>))
  element(environment-bindings(r), name, default: #f)
    | find-binding(name, environment-next(r))
end method;

define method find-binding 
    (name, r :: <static-empty-environment>) => (res :: false-or(<binding>))
  #f
end method;

define method frame-bindings (env :: <static-global-environment>) => (res :: <list>)
  map-as(<list>, identity, environment-bindings(env))
end method;

define method frame-bindings (env :: <static-local-environment>) => (res :: <list>)
  list(environment-binding(env))
end method;

define function report-undefined-global-bindings (env)
  let env = find-static-global-environment(env);
  iterate loop (env = env)
    unless (instance?(env, <static-empty-environment>))
      for (binding in frame-bindings(env))
        if (binding-free?(binding))
          format-out("%= UNDEFINED\n", binding-name(binding));
        end if;
      end for;
      loop(environment-next(env));
    end unless;
  end iterate;
end function;

//// SPECIAL FORMS

define variable *magic-bindings* = #();

define method register-magic-binding (name, value)
  *magic-bindings* := add(*magic-bindings*, value);
end method;

define method magic-bindings ()
  *magic-bindings*
end method;

define macro magic-binding-definer
  { define magic-binding ?:name (?params:*) ?:body end }
    => { define constant "special-" ## ?name
           = make(<magic-binding>,
		  name:    "$sexpr-" ## ?name ## "-tag",
		  handler: method (?params) ?body end);
         register-magic-binding(?#"name", "special-" ## ?name) }
end macro;

define magic-binding \if (x, r, tail?)
  objectify-alternative
    (sexpr-if-predicate(x), sexpr-if-consequent(x), sexpr-if-alternative(x), 
     r, tail?);
end magic-binding;

define magic-binding \begin (x, r, tail?)
  objectify-sequential(tail(x), r, tail?)
end magic-binding;

define constant $sexpr-%raw-tag = #"%raw";

define magic-binding %raw (x, r, tail?)
  objectify-raw(second(x), r, tail?);
end magic-binding;

define magic-binding quote (x, r, tail?)
  objectify-quotation(sexpr-text-of-quotation(x), r);
end magic-binding;

define magic-binding set (x, r, tail?)
  objectify-assignment
    (sexpr-assignment-variable(x), sexpr-assignment-value(x), r, tail?);
end magic-binding;

define magic-binding \define (x, r, tail?)
  objectify-definition
    (sexpr-definition-variable(x), sexpr-definition-value(x), r);
end magic-binding;

define magic-binding define-syntax (x, r, tail?)
  objectify-syntax-definition
    (sexpr-syntax-definition-variable(x), sexpr-syntax-definition-value(x), r);
end magic-binding;

define magic-binding define-method (x, r, tail?)
  objectify-method-definition
    (sexpr-function-definition-variable(x), 
     sexpr-function-definition-value(x), r);
end magic-binding;

define magic-binding define-generic (x, r, tail?)
  objectify-generic-definition
    (sexpr-function-definition-variable(x), sexpr-function-signature(x), r)
end magic-binding;

define magic-binding define-function (x, r, tail?)
  objectify-function-definition
    (sexpr-function-definition-variable(x), 
     sexpr-function-definition-value(x), r);
end magic-binding;

define magic-binding \method (x, r, tail?)
  objectify-function
    (sexpr-method-signature(x),
     sexpr-method-body(x), r, tail?);
end magic-binding;

define constant $sexpr-bound?-tag = #"bound?";

define magic-binding bound? (x, r, tail?)
  objectify-bound?(second(x), r, tail?);
end magic-binding;

define magic-binding \let (x, r, tail?)
  objectify(sexpr-let->combination(x), r, tail?);
end magic-binding;

define magic-binding \locals (x, r, tail?)
  objectify-locals
    (sexpr-loc-bound-names(x), sexpr-loc-bound-signatures(x), 
     sexpr-loc-bound-bodies(x), sexpr-loc-raw-body(x), r, tail?);
end magic-binding;

define magic-binding \iterate (x, r, tail?)
  objectify(sexpr-itr->loc(x), r, tail?);
end magic-binding;

define magic-binding bind-exit (x, r, tail?)
  objectify-bind-exit(sexpr-block-name(x), sexpr-block-body(x), r, tail?);
end magic-binding;

define magic-binding unwind-protect (x, r, tail?)
  objectify-unwind-protect
    (sexpr-unwind-protect-protected-form(x), 
     sexpr-unwind-protect-cleanup-forms(x),
     r, tail?);
end magic-binding;

define magic-binding monitor (x, r, tail?)
  objectify-monitor(sexpr-monitor-handler(x), sexpr-monitor-body(x), r, tail?);
end magic-binding;

define method pairize (args :: <list>) => (res)
  if (empty?(args))
    list(#"quote", #())
  else
    list(#"%pair", head(args), pairize(tail(args)))
  end if;
end method;

define magic-binding isa (x, r, tail?)
  let slot-inits = sexpr-isa-slot-inits(x);
  objectify
    (sexpr-make-application
       (#"%isa",
	list(pairize(sexpr-isa-parents(x)),
	     pairize(if (*native?*)
		       sexpr-isa-init-slots(slot-inits)
		     else
		       map(sexpr-make-quote, sexpr-isa-init-slots(slot-inits))
		     end if),
	     pairize(sexpr-isa-init-values(slot-inits)))),
     r, tail?)
end magic-binding;

define method expand-native-slot (x, r, tail?)
  let var         = sexpr-slot-variable(x);
  let name        = sexpr-variable-name(var);
  let setter-name = sexpr-make-setter-name(name);
  let slot-type   = sexpr-variable-type(var);
  objectify
    (sexpr-make-begin
       (list(sexpr-make-native-getter(name, sexpr-slot-object(x)),
	     sexpr-make-native-setter(name, sexpr-slot-object(x), slot-type),
	     sexpr-make-application
	       (#"%slot", 
		list(sexpr-slot-object(x), 
		     name, setter-name, slot-type,
		     sexpr-make-anonymous-method
                       (#(#(#"x", #"<any>")), list(sexpr-slot-init(x))))))),
       r, tail?)
end method;

define method expand-slot (x, r, tail?)
  let var       = sexpr-slot-variable(x);
  let name      = sexpr-variable-name(var);
  let slot-type = sexpr-variable-type(var);
  objectify
    (sexpr-make-begin
       (list(sexpr-make-application
	       (#"%slot", 
		list(sexpr-slot-object(x), 
		     sexpr-make-quote(name), slot-type,
		     sexpr-make-anonymous-method
                       (#(#(#"x", #"<any>")), list(sexpr-slot-init(x))))),
	     sexpr-make-getter(name, sexpr-slot-object(x)),
	     sexpr-make-setter(name, sexpr-slot-object(x), slot-type))),
     r, tail?)
end method;

define magic-binding \slot (x, r, tail?)
  if (*native?*)
    expand-native-slot(x, r, tail?)
  else
    expand-slot(x, r, tail?)
  end if;
end magic-binding;
			    
define constant $sexpr-compile-time-tag = #"ct";

define magic-binding compile-time (x, r, tail?)
  objectify-compile-time(head(tail(x)), r, tail?)
end magic-binding;

define constant $sexpr-define-primitive-tag = #"dp";

define magic-binding define-primitive (x, r, tail?)
  if (sexpr-forward-primitive?(x))
    ast-define-binding
      (r, sexpr-function-definition-variable(x), <predefined-binding>);
    objectify(#f, r, tail?);
  else
    objectify-primitive-definition
      (sexpr-function-definition-variable(x), 
       sexpr-function-signature(x), sexpr-function-body(x), r)
  end if
end magic-binding;

define magic-binding quasiquote (x, r, tail?)
  let bq-ast    = objectify(sexpr-expand-backquote(x), r, tail?);
  let expansion = ast-eval(bq-ast, env());
  objectify(%import(env(), expansion), r, tail?);
end magic-binding;

define method ast-macro-expand (x, r, tail?)
  let m = env-binding-value(r, head(x));
  if (instance?(m, <magic-binding>))
    let res = (binding-handler(m))(x, r, tail?);
    // format-out("EXPANSION "); proto-write(res); format-out("\n");
    res
  else
    #f
  end if
end method;

define magic-binding macro-expand (x, r, tail?)
  objectify-quotation
    (ast-macro-expand(second(x), r, #f), r)
end magic-binding;

define magic-binding syntax-if (x, r, tail?)
  // (syntax-if (?pattern ?value) ?form ...)
  // x   => just matches etc
  // ,x  => binds x to an sexpr
  // ,@x => binds x to a series of sexprs
  // TODO: make this deals with multiple bindings
  let pat = sexpr-syntax-if-pattern(x);
  objectify-syntax-if
    (pat, sexpr-bind-pattern-variables(pat),
     sexpr-syntax-if-value(x),
     sexpr-syntax-if-consequent(x),
     sexpr-syntax-if-alternative(x),
     r);
end magic-binding;

/// SETUP INITIAL CT ENVIRONMENT

define function init-static-global-environment 
    (rt-env :: <environment>) => (sys-env, user-env)
  let names = #();
  env-do-global-bindings(rt-env, method (n, v) names := pair(n, names) end);
  let predefined-bindings
    = map(method (n) make(<predefined-binding>, name: n) end, names);
  // format-out("MAGIC BINDINGS:\n");
  // for (b in magic-bindings())
  //   format-out("  %s\n", binding-name(b));
  // end for;
  // format-out("\n");
  let sys-env
    = make(<static-predefined-global-environment>, next: $empty-static-environment);
  insert-globals!(concatenate(magic-bindings(), predefined-bindings), sys-env);
  let user-env  
    = make(<static-global-environment>, next: sys-env);
  values(sys-env, user-env)
end function;

define variable (*static-predefined-global-environment*, 
                 *static-global-environment*)
  = init-static-global-environment(*base-env*);

define variable (*static-predefined-global-boot-environment*, 
                 *static-global-boot-environment*)
  = init-static-global-environment(*boot-env*);

define function ct-env () *static-global-environment* end;
define function ct-boot-env () *static-global-boot-environment* end;

define function do-static-global-bindings (f :: <method>, env)
  iterate loop (env = env)
    unless (instance?(env, <static-predefined-global-environment>))
      do(f, frame-bindings(env));
      loop(environment-next(env));
    end unless;
  end iterate;  
end function;


