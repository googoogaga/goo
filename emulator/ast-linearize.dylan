module: proto

/// WALKER

define method update-walk! (g, o, #rest args)
  for (sd in slot-descriptors(object-class(o)))
    let x = dylan-slot-value(o, sd);
    if (instance?(x, <program>))
      let v = apply(g, x, args);
      // format-out("APPLYING %= GOT %=\n", x, v);
      dylan-slot-value(o, sd) := v;
    end if;
  end for;
  o
end method;

/// BOXING

define class <box-read> (<program>)
  slot box-reference, required-init-keyword: reference:;
end class;

define method print-object (x :: <box-read>, s :: <stream>) => ()
  format(s, "BR(%=)", box-reference(x))
end method;

define class <box-write> (<program>)
  slot box-reference, required-init-keyword: reference:;
  slot box-form,      required-init-keyword: form:;
end class;

define method print-object (x :: <box-write>, s :: <stream>) => ()
  format(s, "BW(%=, %=)", box-reference(x), box-form(x))
end method;

define class <box-creation> (<program>)
  slot box-reference, required-init-keyword: reference:;
end class;

define method print-object (x :: <box-creation>, s :: <stream>) => ()
  format(s, "BC(%=)", box-reference(x));
end method;

define method insert-box! (o :: <program>)
  update-walk!(insert-box!, o)
end method;

define method insert-box! (o :: <local-reference>)
  if (binding-mutable?(reference-binding(o)))
    make(<box-read>, reference: o);
  else
    o
  end if;
end method;

define method insert-box! (o :: <local-assignment>)
  make(<box-write>, 
       reference: assignment-reference(o),
       form:      insert-box!(assignment-form(o)))
end method;

define method insert-box! (o :: <ast-method>)
  function-body(o)
    := insert-box!(boxify-mutable-bindings
		     (function-body(o), function-bindings(o)));
  o
end method;

define method insert-box! (o :: <fix-let>)
  fix-let-arguments(o)
    := insert-box!(fix-let-arguments(o));
  fix-let-body(o)
    := insert-box!(boxify-mutable-bindings(fix-let-body(o), fix-let-bindings(o)));
  o
end method;

define method insert-box! (o :: <locals>)
  locals-functions(o)
    := map(insert-box!, locals-functions(o));
  locals-body(o)
    := insert-box!(boxify-mutable-bindings(locals-body(o), locals-bindings(o)));
  o
end method;

define method boxify-mutable-bindings (form, bindings :: <list>)
  sequentialize
    (collecting ()
       for (binding in bindings)
	 if (binding-mutable?(binding))
	   collect(make(<box-creation>, 
                        reference: make(<local-reference>, binding: binding)))
	 end if
       end for;
       collect(form)
     end collecting);
end method;

define method sexp->object (exp, r)
  insert-box!(objectify(exp, r, #f))
end method;

/// FLATTENING

define class <free-environment> (<program>) 
  slot free-environment-head, required-init-keyword: head:;
  slot free-environment-tail, required-init-keyword: tail:;
end class;

define constant $empty-free-environment 
  = make(<free-environment>, head: #f, tail: #f);

define method empty-free-environment () => (res :: <free-environment>)
  $empty-free-environment
end method;

define method empty-free-environment?
    (e :: <free-environment>) => (well? :: <boolean>)
  e == $empty-free-environment
end method;

define method number-of (o :: <free-environment>) => (res :: <integer>)
  if (empty-free-environment?(o))
    0
  else
    1 + number-of(free-environment-tail(o))
  end if
end method;

define method print-object (x :: <free-environment>, s :: <stream>) => ()
  print-object-list
    (x, s, "(", ")", #t, 
     empty-free-environment?, free-environment-head, free-environment-tail);
end method;

define class <flat-function> (<ast-method>)
  slot function-free = $empty-free-environment, init-keyword: free:;
end class;

define method function-kind (x :: <flat-function>)
  "FFN"
end method;

define class <free-reference> (<real-reference>)
  slot reference-offset :: false-or(<integer>), 
    required-init-keyword: offset:;
  slot reference-self? :: <boolean>,
    required-init-keyword: self?:;
end class;

define method print-object (x :: <free-reference>, s :: <stream>) => ()
  format(s, "FR^%s", reference-binding(x))
end method;

define method lift! (o)
  lift-procedures!(o, #f, #())
end method;

define method lift-procedures! (o :: <Program>, flat-fun, bindings)
  update-walk!(lift-procedures!, o, flat-fun, bindings)
end method;

define method lift-procedures! (o :: <local-reference>, flat-fun, bindings)
  let b = reference-binding(o);
  if (member?(b, bindings))
    o
  else
    let offset = adjoin-free-binding!(flat-fun, o);
    make(<free-reference>, binding: b, offset: offset, 
	 self?: reference-binding(o) == function-name(flat-fun))
  end if
end method;

define method adjoin-free-binding! 
    (flat-fun :: <flat-function>, ref) => (res :: <integer>)
  iterate check (i :: <integer> = 0, free* = function-free(flat-fun))
    if (empty-free-environment?(free*))
      let new-env
        = make(<free-environment>, head: ref, tail: empty-free-environment());
      if (empty-free-environment?(function-free(flat-fun)))
        function-free(flat-fun) := new-env;
      else // add to end to keep offsets accurate
        iterate add (free* = function-free(flat-fun))
          let tail = free-environment-tail(free*);
          if (empty-free-environment?(tail))
            free-environment-tail(free*) := new-env;
          else
            add(tail);
          end if;
        end iterate;
      end if;
      i
    else
      if (reference-binding(ref)
	    == reference-binding(free-environment-head(free*)))
        i
      else
	check(i + 1, free-environment-tail(free*));
      end if;
    end if;
  end iterate;
end method;

define method adjoin-free-binding! (flat-fun, ref)
  break("FOUND BAD FUN %=\n", ref);
end method;
  
define method lift-procedures! (o :: <fix-let>, flat-fun, bindings)
  fix-let-arguments(o)
    := lift-procedures!(fix-let-arguments(o), flat-fun, bindings);
  let new-bindings
    = concatenate(fix-let-bindings(o), bindings);
  fix-let-body(o)
    := lift-procedures!(fix-let-body(o), flat-fun, new-bindings);
  o
end method;

// TODO: WHAT ABOUT SIF?

define method lift-procedures! (o :: <locals>, flat-fun, bindings)
  let new-bindings
    = concatenate(locals-bindings(o), bindings);
  locals-functions(o)
    := map(rcurry(lift-procedures!, flat-fun, new-bindings), locals-functions(o));
  locals-body(o)
    := lift-procedures!(locals-body(o), flat-fun, new-bindings);
  o
end method;

define method lift-procedures! (o :: <ast-primitive>, flat-fun, bindings)
  function-body(o)
    := lift-procedures!(function-body(o), #f, function-bindings(o));
  o
end method;

define method lift-procedures! (o :: <ast-generic>, flat-fun, bindings)
  o
end method;

define method lift-procedures! (o :: <ast-function>, flat-fun, bindings)
  let local-bindings = function-bindings(o);
  let body           = function-body(o);
  let new-fun        = make(<flat-function>, 
                            name:        function-name(o),
			    bindings:    local-bindings,
			    nary?:       function-nary?(o),
			    body:        body,
			    environment: empty-free-environment());
  function-body(new-fun)
    := lift-procedures!(body, new-fun, local-bindings);
  let free*
    = function-free(new-fun);
  function-free(new-fun) 
    := lift-procedures!(free*, flat-fun, bindings);
  new-fun
end method;

/// COLLECTING QUOTATIONS AND FUNCTIONS

define class <flattened-program> (<program>)
  slot program-form :: false-or(<program>) = #f;
  slot program-quotations = #();
  slot program-definitions = #();
end class;

define method print-object (x :: <flattened-program>, s :: <stream>) => ()
  format(s, "PG(FM %=\n   QS %=\n   DS %=)", 
         program-form(x), program-quotations(x), program-definitions(x));
end method;

define class <top-level-form> (<program>)
  slot form-program :: <program>, required-init-keyword: program:;
  slot form-quotations = #();
  slot form-definitions = #(),    init-keyword: definitions:;
end class;

define method print-object (x :: <top-level-form>, s :: <stream>) => ()
  format(s, "FRM(PG %= QS %= DS %=)", 
         form-program(x), form-quotations(x), form-definitions(x));
end method;

define class <quotation-binding> (<binding>)
  slot binding-value, required-init-keyword: value:;
end class;

define method print-object (x :: <quotation-binding>, s :: <stream>) => ()
  format(s, "QB(%= %=)", binding-name(x), binding-value(x))
end method;

define class <function-definition> (<flat-function>) 
  slot function-index, required-init-keyword: index:;
  slot function-temporaries = #(), init-keyword: temporaries:;
  slot function-self-recursive? = #f;
end class;

define method function-kind (x :: <function-definition>)
  format-to-string("FD-%=", function-index(x))
end method;

define class <primitive-definition> (<ast-primitive>) 
  slot function-temporaries = #(), init-keyword: temporaries:;
  slot function-self-recursive? = #f;
end class;

define method function-kind (x :: <primitive-definition>)
  // format-to-string("PD-%=", function-name(x))
end method;

define class <closure-creation> (<program>)
  slot closure-creation-index,    required-init-keyword: index:;
  slot closure-creation-bindings, required-init-keyword: bindings:;
  slot closure-creation-free,     required-init-keyword: free:;
end class;

define method print-object (x :: <closure-creation>, s :: <stream>) => ()
  format(s, "CC-%=(B %= F %=)", 
             closure-creation-index(x), closure-creation-bindings(x), closure-creation-free(x));
end method;

define method flatten-seqs (o)
  list(o);
end method;

define method flatten-seqs (o :: <sequential>)
  collecting ()
    iterate loop (s = o)
      unless (empty-sequential?(s))
	for (e in flatten-seqs(sequential-head(s)))
	  collect(e);
	end for;
	loop(sequential-tail(s));
      end unless;
    end iterate;
  end collecting;
end method;

define method as-top-level-forms (programs)
  map(method (x) make(<top-level-form>, program: x) end, programs)
end method;

define method extract-things! (o)
  let forms  = as-top-level-forms(flatten-seqs(o));
  let result = make(<flattened-program>);
  program-form(result)
    := sequentialize
         (map(method (form) extract!(form, form, result) end, forms));
  result
end method;

define method extract! 
    (o :: <program>, form :: <top-level-form>, result :: <flattened-program>)
  update-walk!(extract!, o, form, result)
end method;

define method extract! 
    (o :: <locals>, form :: <top-level-form>, result :: <flattened-program>)
  locals-functions(o)
    := map(rcurry(extract!, form, result), locals-functions(o));
  extract!(locals-body(o), form, result);
  o
end method;

define method extract! 
    (o :: <constant>, form :: <top-level-form>, result :: <flattened-program>)
  let value = constant-value(o);
  if (value == #f | value == #t | value == #())
    o
  else
    let qb*   = program-quotations(result);
    let index = size(qb*);
    let qb    = make(<quotation-binding>, name: index, value: value);
    program-quotations(result) := pair(qb, qb*);
    form-quotations(form)      := pair(qb, form-quotations(form));
    make(<global-reference>, binding: qb)
  end if;
end method;

define method extract! 
    (o :: <raw-constant>, form :: <top-level-form>, result :: <flattened-program>)
  o
end method;

define method extract! 
    (o :: <flat-function>, 
     form :: <top-level-form>, result :: <flattened-program>)
  let new-body  = extract!(function-body(o), form, result);
  let name      = function-name(o);
  let bindings  = function-bindings(o);
  let nary?     = function-nary?(o);
  for (binding in bindings)
     binding-type(binding) := extract!(binding-type(binding), form, result);
  end for;
  let free-bindings 
    = iterate extract (free = function-free(o))
	if (empty-free-environment?(free))
	  #()
	else
	  pair(reference-binding(free-environment-head(free)),
	       extract(free-environment-tail(free)))
	end if
      end iterate;
  let index
    = adjoin-definition!
        (form, result, name, bindings, nary?, new-body, free-bindings);
  make(<closure-creation>, 
       index: index, bindings: bindings, body: new-body, 
       free: function-free(o))
end method;

define method extract! 
    (o :: <ast-primitive-definition>, 
     form :: <top-level-form>, result :: <flattened-program>)
  let p    = assignment-form(o);
  let body = extract!(function-body(p), form, result);
  let definition
    = make(<primitive-definition>, 
	   name: function-name(p), bindings: function-bindings(p), body: body);
  assert(function-name(p), "NO NAME FOR %=", p);
  program-definitions(result)
    := pair(definition, program-definitions(result));
  form-definitions(form)
    := pair(definition, form-definitions(form));
  extract!(make(<constant>, value: #f), form, result);
end method;

define method adjoin-definition! 
    (form :: <top-level-form>, result :: <flattened-program>, 
     name, bindings, nary?, body, free)
  let definitions
    = program-definitions(result);
  let new-index
    = size(definitions);
  let definition
    = make(<function-definition>, 
	   name: name, bindings: bindings, nary?: nary?,
           body: body, free: free, index: new-index);
  program-definitions(result) := pair(definition, definitions);
  form-definitions(form)      := pair(definition, form-definitions(form));
  new-index
end method;

define method closurize-main! 
    (o :: <flattened-program>, r) => (res :: <flattened-program>)
  let index
    = size(program-definitions(o));
  let name
    = #"---MAIN---"; // TODO: MAKE THIS HIDDEN
  let binding
    = ast-define-binding(r, name, <predefined-binding>);
  let defn
    = make(<primitive-definition>, name: binding,
           bindings: #(), body: program-form(o), index: index);
  let call
    = make(<predefined-application>, 
           binding:
             binding,
	   // function:  
	     // make(<closure-creation>, 
             //      index: index, bindings: #(), free: empty-free-environment()),
	   arguments:
	     empty-argument-list(),
           tail?:
             #f);
  // TODO: reverse definitions in forms
  program-definitions(o)
    := reverse!(pair(defn, program-definitions(o)));
  program-form(o)
    := make(<top-level-form>, 
            program: call, definitions: list(defn));
  o
end method;

// (def f (fun (n k) (if (= n 0) (k 1) (f (- n 1) (fun (r) (k (* n r)))))))

define method gather-temporaries! (o :: <program>)
  program-definitions(o)
    := map(method (def)
	     collect-temporaries!(def, def, #())
	   end method,
	   program-definitions(o));
  o
end method;

define method collect-temporaries! (o :: <program>, flat-fun, r)
  update-walk!(collect-temporaries!, o, flat-fun, r)
end method;

define method collect-temporaries! (o :: <local-reference>, flat-fun, r)
  let binding = reference-binding(o);
  let b       = assq(binding, r);
  if (instance?(b, <pair>))
    make(<local-reference>, binding: tail(b))
  else
    o
  end if
end method;

define method collect-temporaries! (o :: <fix-let>, flat-fun, r)
  fix-let-arguments(o)
    := collect-temporaries!(fix-let-arguments(o), flat-fun, r);
  let new-bindings
    = map(new-renamed-binding, fix-let-bindings(o));
  let new-r
    = concatenate(map(pair, fix-let-bindings(o), new-bindings), r);
  adjoin-temporary-variables!(flat-fun, new-bindings);
  fix-let-bindings(o) := new-bindings;
  fix-let-body(o)     := collect-temporaries!(fix-let-body(o), flat-fun, new-r);
  o
end method;

define method collect-temporaries! (o :: <locals>, flat-fun, r)
  let new-bindings
    = map(new-renamed-binding, locals-bindings(o));
  let new-r
    = concatenate(map(pair, locals-bindings(o), new-bindings), r);
  locals-functions(o)
    := map(rcurry(collect-temporaries!, flat-fun, new-r), locals-functions(o));
  adjoin-temporary-variables!(flat-fun, new-bindings);
  locals-bindings(o) := new-bindings;
  locals-body(o)     := collect-temporaries!(locals-body(o), flat-fun, new-r);
  o
end method;

define method adjoin-temporary-variables! (flat-fun, new-bindings)
  iterate adjoin 
      (temps = function-temporaries(flat-fun), bindings = new-bindings)
    if (empty?(bindings))
      function-temporaries(flat-fun) := temps
    else
      if (member?(head(bindings), temps))
	adjoin(temps, tail(bindings))
      else
	adjoin(pair(head(bindings), temps), tail(bindings))
      end if
    end if
  end iterate;
end method;

define class <renamed-local-binding> (<local-binding>)
  slot binding-index, required-init-keyword: index:;
end class;

define variable *renaming-bindings-counter* = 0;

define method new-renamed-binding (binding :: <local-binding>)
  *renaming-bindings-counter* := *renaming-bindings-counter* + 1;
  make(<renamed-local-binding>, 
       name:  binding-name(binding),
       type:  binding-type(binding),
       index: *renaming-bindings-counter*)
end method;

