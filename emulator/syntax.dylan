module: proto

//  Syntax definitions for Chapter 4 codes

//  Self-evaluating entities
define method sexpr-self-evaluating? (exp) => (well? :: <boolean>)
  instance?(exp, <number>)
    | instance?(exp, <character>)
    | exp == #t
    | exp == #f
    | instance?(exp, <string>)
    | instance?(exp, <vector>);
end method;

//  Our prompt (viz., "EVAL==> ") is a string.
//  Variables
define method sexpr-variable? (exp) => (well? :: <boolean>)
  instance?(exp, <symbol>);
end method;

//  SPECIAL FORMS (IN GENERAL)

define method sexpr-tagged-list? (exp, tag) => (well? :: <boolean>)
  instance?(exp, <pair>) & head(exp) == tag;
end method;

//  QUOTATIONS

define constant $sexpr-quote-tag = #"quote";

define method sexpr-quoted? (exp) => (well? :: <boolean>)
  sexpr-tagged-list?(exp, $sexpr-quote-tag);
end method;

define method sexpr-make-quote (exp) => (res :: <list>)
  list($sexpr-quote-tag, exp)
end method;

define method sexpr-text-of-quotation (quot) => (res)
  second(quot);
end method;

//  ASSIGNMENT--- SET!

define constant $sexpr-set-tag = #"set";

define method sexpr-assignment? (exp) => (well? :: <boolean>)
  sexpr-tagged-list?(exp, $sexpr-set-tag)
end method;

define method sexpr-assignment-variable (assn :: <list>) => (res)
  second(assn);
end method;

define method sexpr-assignment-value (assn :: <list>) => (res)
  third(assn);
end method;

// VARIABLE

define method sexpr-variable-name (exp :: <list>) => (res)
  first(exp)
end method;

define method sexpr-variable-name (exp) => (res)
  exp
end method;

define method sexpr-variable-type (exp :: <list>) => (res)
  second(exp)
end method;

define method sexpr-variable-type (exp) => (res)
  #"<Any>"
end method;

// DEFINITIONS

define constant $sexpr-define-tag = #"dv";

//    (DV (foo ...) ...)
define method sexpr-definition? (exp) => (well? :: <boolean>)
  sexpr-tagged-list?(exp, $sexpr-define-tag);
end method;

define method sexpr-definition-variable (defn :: <list>) => (res)
  //    (DEFINE  foo      ...)
  second(defn);
end method;

define method sexpr-definition-value (defn) => (res)
  third(defn);
end method;

define constant $sexpr-define-syntax-tag = #"ds";

//    (DS (foo ...) ...)

define method sexpr-syntax-definition? (exp) => (well? :: <boolean>)
  sexpr-tagged-list?(exp, $sexpr-define-syntax-tag);
end method;

define method sexpr-syntax-definition-variable (defn :: <list>) => (res)
  first(head(tail(defn))); 
end method;

define constant $sexpr-macro-tag = #"mac";

define method sexpr-syntax-definition-value (defn) => (res)
  pair($sexpr-macro-tag,  // (DEFINE (foo p ...) b...)
       pair(second(defn), tail(tail(defn))));
end method;

define constant $sexpr-define-function-tag = #"df";

define method sexpr-function-definition? (exp) => (well? :: <boolean>)
  sexpr-tagged-list?(exp, $sexpr-define-function-tag);
end method;

define constant $sexpr-define-method-tag = #"dm";

define method sexpr-method-definition? (exp) => (well? :: <boolean>)
  sexpr-tagged-list?(exp, $sexpr-define-method-tag);
end method;

define constant $sexpr-define-generic-tag = #"dg";

define method sexpr-generic-definition? (exp) => (well? :: <boolean>)
  sexpr-tagged-list?(exp, $sexpr-define-generic-tag);
end method;

// (df foo (x ...) form ...)
define method sexpr-function-definition-variable (defn :: <list>) => (res)
  second(defn);
end method;

define method sexpr-forward-primitive? (defn :: <list>) => (res)
  size(defn) = 2
end method;

define method sexpr-signature-parameters
    (signature :: <list>) => (res :: <list>)
  let values-spec-index = position(signature, #"=>");
  if (values-spec-index)
    copy-sequence(signature, end: values-spec-index)
  else
    signature
  end if;
end method;

define method sexpr-signature-value (signature :: <list>) => (res)
  let values-spec-index = position(signature, #"=>");
  if (values-spec-index)
    let value = signature[values-spec-index + 1];
    if (instance?(value, <pair>))
      if (head(value) == #"tup")
        #"<tup>"
      else
        second(value)
      end if
    else
      value
    end if
  else
    #f
  end if;
end method;

define method sexpr-function-signature (defn) => (res)
  third(defn)
end method;

define method sexpr-function-parameters (defn) => (res)
  sexpr-signature-parameters(third(defn))
end method;

define method sexpr-function-value (defn) => (res)
  sexpr-signature-value(third(defn))
end method;

define method sexpr-function-body (defn) => (res)
  tail(tail(tail(defn)))
end method;

define constant $sexpr-method-tag = #"fun";

// (df foo (x ...) form ...)
define method sexpr-function-definition-value (defn) => (res)
  pair($sexpr-method-tag, 
       pair(third(defn), tail(tail(tail(defn)))));
end method;

//  METHOD -- (METHOD (p...) b...))

define method sexpr-method? (exp) => (well? :: <boolean>)
  sexpr-tagged-list?(exp, $sexpr-method-tag);
end method;

define method sexpr-method-signature (method-exp :: <list>) => (res :: <list>)
  second(method-exp)
end method;

define method sexpr-method-parameters (method-exp :: <list>) => (res :: <list>)
  sexpr-signature-parameters(second(method-exp));
end method;

define method sexpr-method-value (method-exp :: <list>) => (res)
  sexpr-signature-value(second(method-exp));
end method;

define method sexpr-method-body (method-exp :: <list>) => (res :: <list>)
  tail(tail(method-exp));
end method;

define method sexpr-make-anonymous-method 
    (parameters :: <list>, body :: <list>) => (res :: <list>)
  concatenate(list($sexpr-method-tag), list(parameters), body)
end method;

define method sexpr-make-method 
    (name, parameters :: <list>, body :: <list>) => (res :: <list>)
  concatenate
    (list($sexpr-define-method-tag, name, parameters), body)
end method;

//  IF CONDITIONALS

define constant $sexpr-if-tag = #"if";

define method sexpr-if? (exp) => (well? :: <boolean>)
  sexpr-tagged-list?(exp, $sexpr-if-tag);
end method;

define method sexpr-if-predicate (exp :: <list>) => (res)
  second(exp);
end method;

define method sexpr-if-consequent (exp :: <list>) => (res)
  third(exp);
end method;

define method sexpr-if-alternative (exp :: <list>) => (res)
  if (~ null?(tail(tail(tail(exp))))) //cdddr
    head(tail(tail(tail(exp)))); //cadddr
  else
    #f
  end if;
end method;

define method sexpr-make-if (pred, conseq, alternative) => (res :: <list>)
  list($sexpr-if-tag, pred, conseq, alternative);
end method;

//  BLOCK

define constant $sexpr-bind-exit-tag = #"lab";

define method sexpr-block? (exp) => (well? :: <boolean>)
  sexpr-tagged-list?(exp, $sexpr-bind-exit-tag)
end method;

define method sexpr-block-name (exp :: <list>) => (res)
  second(exp);
end method;

define method sexpr-block-body (exp :: <list>) => (res :: <list>)
  tail(tail(exp))
end method;

//  UNWIND-PROTECT

define constant $sexpr-unwind-protect-tag = #"fin";

define method sexpr-unwind-protect? (exp) => (well? :: <boolean>)
  sexpr-tagged-list?(exp, $sexpr-unwind-protect-tag)
end method;

define method sexpr-unwind-protect-protected-form (exp :: <list>) => (res)
  second(exp);
end method;

define method sexpr-unwind-protect-cleanup-forms (exp :: <list>) => (res)
  tail(tail(exp));
end method;

//  MONITOR -- (try ((,condition ,resume) ,@body) ,@body)

define constant $sexpr-monitor-tag = #"try";

define method sexpr-monitor? (exp) => (well? :: <boolean>)
  sexpr-tagged-list?(exp, $sexpr-monitor-tag)
end method;

define method sexpr-monitor-handler (exp :: <list>) => (res)
  let handler-expr = second(exp);
  sexpr-make-anonymous-method(head(handler-expr), tail(handler-expr));
end method;

define method sexpr-monitor-body (exp :: <list>) => (res :: <list>)
  tail(tail(exp))
end method;

//  BEGIN expressions (a.k.a. sequences)

define constant $sexpr-begin-tag = #"seq";

define method sexpr-begin? (exp) => (well? :: <boolean>)
  sexpr-tagged-list?(exp, $sexpr-begin-tag)
end method;

define method sexpr-begin-actions (begin-exp) => (res :: <list>)
  tail(begin-exp);
end method;

define method sexpr-last-exp? (seq :: <list>) => (well? :: <boolean>)
  null?(tail(seq));
end method;

define method sexpr-first-exp (seq :: <list>) => (res)
  head(seq);
end method;

define method sexpr-rest-exps (seq :: <list>) => (res :: <list>)
  tail(seq);
end method;

define method sexpr-sequence->begin (seq :: <list>) => (res)
  if (empty?(seq))
    seq;
  elseif (sexpr-last-exp?(seq))
    sexpr-first-exp(seq);
  else
    sexpr-make-begin(seq);
  end if;
end method;

define method sexpr-make-begin (exp :: <list>) => (res :: <list>)
  pair($sexpr-begin-tag, exp);
end method;

//  Procedure applications -- NO-ARGS? and LAST-OPERAND? added
define method sexpr-application? (exp) => (well? :: <boolean>)
  instance?(exp, <pair>);
end method;

define method sexpr-operator (app :: <list>) => (res)
  head(app);
end method;

define method sexpr-operands (app :: <list>) => (res :: <list>)
  tail(app);
end method;

define method sexpr-no-operands? (args :: <list>) => (well? :: <boolean>)
  empty?(args);
end method;

define method sexpr-first-operand (args :: <list>) => (res)
  head(args);
end method;

define method sexpr-rest-operands (args :: <list>) => (res :: <list>)
  tail(args);
end method;

define method sexpr-make-application (op, operands :: <list>) => (res :: <list>)
  concatenate(list(op), operands);
end method;

define variable *unique-name-counter* = 0;

define method sexpr-new-unique-name-counter! () => (res :: <integer>)
  // without-interrupts
  *unique-name-counter* := *unique-name-counter* + 1;
  *unique-name-counter*;
end method;

define method sexpr-unique-name
    (prefix :: type-union(<string>, <symbol>)) => (res :: <symbol>)
  as(<symbol>, concatenate(as(<string>, prefix),
                           number->string(sexpr-new-unique-name-counter!())));
end method;

//  LET -- (let ((var value) ...) form ...)
//         var:        simple-var | (tup tup-var ...)
//         tup-var:    simple-var | (name "...")
//         simple-var: name | (name type)

define constant $sexpr-let-tag = #"let";

define method sexpr-let? (exp) => (well? :: <boolean>)
  sexpr-tagged-list?(exp, $sexpr-let-tag);
end method;

define method sexpr-let-bound-variables (let-exp :: <list>) => (res :: <list>)
  map(head, second(let-exp));
end method;

define method sexpr-let-values (let-exp :: <list>) => (res :: <list>)
  map(second, second(let-exp));
end method;

define method sexpr-let-body (let-exp :: <list>) => (res)
  sexpr-sequence->begin(tail(tail(let-exp)));
end method;

define method sexpr-let-names+values (names :: <list>, vals :: <list>)
  iterate loop (rnames = #(), rvalues = #(), names = names, vals = vals)
    if (empty?(names))
      values(reverse!(rnames), reverse!(rvalues))
    else
      let name  = head(names);
      let value = head(vals);
      if (instance?(name, <pair>) & head(name) == #"tup")
	let tupname
	  = sexpr-unique-name("tup");
	let (rtnames, rtvalues)
	  = iterate inner
		(rtnames = list(tupname), rtvalues = list(value), 
		 index = 0, tnames = tail(name))
              if (empty?(tnames))
		values(rtnames, rtvalues)
	      else
		let name = head(tnames);
		if (instance?(name, <pair>) & head(tail(name)) == #"...")
		  inner(pair(list(head(name), #"<lst>"), rtnames), 
                        pair(tupname, rtvalues),
			index + 1, tail(tnames))
		else
		  inner(pair(tupname, pair(name, rtnames)),
			pair(list(#"tail", tupname), 
			     pair(list(#"head", tupname), rtvalues)), 
			index + 1, tail(tnames))
		end if;
	      end if
	    end iterate;
	loop(concatenate(rtnames, rnames), concatenate(rtvalues, rvalues),
	     tail(names), tail(vals))
      else
	loop(pair(name, rnames), pair(value, rvalues), tail(names), tail(vals))
      end if;
    end if;
  end iterate;
end method;

define method sexpr-let->combination (let-exp :: <list>) => (res)
  let onames          = sexpr-let-bound-variables(let-exp);
  let ovalues         = sexpr-let-values(let-exp);
  let body            = sexpr-let-body(let-exp);
  let (names, values) = sexpr-let-names+values(onames, ovalues);
  // format-out("VARS %=\n", names);
  // format-out("VALS %=\n", values);
  // pair(list($sexpr-method-tag, names, body), values);
  iterate col (names = names, values = values)
    if (empty?(names))
      body
    else
      pair(list($sexpr-method-tag, list(head(names)), 
		col(tail(names), tail(values))),
           list(head(values)))
    end if
  end iterate;
end method;

//  LOC -- (loc ((?var (?param ...) ?body) ...) ?body)

define constant $sexpr-locals-tag = #"loc";

define method sexpr-loc? (exp) => (well? :: <boolean>)
  sexpr-tagged-list?(exp, $sexpr-locals-tag);
end method;

define method sexpr-loc-bound-names (loc-exp :: <list>) => (res :: <list>)
  map(first, second(loc-exp));
end method;

define method sexpr-loc-bound-signatures (loc-exp :: <list>) => (res :: <list>)
  map(second, second(loc-exp));
end method;

define method sexpr-loc-bound-bodies (loc-exp :: <list>) => (res :: <list>)
  map(compose(tail, tail), second(loc-exp));
end method;

define method sexpr-loc-raw-body (loc-exp :: <list>) => (res :: <list>)
  tail(tail(loc-exp));
end method;

define method sexpr-loc-body (loc-exp :: <list>) => (res)
  sexpr-sequence->begin(sexpr-loc-raw-body(loc-exp));
end method;

define constant $sexpr-iterate-tag = #"rep";

//  ITR expressions (ITR ?name ((?var ?init) ...) ?body)
define method sexpr-itr? (exp) => (well? :: <boolean>)
  sexpr-tagged-list?(exp, $sexpr-iterate-tag);
end method;

define method sexpr-itr-name (itr-exp :: <list>) => (res :: <symbol>)
  second(itr-exp)
end method;

define constant $sexpr-values-tag = #"=>";

define method sexpr-itr-signature (itr-exp :: <list>) => (res :: <list>)
  let sig = third(itr-exp);
  concatenate(map(first, sexpr-signature-parameters(sig)),
	      if (sexpr-signature-value(sig)) 
		#()
	      else
		list($sexpr-values-tag) 
	      end if,
	      list(sexpr-signature-value(sig)))
end method;

define method sexpr-itr-inits (itr-exp :: <list>) => (res :: <list>)
  map(second, third(itr-exp));
end method;

define method sexpr-itr-body (itr-exp :: <list>) => (res :: <list>)
  tail(tail(tail(itr-exp)))
end method;

define method sexpr-itr->loc (itr-exp :: <list>) => (res :: <list>)
  let name  = sexpr-itr-name(itr-exp);
  let sig   = sexpr-itr-signature(itr-exp);
  let body  = sexpr-itr-body(itr-exp);
  let inits = sexpr-itr-inits(itr-exp);
  list($sexpr-locals-tag,
       list(concatenate(list(name, sig), body)),
       concatenate(list(name), inits));
end method;

//  ISA

define constant $sexpr-isa-tag = #"isa";

define method sexpr-isa? (exp) => (well? :: <boolean>)
  sexpr-tagged-list?(exp, $sexpr-isa-tag);
end method;

define method sexpr-isa-parents (exp :: <list>) => (res)
  let parents = second(exp);
  if (instance?(parents, <list>))
    parents
  else
    list(parents)
  end if;
end method;

define method sexpr-isa-slot-inits (exp :: <list>) => (res :: <list>)
  tail(tail(exp))
end method;

define method sexpr-isa-init-slots (exp :: <list>) => (res :: <list>)
  map(second, exp)
end method;

define method sexpr-isa-init-values (exp :: <list>) => (res :: <list>)
  map(third, exp)
end method;

//  SLOT

define constant $sexpr-slot-tag = #"slot";

define method sexpr-slot? (exp) => (well? :: <boolean>)
  sexpr-tagged-list?(exp, $sexpr-slot-tag)
end method;

define method sexpr-slot-object (exp :: <list>) => (res)
  second(exp);
end method;

define method sexpr-slot-variable (exp :: <list>) => (res)
  third(exp)
end method;

define method sexpr-slot-init (exp :: <list>) => (res)
  if (size(exp) = 4)
    element(exp, 3)
  else
    #"Nul" // TODO: INCORRECT -- WILL CAUSE CIRCULARITIES
  end if
end method;

define method sexpr-make-native-getter (name, type) => (res :: <list>)
  sexpr-make-method(name, list(list(#"_x", type)), 
		    list(list(#"slot-value", #"_x", name)));
end method;

define method sexpr-make-native-setter (name, type, slot-type) => (res :: <list>)
  sexpr-make-method
    (sexpr-make-setter-name(name), 
     list(list(#"_z", slot-type), list(#"_x", type)), 
     list(list(#"slot-value-setter", #"_z", #"_x", name)));
end method;

define method sexpr-make-getter (name, type) => (res :: <list>)
  sexpr-make-method(name, list(list(#"_x", type)), 
		    list(list(#"slot-value", #"_x", sexpr-make-quote(name))));
end method;

define method sexpr-make-setter (name, type, slot-type) => (res :: <list>)
  sexpr-make-method
    (sexpr-make-setter-name(name), 
     list(list(#"_z", slot-type), list(#"_x", type)), 
     list(list(#"slot-value-setter", #"_z", #"_x", sexpr-make-quote(name))));
end method;

define method sexpr-make-setter-name (name) => (res :: <symbol>)
  as(<symbol>, concatenate(as(<string>, name), "-setter"))
end method;

// BACKQUOTE

define method sexpr-macro? (exp) => (well? :: <boolean>)
  sexpr-tagged-list?(exp, $sexpr-macro-tag)
end method;

define constant $sexpr-macro-expand-tag = #"macro-expand";

define method sexpr-macro-expand? (exp) => (well? :: <boolean>)
  sexpr-tagged-list?(exp, $sexpr-macro-expand-tag)
end method;

define constant $sexpr-syntax-if-tag = #"mif";

define method sexpr-make-syntax-if 
    (pat, exp, consequent, alternative) => (res :: <list>)
  list($sexpr-syntax-if-tag, list(pat, exp), consequent, alternative)
end method;

// define constant *comma*          = #"unquote";
define constant *comma-atsign*   = #"comma-atsign";
define constant *bq-list*        = #"bq-list";
define constant *bq-list**       = #"bq-list*";
define constant *bq-append*      = #"bq-append";
define constant *bq-nconc*       = #"bq-nconc";
define constant *bq-clobberable* = #"bq-clobberable";
define constant *bq-quote*       = #"bq-quote";

define method sexpr-expand-backquote (x :: <list>) => (res :: <list>)
  let raw-result = bq-process(x);
  let res = 
  bq-remove-tokens(raw-result);
  // format-out("RES = %=\n", res);
  res
end method;

define method sexpr-unquote? (x) => (well?)
  sexpr-tagged-list?(x, #"unquote")
end method;

define method sexpr-unquote-splicing? (x) => (well?)
  sexpr-tagged-list?(x, #"unquote-splicing")
end method;

define constant $sexpr-quasiquote-tag = #"quasiquote";

define method sexpr-backquote? (x) => (well?)
  sexpr-tagged-list?(x, $sexpr-quasiquote-tag)
end method;

define method sexpr-atom? (x) => (well?)
  ~instance?(x, <pair>)
end method;

define method nreconc (x :: <list>, y :: <list>) => (res :: <list>)
  concatenate!(reverse!(x), y)
end method;

define method bq-process (x) => (res)
  case
    sexpr-atom?(x)
      => list(*bq-quote*, x);
    sexpr-backquote?(x)
      => bq-process(sexpr-expand-backquote(head(tail(x))));
    sexpr-unquote?(x)
      => head(tail(x));
    sexpr-unquote-splicing?(x)
      => error("UNQUOTE-SPLICING %= AFTER BQ", head(tail(x)));
    otherwise
      => block (return)
	   for (p = x   then tail(p),
		q = #() then pair(bracket(head(p)), q))
	     if (sexpr-atom?(p))
	       return(pair(*bq-append*, 
			   nreconc(q, list(list(*bq-quote*, p)))));
	     else
	       when (sexpr-unquote?(p))
		 unless (empty?(tail(tail(p))))
		   error("Malformed ,%=", p);
		 end unless;
		 return(pair(*bq-append*, nreconc(q, list(head(tail(p))))));
	       end when;
	       when (tail(p) == *comma-atsign*)
		 error("Dotted ,@%=", p);
	       end when;
	     end if;
	   end for;
	 end block;
  end case;
end method;

define method bracket (x) => (res)
  case
    sexpr-atom?(x)
      => list(*bq-list*, bq-process(x));
    sexpr-unquote?(x)
      => list(*bq-list*, head(tail(x)));
    sexpr-unquote-splicing?(x)
      => list(*bq-clobberable*, head(tail(x)));
    otherwise
      => list(*bq-list*, bq-process(x));
  end case;
end method;

define method map-tree (fn :: <function>, x) => (res)
  if (sexpr-atom?(x))
    fn(x)
  else
    let a = fn(head(x));
    let d = map-tree(fn, tail(x));
    if (a = head(x) & d = tail(x))
      x
    else
      pair(a, d)
    end if
  end if
end method;

define method bq-remove-tokens (x)
  case
    x == *bq-list*   => #"%list";
    x == *bq-append* => #"%cat";
    x == *bq-nconc*  => #"%cat!";
    x == *bq-list**  => #"list*";
    x == *bq-quote*  => #"quote";
    sexpr-atom?(x)   => x;
    head(x) == *bq-clobberable*
      => bq-remove-tokens(head(tail(x)));
    head(x) == *bq-list**
      & instance?(<pair>, tail(tail(x)))
      & empty?(tail(tail(tail(x))))
      => pair(#"%pair", map-tree(bq-remove-tokens, tail(x)));
    otherwise
      => map-tree(bq-remove-tokens, x);
  end case;
end method;

/// SEXPR-IF -- (sexpr-if (pattern expression) consequent [ alternative ])

define method sexpr-syntax-if? (exp) => (well? :: <boolean>)
  sexpr-tagged-list?(exp, $sexpr-syntax-if-tag) 
end method;

define method sexpr-syntax-if-value (exp :: <list>) => (res)
  second(second(exp))
end method;

define method sexpr-syntax-if-pattern (exp :: <list>) => (res)
  first(second(exp))
end method;

define method sexpr-syntax-if-consequent (exp :: <list>) => (res)
  third(exp)
end method;

define method sexpr-syntax-if-alternative (exp :: <list>) => (res)
  element(exp, 3, default: #f);
end method;

define method sexpr-pattern-variable? (pat) => (well?)
  sexpr-unquote?(pat) | sexpr-unquote-splicing?(pat)
end method;

define method sexpr-pattern-variable-name (pat :: <list>) => (res)
  second(pat)
end method;

define method sexpr-bind-pattern-variables (pat :: <list>) => (res :: <list>)
  remove-duplicates!
    (iterate col (pat = pat)
       if (~instance?(pat, <list>) | empty?(pat))
	 #()
       else 
	 let x = head(pat);
	 if (sexpr-pattern-variable?(x))
	   pair(sexpr-pattern-variable-name(x), col(tail(pat)));
	 else
	   concatenate(col(head(pat)), col(tail(pat)));
	 end if
       end if
     end iterate);
end method;

// MACROS

define method sexpr-make-macro-function (exp :: <list>) => (res)
  let sif
    = sexpr-make-syntax-if
        (sexpr-method-parameters(exp), #"exp", 
	 sexpr-sequence->begin(sexpr-method-body(exp)), #f);
  let func  
    = sexpr-make-anonymous-method(list(#"exp"), list(sif));
  func
end method;


