module: proto

// str-p2c("(head '())");
// str-p2c("(loc ((f (x) x)) (f 1))");
// str-p2c("(fun (x) x)");
// str-p2c("(blk x (x))");
// str-p2c("(fun (x) (fun () x))");
// str-p2c("(%i+ (%raw 1) (%raw 2))");
// (def f (fun (n k) (if (= n 0) (k 1) (f (- n 1) (fun (r) (k (* n r)))))))
// p2c-boot-files(#("runtime", "runtime-native", "ascii"));
// 

define method compute-ast (filename, ct-env)
  let in-name  = proto-filename(filename);
  let x = read-file(in-name);
  with-native objectify(x, ct-env, #f) end;
end method;

define method p2c-file (filename, #key rt-env = env(), ct-env = ct-env(), prg = #f)
  let out-name = c-filename("proto" /* filename */);
  let ast      = if (prg) #f else compute-ast(filename, ct-env); end;
  call-with-output-port
    (out-name,
     method (out-port)
       compile->c(ast, ct-env, rt-env, out: out-port, prg: prg)
     end method);
end method;

define method p2c-files
    (filenames, #key rt-env = env(), ct-env = ct-env(), prg = #f)
  let out-name = c-filename("proto" /* filename */);
  call-with-output-port
    (out-name,
     method (out-port)
       if (prg)
	 compile->c(#f, ct-env, rt-env, out: out-port, prg: prg)
       else
         let asts
           = collecting ()
	       for (filename in filenames)
                 collect(compute-ast(filename, ct-env));
               end for;
             end collecting;
         let ast
           = sequentialize(asts);
         compile->c(ast, ct-env, rt-env, out: out-port, prg: prg)
       end if
     end method);
end method;

define method p2c-boot-files (files, #key prg = #f)
  p2c-files(pair("boot", files), 
            rt-env: boot-env(), ct-env: ct-boot-env(), prg: prg);
end method;

define method p2c-top ()
  p2c-boot-files
    (#("macros", "runtime", "runtime-native",
       "read", "write", "syntax", 
       "ast", "ast-eval", 
       "ast-linearize", "p2c",
       "top", "main"));
end method;

define method p2c-boot (#key prg = #f)
  p2c-file("boot", rt-env: boot-env(), ct-env: ct-boot-env(), prg: prg);
end method;

define method p2cb ()
  p2c-file("b", rt-env: boot-env(), ct-env: ct-boot-env());
end method;

define method p2c-str (s, #key rt-env = env(), ct-env = ct-env())
  // init-static-global-environment(rt-env);
  let sxp = parse(s, ct-env: ct-env);
  // format-out("SXP %=\n", sxp);
  compile->c(sxp, ct-env, rt-env)
end method;

define thread variable *definitions* = #f;

define method compute-program (e, ct-env, rt-env)
  init-static-global-environment(rt-env);
  let obj = sexp->object(e, ct-env);
  // format-out("OBJ %=\n", obj);
  let dyn = analyze-dynamic-extent(obj);
  // format-out("DYN %=\n", dyn);
  let cal = analyze-calls(dyn);
  // format-out("CAL %=\n", cal);
  let lft = lift!(cal);
  // format-out("LFT %=\n", lft);
  let prg = extract-things!(lft);
  // format-out("EXT %=\n", prg);
  let flt = closurize-main!(prg, ct-env, 64);
  // format-out("FLT %=\n", flt);
  gather-temporaries!(flt);
  // format-out("TMP %=\n", flt);
  // format-out("\n\n%=\n\n", prg);
  report-undefined-global-bindings(ct-env);
  prg
end method;

define method compile->c
    (e, ct-env, rt-env, #key out = current-output-port(), prg = #f)
  let prg = prg | compute-program(e, ct-env, rt-env);
  dynamic-bind (*definitions* = program-definitions(prg))
    generate-c-program(out, e, prg, ct-env);
  end dynamic-bind;
end method;

define method generate-c-program (out, e, prg, ct-env)
  generate-header(out, e);
  generate-global-environment(out, ct-env);
  generate-quotation-forwards(out, program-quotations(prg));
  generate-function-forwards(out, program-definitions(prg));
  generate-function-bodies(out, program-definitions(prg));
  generate-main(out, program-form(prg));
  generate-trailer(out);
  prg
end method;

///ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo
///              generation

/// file header and trailer are simple.

define method pp (e, out)
  print(e, out, pretty?: #t);
end method;

define method generate-header (out, e)
  format(out, "/* EMULATED PROTO 2 C $REVISION: 0.2E $ \n");
  // pp(e, out);
  format(out, "  */\n\n#include \"prt.h\"\n");
end method;

define method generate-trailer (out)
  format(out, "\n/* END OF GENERATED CODE. */\n");
end method;

///ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo
/// generate global environment. for all global-bindings allocate a
/// location to hold it. we also give the real name to the macro so
/// that some reflective capabilities can be added to c.

/// gb* is a list of instances of global-binding.

define method generate-global-environment (out, env)
  format(out, "\n/* GLOBAL ENVIRONMENT: */\n");
  // TODO: TAKE ENV AS ARG
  do-static-global-bindings(curry(generate-global-binding, out), env);
end method;

define method generate-global-binding (out, gb)
  let name = binding-name(gb);
  format(out, "DEF(%s,\"%s\");\n",
	 mangle-global-name(name), name);
end method;

define method generate-global-binding (out, gb :: <predefined-binding>)
end method;

//// NAME MANGLING

define constant $module-separator               = "Y";
define constant $local-suffix                   = "_";
define constant $hygiene-marker	                = "F";
define constant $escape-separator               = "Z";
define constant $iep-suffix 	                = "I";
define constant $method-mangled-marker-string   = "M";

// Note that the following must be characters rather than strings, since
// the initialization of mangles tables assumes that.

define constant $module-marker             = $module-separator[0];
define constant $local-marker              = $local-suffix[0];
define constant $hygiene-char              = $hygiene-marker[0];
define constant $escape-marker             = $escape-separator[0];
define constant $iep-marker                = $iep-suffix[0];
define constant $method-mangled-marker	   = $method-mangled-marker-string[0];

define constant $min-character-code = 0;
define constant $max-character-code = 255; // We allow 8 bit ascii.

/// MANGLING

define constant $mangles-data
  = vector(#('-', '_'), #('!', 'X'), #('$', 'D'), #('%', 'P'), #('*', 'T'), 
           #('/', 'S'), #('<', 'L'), #('>', 'G'), #('?', 'Q'), #('+', 'A'),
           #('&', 'B'), #('^', 'C'), #('_', 'U'), #('@', 'O'), #('=', 'E'),
           #('~', 'N'));

define abstract class <abstract-mangler> (<object>)
  constant slot mangler-buffer = make(<stretchy-vector>);
  constant slot mangler-table  = make(<vector>, size: $max-character-code + 1);
end class;

define abstract class <mangler> (<abstract-mangler>)
end class;

define class <simple-mangler> (<mangler>)
end class;

// Guarantee instantiability of the <MANGLER> class.

define sealed method make (c == <mangler>, #rest keys, #key, #all-keys)
    => (mangler :: <mangler>)
  apply(make, <simple-mangler>, keys)
end method;

define class <mangler-with-options> (<mangler>)
  // Options a assumed to be in the form of prefixes and/or
  // suffixes to the basic mangle. This are stored as
  // strings, which is convenient because they can be zero
  // or more characters in each case.
  slot mangler-prefix-options :: <byte-string> = "";
  slot mangler-suffix-options :: <byte-string> = "";
end class;

define method mangler-position (mangler :: <mangler>) => (res :: <integer>)
  size(mangler-buffer(mangler))
end method;

define method initialize (mangler :: <mangler>, #key, #all-keys) => ()
  next-method();
  initialize-mangler-table(mangler);
end method;

// TODO:
// At the moment, this method only deals with the options that are
// needed by the debugger, and the processing of those keywords is
// quite simple-minded. The interface and its implementation may need
// to be generalized somewhat.

// define sealed method initialize
//     (mangler :: <mangler-with-options>,
//      #key constant-object-extension = #f,
//           wrapper-object-extension = #f,
//           iep-extension = #f,
//      #all-keys) => ()
//   next-method();
//   let prefix = "";
//   let suffix = "";
//   if (constant-object-extension)
//     prefix := $constant-prefix;
//   elseif (wrapper-object-extension)
//     prefix := $constant-prefix;
//     suffix := $wrapper-suffix;
//   elseif (iep-extension)
//     prefix := $constant-prefix;
//     suffix := $iep-suffix;
//   end if;
//   mangler.mangler-prefix-options := prefix;
//   mangler.mangler-suffix-options := suffix;
// end method;

define method initialize-mangler-table (mangler :: <mangler>) => ()
  let table = mangler-table(mangler);
  // fill with default manglings
  for (i from $min-character-code to $max-character-code) 
    table[i] 
      := concatenate
           ($escape-separator, mangle-integer(i), $escape-separator);
  end for;
  // fill in special cases
  for (mangle in $mangles-data)
    table[as(<integer>, mangle[0])] := mangle[1];
  end for;
  // fill C allowable versions
  for (i from as(<integer>, 'a') to as(<integer>, 'z'))
    table[i] := as(<character>, i);
  end for;
  for (i from as(<integer>, '0') to as(<integer>, '9'))
    table[i] := as(<character>, i);
  end for;
end method;

define constant $number-characters :: <byte-string> = "0123456789";

define method mangle-integer
    (number :: <integer>) => (mangled-number :: <byte-string>)

  iterate process-integer
      (number :: <integer> = number, index :: <integer> = 1)
    let (quotient :: <integer>, remainder :: <integer>)
      = truncate/(number, 10);
    let digit :: <byte-character> = $number-characters[remainder];
    
    if (quotient = 0)
      let result :: <byte-string> = make(<byte-string>, size: index);
      result[0] := digit;
      result
    else
      let result :: <byte-string> = process-integer(quotient, index + 1);
      result[result.size - index] := digit;
      result
    end if;

  end iterate;
end method;

define method mangler-as-string 
    (mangler :: <abstract-mangler>, #key start :: <integer> = 0) 
 => (res :: <byte-string>)
  // if (start = 0)
  //   as(<byte-string>, mangler-buffer(mangler))
  // else
  //   as(<byte-string>, copy-sequence(mangler-buffer(mangler), start: start))
  // end if
  let buffer :: <stretchy-vector>
    = mangler-buffer(mangler);
  let buffer-size :: <integer>
    = size(buffer);
  let string :: <byte-string>
    = make(<byte-string>, size: buffer-size - start);
  // without-bounds-checks
    for (i :: <integer> from start below buffer-size,
         j :: <integer> from 0)
      string[j] := buffer[i];
    end for;
  // end without-bounds-checks;
  string
end method;

// The method for <mangler-with-options> is responsible for
// installing the prefixes and suffixes in the final string.
// (Is this the most efficient way? It certainly seems to be
// the cleanest).

define method mangler-as-string
    (mangler :: <mangler-with-options>, #key start :: <integer> = 0)
 => (res :: <byte-string>)
  concatenate
     (mangler.mangler-prefix-options,
      next-method(),
      mangler.mangler-suffix-options)
end method;

define method mangler-reset
    (mangler :: <abstract-mangler>) => (res :: <abstract-mangler>)
  size(mangler-buffer(mangler)) := 0;
  mangler
end method;

define inline method mangle-raw-into 
    (mangler :: <abstract-mangler>, name :: <byte-character>)
  add!(mangler-buffer(mangler), name);
end method;

define inline method mangle-raw-into 
    (mangler :: <abstract-mangler>, name :: <byte-string>)
  concatenate!(mangler-buffer(mangler), name);
end method;

define inline method mangle-raw-into 
    (mangler :: <abstract-mangler>, name :: <symbol>)
  concatenate!
    (mangler-buffer(mangler), as-lowercase(as(<byte-string>, name)));
end method;

define method mangle-name-into 
    (mangler :: <mangler>, name :: <byte-string>)
  for (c in name)
    mangle-raw-into(mangler, mangler-table(mangler)[as(<integer>, c)]);
  end for;
end method;

define method mangle-name-into 
    (mangler :: <mangler>, name)
  mangle-name-into(mangler, as-lowercase(as(<byte-string>, name)))
end method;

define method mangle-name-raw
   (mangler :: <mangler>, name) => (res :: <byte-string>)
  mangler-reset(mangler);
  mangle-name-into(mangler, name);
  mangler-as-string(mangler)
end method;

define method mangle-name-locally
   (mangler :: <mangler>, name) => (res :: <byte-string>)
  mangler-reset(mangler);
  mangle-name-into(mangler, name);
  mangle-raw-into(mangler, $local-suffix);
  mangler-as-string(mangler)
end method;
 
define method mangle-name-globally
   (mangler :: <mangler>, name) => (res :: <byte-string>)
  mangler-reset(mangler);
  mangle-raw-into(mangler, $module-marker);
  mangle-name-into(mangler, name);
  mangler-as-string(mangler)
end method;
 
define method mangle-name-hygienically
    (mangler :: <mangler>, name, marker :: <integer>)
 => (res :: <byte-string>)
  mangler-reset(mangler);
  mangle-name-into(mangler, name);
  concatenate
    (mangler-as-string(mangler), $hygiene-marker, mangle-integer(marker))
end method;

define variable *mangler* = make(<mangler>);

define method mangle-global-name (name :: <string>) => (res :: <string>)
  mangle-name-globally(*mangler*, name);
end method;

define method mangle-global-name (name :: <symbol>) => (res :: <string>)
  mangle-global-name(as(<string>, name));
end method;

define method mangle-local-name (name :: <string>) => (res :: <string>)
  mangle-name-locally(*mangler*, name);
end method;

define method mangle-local-name (name :: <symbol>) => (res :: <string>)
  mangle-local-name(as(<string>, name));
end method;

define method mangle-raw-name (name :: <string>) => (res :: <string>)
  mangle-name-raw(*mangler*, name);
end method;

define method mangle-raw-name (name :: <symbol>) => (res :: <string>)
  mangle-raw-name(as(<string>, name));
end method;

define method mangle-local-marked-name
    (name :: <string>, marker :: <integer>) => (res :: <string>)
  mangle-name-hygienically(*mangler*, name, marker);
end method;

define method mangle-local-marked-name
    (name :: <symbol>, marker :: <integer>) => (res :: <string>)
  mangle-local-marked-name(as(<string>, name), marker);
end method;

///ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo
/// to ease writing printing expressions.

define macro between-parentheses
  { between-parentheses (?outval:expression) ?:body end }
    => { begin 
	   let ?=out = ?outval;
	   format(?=out, "("); begin ?body end; format(?=out, ")");
	 end }
end macro;

///ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo
/// generate static shared quotations. linearize quotations so they
/// can be expressed by c constants. equal? quotations are shared.
/// and quotations here are completely static.

/// qb* is a list of instances of quotation-binding.

define method generate-quotation-forwards (out, qb* :: <list>)
  format(out, "\n/* FORWARD QUOTATIONS: */\n");
  for (qb in qb*)
    format(out, "DEFLIT(lit_%s);\n", binding-name(qb));
  end for;
end method;

define method generate-quotations (out, qb* :: <list>)
  for (qb in qb* using backward-iteration-protocol)
    format(out, "lit_%s = ", binding-name(qb));
    generate-quotation(out, binding-value(qb));
    // format(out, ", "); 
    format(out, ";\n  "); 
  end for;
end method;

define method false-name ()
  mangle-global-name("%false");
end method;

define method generate-quotation (out, qb :: <boolean>)
  format(out, "%s", mangle-global-name(if (qb) "%true" else "%false" end));
end method;

define method generate-quotation (out, qb :: <empty-list>)
  format(out, mangle-global-name("nil"));
end method;

define method generate-quotation (out, qb :: <pair>)
  format(out, "%s(", mangle-global-name("%pair"));
  generate-quotation(out, head(qb));
  format(out, ", ");
  generate-quotation(out, tail(qb));
  format(out, ")");
end method;

define method generate-quotation (out, x :: <integer>)
  format(out, "%s((P)%d)", mangle-global-name("%int"), x);
end method;

define method generate-quotation (out, x :: <byte-character>)
  format(out, "%s((P)%d)", mangle-global-name("%chr"), as(<integer>, x));
end method;

define method float-to-c-string (o :: <float>) => (res :: <string>)
  let s = float-to-string(o);
  //---*** Is there a better way to do this???
  block (done)
    let i = size(s) - 1;
    while (i > -1)
      select (s[i])
	's' => s[i] := 'e'; done();	//---*** Should be 'f' but GCC complains!
	'd' => s[i] := 'e'; done();
	'x' => s[i] := 'e'; done();	//---*** Should be 'l' but GCC complains!
	otherwise => ;
      end;
      i := i - 1
    end
  end;
  s
end method;

define method generate-quotation (out, x :: <single-float>)
  format(out, "%s(FLOINT(%s))", mangle-global-name("%flo"), float-to-c-string(x));
end method;

define method generate-quotation (out, x :: <byte-string>)
  format(out, "%s((P)%=)", mangle-global-name("%sb"), x);
end method;

define method generate-quotation (out, x :: <simple-object-vector>)
  // TODO: TIE TOGETHER
  format(out, "CALLN(%s, %s", mangle-global-name("vec"), size(x));
  for (e in x)
    format(out, ", ");
    generate-quotation(out, e);
  end for;
  format(out, ")");
end method;

define method generate-quotation (out, x :: <symbol>)
  format(out, "%s((P)%=)", mangle-global-name("%%sym"), as(<string>, x));
end method;


///ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo
/// convert an expression to c
/// faire en une passe  plutot qu'avec  des chaines.

define generic to-c (e :: <program>, f, out);

/*
define method to-c (e :: <top-level-form>, f, out)
  between-parentheses (out)
    generate-quotations(out, form-quotations(e));
    generate-functions(out, form-definitions(e));
    to-c(form-program(e), f, out);
  end between-parentheses;
end method;
*/

define method to-c (e :: <top-level-form>, f, out)
  generate-quotations(out, form-quotations(e));
  generate-functions(out, form-definitions(e));
  between-parentheses (out)
    to-c(form-program(e), f, out);
  end between-parentheses;
end method;

/// generate the name used in c for a binding.

define generic binding->c (binding, out);

define method binding->c (binding :: <binding>, out)
  format(out, mangle-global-name(binding-name(binding)));
end method;

define method binding->c (binding :: <local-binding>, out)
  format(out, mangle-local-name(binding-name(binding)));
end method;

// TODO: USE MANGLER FOR THIS
define method binding->c (binding :: <renamed-local-binding>, out)
  format(out, "%s", 
	 mangle-local-marked-name
	   (binding-name(binding), binding-index(binding)));
end method;

define method binding->c (binding :: <quotation-binding>, out)
  format(out, "lit_%s", binding-name(binding));
end method;

/// works for local-, global-, predefined- references but for free-references.

define method to-c (e :: <reference>, f, out)
  reference->c(reference-binding(e), out);
end method;

define generic reference->c (v :: <binding>, out);

define method reference->c (v :: <binding>, out)
  binding->c(v, out);
end method;

/// exercice: change this to produce a more user-friendly error message.

define method reference->c (v :: <global-binding>, out)
  format(out, "CHKREF");
  between-parentheses (out)
    binding->c(v, out)
  end between-parentheses;
end method;

define method to-c (e :: <free-reference>, f, out)
  format(out, "FREEREF");
  between-parentheses (out)
    format(out, "%d", reference-offset(e));
  end between-parentheses;
end method;

define method to-c (e :: <global-assignment>, f, out)
  between-parentheses (out)
    between-parentheses (out)
      binding->c(assignment-binding(e), out);
      format(out, " = ");
      to-c(assignment-form(e), f, out);
    end between-parentheses;
    if (instance?(e, <definition>))
    format(out, ", ");
    between-parentheses (out)
      format(out, "regsym(&");
      binding->c(assignment-binding(e), out);
      format(out, ",%=)", as(<string>, binding-name(assignment-binding(e))));
    end between-parentheses;
    end if;
  end between-parentheses;
end method; 

define method to-c (e :: <raw-constant>, f, out)
  format(out, "(P)%s", constant-value(e));
end method;

define method to-c (e :: <constant>, f, out)
  generate-quotation(out, constant-value(e));
end method;

define method to-c (e :: <bound?>, f, out)
  format(out, "BOUNDP");
  between-parentheses (out)
    binding->c(reference-binding(bound?-reference(e)), out)
  end between-parentheses;
end method;

define method to-c (e :: <box-read>, f, out)
  format(out, "BOXVAL");
  between-parentheses (out)
    to-c(box-reference(e), f, out);
  end between-parentheses;
end method;

define method to-c (e :: <box-write>, f, out)
  between-parentheses (out)
    format(out, "BOXVAL");
    between-parentheses (out)
      to-c(box-reference(e), f, out);
    end between-parentheses;
    format(out, "=");
    to-c(box-form(e), f, out);
  end between-parentheses;
end method;

define method to-c (e :: <box-creation>, f, out)
  to-c(box-reference(box-reference(e)), f, out);
  format(out, "= BOXFAB");
  between-parentheses (out)
    to-c(box-reference(box-reference(e)), f, out);
  end between-parentheses;
end method;

///  distinguer qqs  cas comme  eq?, ou pair?

define method to-c (e :: <alternative>, f, out)
  between-parentheses (out)
    boolean->c(alternative-condition(e), out);
    format(out, "\n    ? ");
    to-c(alternative-consequent(e), f, out);
    format(out, "\n    : ");
    to-c(alternative-alternant(e), f, out);
  end between-parentheses;
end method;

define generic boolean->c (e, out);

define method boolean->c (e, out)
  between-parentheses (out)
    to-c(e, #f, out);
    format(out, " != %s", false-name());
  end between-parentheses;
end method;
    
define method to-c (e :: <sequential>, f, out)
  between-parentheses (out)
    iterate loop (e = e, first? = #t)
      unless (empty-sequential?(e))
        unless (first?) format(out, ",\n  "); end;
        to-c(sequential-head(e), f, out);
        loop(sequential-tail(e), #f);
      end unless;
    end iterate;
  end between-parentheses;
end method;

/// define method to-c ((e constant) ...) does not exist any longer.

define method generate-self-recursive-call (e :: <application>, f, out)
  function-self-recursive?(f) := #t;
  between-parentheses (out)
    iterate loop (args = application-arguments(e), i = 1)
      unless (empty-argument-list?(args))
	format(out, "a%s=", i);
	to-c(arguments-head(args), f, out);
	format(out, ",");
	loop(arguments-tail(args), i + 1);
      end unless;
    end iterate;
    for (binding in function-bindings(f), i from 1)
      binding->c(binding, out);
      format(out, "=a%s,", i);
    end for;
    format(out, "PNUL");
  end between-parentheses;
end method;

define constant $number-call-templates = 3;

define method to-c (e :: <regular-application>, f, out)
  let function = application-function(e);
  if (application-tail?(e) 
	& instance?(f, <flat-function>)
	& ~function-nary?(f)
	& instance?(function, <free-reference>) 
	& reference-self?(function)) 
    generate-self-recursive-call(e, f, out);
  else
    let n = number-of(application-arguments(e));
    format(out, "%sCALL%s", 
	   if (application-known?(e)) "K" else "" end,
	   if (n > $number-call-templates) "N" else n end);
    between-parentheses (out)
      to-c(application-function(e), f, out);
      when (n > $number-call-templates) format(out, ",%s", n); end;
      to-c(application-arguments(e), f, out);
    end between-parentheses;
  end if;
end method;

define method to-c (e :: <argument-list>, f, out)
  unless (empty-argument-list?(e))
    format(out, ","); 
    to-c(arguments-head(e), f, out);
    to-c(arguments-tail(e), f, out);
  end unless;
end method;

define method to-c (e :: <fix-let>, f, out)
  between-parentheses (out)
    bindings->c(fix-let-bindings(e), fix-let-arguments(e), out);
    to-c(fix-let-body(e), f, out);
  end between-parentheses;
end method;

define method to-c (e :: <locals>, f, out)
  between-parentheses (out)
    bindings->c
      (locals-bindings(e), locals-functions(e), out, 
       to-c: funshell-to-c, check-type?: #f);
    do(rcurry(funinit-to-c, f, out), locals-bindings(e), locals-functions(e));
    to-c(locals-body(e), f, out);
  end between-parentheses;
end method;

define method to-c (e :: <bind-exit>, f, out)
  format(out, "with_exit");
  between-parentheses (out)
    to-c(bind-exit-main-fun(e), f, out);
  end between-parentheses;
end method;

define method to-c (e :: <unwind-protect>, f, out)
  format(out, "with_cleanup");
  between-parentheses (out)
    to-c(unwind-protect-protected-thunk(e), f, out);
    format(out, ", ");
    to-c(unwind-protect-cleanup-thunk(e), f, out);
  end between-parentheses;
end method;

define method to-c (e :: <monitor>, f, out)
  format(out, mangle-global-name("%with-monitor"));
  between-parentheses (out)
    to-c(monitor-handler(e), f, out);
    format(out, ", ");
    to-c(monitor-main-thunk(e), f, out);
  end between-parentheses;
end method;

define method to-c-ignore-binding (b, e, f, o)
  to-c(e, f, o)
end method;

define method bindings->c
    (bindings, e :: <argument-list>, out, 
     #key to-c = to-c-ignore-binding, check-type? = #t)
  iterate loop (bindings = bindings, e = e)
    if (empty-argument-list?(e))
      format(out, "");
    else
      let binding = head(bindings);
      binding->c(binding, out);
      format(out, "=");
      let type? = ~unconstrained-type?(binding-type(binding));
      if (check-type? & type?)
	format(out, "check_type");
	between-parentheses (out)
	  to-c(binding, arguments-head(e), #f, out);
	  format(out, ",");
	  to-c(binding, binding-type(binding), #f, out);
	end between-parentheses;
      else
	to-c(binding, arguments-head(e), #f, out);
      end if;
      format(out, ",");
      loop(tail(bindings), arguments-tail(e));
    end if;
  end iterate;
end method;

define method bindings->c
    (bindings, e :: <list>, out, 
     #key to-c = to-c-ignore-binding, check-type? = #t)
  iterate loop (bindings = bindings, e = e)
    if (empty?(e))
      format(out, "");
    else
      let binding = head(bindings);
      binding->c(binding, out);
      format(out, "=");
      let type? = ~unconstrained-type?(binding-type(binding));
      if (check-type? & type?)
	format(out, "check_type");
	between-parentheses (out)
	  to-c(binding, head(e), #f, out);
	  format(out, ",");
	  to-c(binding, binding-type(binding), #f, out);
	end between-parentheses;
      else
	to-c(binding, head(e), #f, out);
      end if;
      format(out, ",");
      loop(tail(bindings), tail(e));
    end if;
  end iterate;
end method;

define method to-c (e :: <predefined-application>, f, out)
  let binding = application-binding(e);
  if (application-tail?(e) 
	& instance?(f, <primitive-definition>)
	& binding == function-name(f))
    generate-self-recursive-call(e, f, out);
  else 
    let n = number-of(application-arguments(e));
    format(out, "(P)%s", mangle-global-name(binding-name(application-binding(e))));
    between-parentheses (out)
      predefined-arguments-to-c(application-arguments(e), out);
    end between-parentheses;
  end if;
end method;

define method predefined-arguments-to-c (e :: <argument-list>, out)
  iterate loop (e = e, first? = #t) 
    unless (empty-argument-list?(e))
      unless (first?) format(out, ","); end;
      format(out, "(P)");
      to-c(arguments-head(e), #f, out);
      loop(arguments-tail(e), #f);
    end unless;
  end iterate;
end method;

define method make-predefined-application-generator (cname)
  method (e, out)
    format(out, "%s", cname);
    between-parentheses (out)
      arguments->c(application-arguments(e), out)
    end between-parentheses;
  end method;
end method;

define method arguments->c (e :: <argument-list>, out)
  unless (empty-argument-list?(e))
    to-c(arguments-head(e), #f, out);
    to-c(arguments-tail(e), #f, out);
  end unless;
end method;

define method to-c (e :: <closure-creation>, f, out)
  let n = number-of(closure-creation-free(e));
  let f = *definitions*[closure-creation-index(e)];
  if (n == 0)
    generate-function-name(out, f);
    // format(out, "fun_%s", closure-creation-index(e));
  else
    format(out, "FUNFAB");
    between-parentheses (out)
      generate-function-name(out, f);
      format(out, ", %s", n);
      to-c(closure-creation-free(e), f, out);
    end between-parentheses;
  end if;
end method;

define method funshell-to-c (b :: <binding>, e :: <closure-creation>, f, out)
  let n = number-of(closure-creation-free(e));
  let f = *definitions*[closure-creation-index(e)];
  if (n == 0)
    generate-function-name(out, f);
    // format(out, "fun_%s", closure-creation-index(e));
  else
    format(out, "FUNSHELL");
    between-parentheses (out)
      format(out, "%=,", if (binding-dynamic-extent?(b)) 1 else 0 end);
      generate-function-name(out, f);
      format(out, ",%s", n);
    end between-parentheses;
  end if;
end method;

define method funinit-to-c (b :: <binding>, e :: <closure-creation>, f, out)
  let n = number-of(closure-creation-free(e));
  unless (n == 0)
    format(out, "FUNINIT");
    between-parentheses (out)
      binding->c(b, out);
      format(out, ", %s", n);
      to-c(closure-creation-free(e), #f, out); 
    end between-parentheses;
    format(out, ",\n  ");
  end unless;
end method;

define method ast-function-arity (e :: <ast-function>)
  let specs = function-bindings(e);
  if (function-nary?(e)) size(specs) - 1 else size(specs) end;
end method;

define method to-c (e :: <ast-generic>, f, out)
  format(out, "%s", mangle-global-name("%gen"));
  between-parentheses (out)
    format(out, "(P)YPgen_code((P)CHKREF(YPdispatch))"); // TODO: HACK!!!
    format(out, ",");
    generate-function-specs(out, e);
    format(out, ",");
    generate-quotation(out, function-nary?(e));
    format(out, ",");
    generate-quotation(out, ast-function-arity(e));
    format(out, ",");
    to-c(function-value(e), #f, out);
    format(out, ",");
    format(out, mangle-global-name("nil"));
    format(out, ",");
    format(out, mangle-global-name("%false"));
  end between-parentheses;
end method;

define method to-c (e :: <free-environment>, f, out)
  unless (empty-free-environment?(e))
    format(out, ",");
    to-c(free-environment-head(e), f, out);
    to-c(free-environment-tail(e), f, out);
  end unless;
end method;

///ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo
/// function definitions

define method generate-function-forwards (out, definitions)
  format(out, "\n/* FUNCTIONS: */\n");
  for (def in definitions)
    generate-function-forward(out, def);
  end for;
end method;

define method generate-function-forward (out, defn :: <primitive-definition>)
  format(out, "extern P %s (", mangle-global-name(binding-name(function-name(defn))));
  for (i from 0 below size(function-bindings(defn)), first? = #t then #f)
    unless (first?) format(out, ","); end;
    format(out, "P");
  end for;
  format(out, ");\n");
end method;

define method generate-function-name (out, defn)
  let name = function-name(defn);
  if (instance?(name, <global-binding>))
    format(out, "%s", mangle-global-name(binding-name(name)));
  else
    // format-out("UNNAMED %=\n", defn);
    if (name == #f)
      format(out, "fun_%s", function-index(defn));
    else
      let name 
        = if (instance?(name, <local-binding>)) binding-name(name) else name end;
      format(out, "fun_%s_%s", mangle-raw-name(name), function-index(defn));
    end if;
  end if;
end method;

define method generate-function-forward (out, defn)
  let bound? = instance?(function-name(defn), <global-binding>);
  format(out, if (bound?)  "FUNFOR(" else "LOCFOR(" end);
  generate-function-name(out, defn);
  format(out, ");\n");
end method;

define method generate-function-bodies (out, definitions)
  format(out, "\n/* FUNCTION CODES: */\n");
  do(method (def) 
       generate-function-code(out, def);
     end method,
     definitions);
end method;

define method generate-functions (out, definitions)
  do(method (def) 
       unless (instance?(def, <primitive-definition>))
         generate-closure-structure(out, def);
         // format(out, ", \n  ");
         format(out, "; \n  ");
       end unless;
     end method,
     reverse(definitions));
end method;

define method generate-closure-structure (out, definition)
  generate-function-name(out, definition);
  format(out, " = %s", mangle-global-name("%met"));
  between-parentheses (out)
    generate-function-body-reference(out, definition);
    format(out, ",");
    generate-function-specs(out, definition);
    format(out, ",");
    generate-quotation(out, function-nary?(definition));
    format(out, ",");
    generate-quotation(out, ast-function-arity(definition));
    format(out, ",");
    to-c(function-value(definition), #f, out);
    format(out, ",");
    format(out, "ENVNUL");
  end between-parentheses;
end method;

define method generate-function-body-reference (out, definition)
  format(out, "FUNCODEREF(");
  generate-function-name(out, definition);
  format(out, ")");
end method;

define method out-list-builder (f :: <function>, out, elts :: <list>)
  if (empty?(elts))
    format(out, "%s", mangle-global-name("nil"));
  else
    format(out, "%s", mangle-global-name("%pair"));
    between-parentheses (out)
      f(head(elts));
      format(out, ",");
      out-list-builder(f, out, tail(elts));
    end between-parentheses;
  end if;
end method;

define method generate-function-specs (out, definition)
  let types = map(binding-type, function-bindings(definition));
  let specs = if (function-nary?(definition)) 
		copy-sequence(types, end: size(types) - 1)
	      else
		types
	      end if;
  out-list-builder(rcurry(to-c, #f, out), out, specs);
end method;

define method generate-free-bindings (free :: <list>, out)
  format(out, "ENVFAB(%d", size(free));
  iterate loop (free = free)
    unless (empty?(free))
      format(out, ",");
      binding->c(head(free), out);
      loop(tail(free));
    end unless;
  end iterate;
  format(out, ")");
end method;

define method generate-free-bindings (free :: <free-environment>, out)
  format(out, "ENVFAB(%d", number-of(free));
  iterate loop (free = free)
    unless (empty-free-environment?(free))
      format(out, ",");
      binding->c(free-environment-head(free), out);
      loop(free-environment-tail(free));
    end unless;
  end iterate;
  format(out, ")");
end method;

// TODO: RIP THIS OUT AND USE REAL PARAMETERS
// MAKE CALL SMART AND RESTIFY IF NEC
// WOULD LIKE TO AVOID XEP APPROACH FIRST GO ROUND

define method generate-shadow-args (out, bindings)
  format(out, "  P res");
  for (b in bindings, i from 1)
    format(out, ", a%s", i);
  end for;
  format(out, ";\n");
  format(out, "loop:\n");
end method;

define method generate-actual-return (definition :: <primitive-definition>, out)
  format(out, "return res");
end method;

define method generate-actual-return (definition, out)
  if (unconstrained-type?(function-value(definition)))
    format(out, "QRET(res)");
  else
    format(out, "RET(res)");
  end if;
end method;

define method generate-return (definition, out)
  if (function-self-recursive?(definition))
    format(out, ";\nif (res == PNUL) goto loop; else ");
  else
    format(out, ";\n");
  end if;
  generate-actual-return(definition, out)
end method;

define method primitive-inlinable? (e :: <primitive-definition>)
  let binding = function-name(e);
  // TODO: ADD FUNCTION ADJECTIVES
  member?(binding-name(binding), 
	  #(#"%tag-bits", #"%tag", #"%untag", #"%traits-of",
	    #"%int", #"%ib", #"%iu", 
	    #"%chr", #"%cb", #"%cu", 
	    #"%loc", #"%lb", #"%lu",
	    #"@==", #"@@==", #"%empty?",
	    #"not", #"%head", #"%tail",
	    #"@=", #"@+", #"@<", 
	    #"%gen-cache-arg-pos", #"%gen-cache-singletons", #"%gen-cache-classes",
	    #"@empty?", #"@head", #"@tail",
	    #"%isa?", #"%object-parents",
	    #"slot-value-at", #"slot-value-at-setter", 
	    #"gen-lookup", #"gen-lookup-1-using"
	    ))
end method;

define method generate-function-code (out, e :: <primitive-definition>)
  format(out, "\n%sP ", if (primitive-inlinable?(e)) "INLINE " else "" end);
  binding->c(function-name(e), out);
  between-parentheses (out)
    for (binding in function-bindings(e), first? = #t then #f)
      unless (first?) format(out, ", "); end;
      format(out, "P ");
      binding->c(binding, out);
    end for;
  end between-parentheses;
  format(out, " {\n");
  let temps = function-temporaries(e);
  generate-local-temporaries(temps, out);
  generate-shadow-args(out, function-bindings(e));
  let main? = function-name(e) == #"---MAIN---";
  if (main?) format-out("MAIN\n"); end;
  body-to-c(function-body(e), main?, e, out);
  generate-return(e, out);
  format(out, ";\n}\n\n");
end method;

define method generate-function-code (out, definition)
  format(out, "\nFUNCODEDEF(");
  generate-function-name(out, definition);
  format(out, ") {\n");
  let bindings = function-bindings(definition);
  let offset   = 0;
  do(method (b)
       if (instance?(b, <binding>))
	 format(out, "  ARG(");
	 binding->c(b, out);
	 format(out, ", %=);\n", offset);
	 offset := offset + 1;
       end if;
     end method,
     reverse(bindings));
  let temps = function-temporaries(definition);
  generate-local-temporaries(temps, out);
  generate-shadow-args(out, bindings);
  body-to-c(function-body(definition), #f, definition, out);
  generate-return(definition, out);
  format(out, ";\n}\n\n");
end method;

define method generate-local-temporaries (temps, out)
  unless (empty?(temps))
    format(out, "  P ");
    binding->c(head(temps), out);
    format(out, ";\n");
    generate-local-temporaries(tail(temps), out);
  end unless;
end method;

///ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo
/// main procedure. we choose to print the result.

define method body-to-c (e, main?, f, out)
  format(out, "  res = ");
  to-c(e, f, out);
end method;

define method body-to-c (e :: <sequential>, main?, f, out)
  iterate loop (e = e, first? = #t)
    unless (empty-sequential?(e))
      let tail = sequential-tail(e);
      unless (first?) format(out, ";\n  "); end;
      let ready-for-return? = empty-sequential?(tail);
      if (ready-for-return? & ~main?) format(out, "res = "); end;
      if (main?)
        body-to-c(sequential-head(e), #f, f, out);
      else
        to-c(sequential-head(e), f, out);
      end if;
      loop(tail, #f);
    end unless;
  end iterate;
end method;

define method generate-main (out, form)
  format(out, "\n/* EXPRESSION: */\nint main(int argc, char* argv[]) {\n");
  format(out, "  %s(argc, argv);\n", mangle-global-name("%init-world"));
  // format(out, "  %s", mangle-global-name("print-out"));
  format(out, "  ");
  between-parentheses (out)
    to-c(form, #f, out);
  end between-parentheses;
  // format(out, ";\n  exit(0);");
  format(out, ";\n  return(0)");
  format(out, ";\n}\n");
end method;
