module: proto

define variable *tests* = #();

define method add-test (name)
  *tests* := remove-duplicates(concatenate(*tests*, list(name)));
end method;

define method rem-test (name)
  *tests* := remove(*tests*, name);
end method;

define macro test-group-definer
  { define disabled test-group ?:name ?tests:* end }
    => { rem-test(?#"name") }
  { define test-group ?:name ?tests:* end }
    => { add-test(?#"name");
	 define method run-tests (?=group-name == ?#"name")
	   ?tests
	 end method }
end macro;

define method do-test (group-name, doc, input, output)
  let res = str-eval(input);
  unless (as-uppercase(res) = as-uppercase(output))
    signal(concatenate
             (as(<string>, group-name), ": ", doc, 
              ": Expected: ", output, " Got: ", res));
  end unless;
end method;

define macro test
  { test(?arguments:*) }
    => { do-test(?=group-name, ?arguments) }
end macro;

define method run-all-tests () => (result :: <integer>);
  format-out("\n");
  let (warnings, errors) = values(0, 0);

  let handler <warning>     // <warning>'s return to signalling context
    = method(condition, next)
        format-out("Warning: %=. Continuing...\n", condition);
        warnings := warnings + 1;
      end method;

  let (elapsed-seconds, elapsed-microseconds)
    = timing ()
        for (tst in *tests*)
          block ()
            if (tst)
    	      format-out("Testing %S\n", as(<string>, tst));
    	      run-tests(tst);
    	    end if;
          exception (the-error :: <error>)  // <error>'s skip to next test
    	    format-out("  Error: %=.\n", the-error);
    	    errors := errors + 1;
    	  end block;
        end for;
     end timing;

  format-out("Tautology completed with %D warnings and %D fatal errors\n", 
	     warnings, errors);

  if (elapsed-seconds ~= 0 | elapsed-microseconds ~= 0)
    format-out("Tautology tests completed in %D.%S seconds\n",
               elapsed-seconds, 
	       integer-to-string(elapsed-microseconds, size: 6))
  end if;
  warnings + errors;
end method;

define test-group slf
  test("int", "1",    "1");
  test("#t",  "#t",   "#t");
  test("#f",  "#f",   "#f");
  test("SYM", "'a",   "a");
  test("LST", "'(a)", "(a)");
end test-group;

define constant $no-value-name = "#f";

define test-group var
  test("DEF X",  "(def x 1)", $no-value-name);
  test("VAR X",  "x",         "1");
  test("SET",    "(set x 2)", "2");
  test("VAR X!", "x",         "2");
end test-group;

// str-eval("(blk blo (mon (fun (c r) (r 5)) (mon (fun (c r) (if (= c 1) (r 2) (if (= c 2) (blo 3)))) (sig 4))))");

define test-group ifc
  test("#t",        "(if #t 1 2)", "1");
  test("#f",        "(if #f 1 2)", "2");
  test("#t No Alt", "(if #t 3)",   "3");
  test("#f No Alt", "(if #f 4)",   "#f");
end test-group;

define test-group fun
  test("Fix Creation",      "(fun (x) x)",                 "#{Method}");
  test("Fix Application",   "((fun (x) x) 2)",             "2");
  test("Opt Creation",      "(fun ((x ...)) x)",           "#{Method}");
  test("Opt Application",   "((fun ((x ...)) x) 1 2 3)",   "(1 2 3)");
  test("Opt 2 Creation",    "(fun (x (y ...)) y)",         "#{Method}");
  test("Opt 2 Application", "((fun (x (y ...)) y) 1 2 3)", "(2 3)");
end test-group;

define test-group beg
  test("Empty", "(seq)",     "#f");
  test("One",   "(seq 2)",   "2");
  test("Two",   "(seq 2 3)", "3");
end test-group;

define test-group lut
  test("One",     "(let ((a 1)) a)",       "1");
  test("Ordered", "(let ((a 2) (b a)) a)", "2");
end test-group;

define test-group app
  test("PRIM",     "(+ 1 2)",         "3");
  test("CLOSURE",  "((fun (x) x) 2)", "2");
end test-group;

define test-group itr
  test("Sum", "(itr sum ((s 0) (i 5)) (if (< i 0) s (sum (+ s 1) (- i 1))))",
	      "6");
end test-group;

define test-group loc
  test("F and G", "(loc ((f (x) (g x)) (g (y) y)) (f 1))", "1");
end test-group;

define test-group sif
  test("one elt yes",      "(sif ((x) '(x)) 1 2)",                "1");
  test("one elt no",       "(sif ((x) '(y)) 1 2)",                "2");
  test("two elt yes",      "(sif ((x y) '(x y)) 1 2)",            "1");
  test("two elt no",       "(sif ((x y) '(x x)) 1 2)",            "2");
  test("nest one elt yes", "(sif (((x)) '((x))) 1 2)",            "1");
  test("nest one elt no",  "(sif (((x)) '((y))) 1 2)",            "2");
  test("unquote",          "(sif ((,x) '(a)) x 2)",               "a");
  test("splicing",         "(sif ((,@x) '(a)) x 2)",              "(a)");
  test("unquote+splicing", "(sif ((,x ,@y) '(a b c)) y 2)",       "(b c)");
  test("nest unquote",     "(sif (((,x)) '((a))) x 2)",           "a");
end test-group;

define test-group bind-exit
  test("Simple",       "(blk ret (ret 1))",                   "1");
  test("Fall Through", "(blk ret 2)",                         "2");
  test("Parameter",    "(blk ret ((fun (x r) (r x)) 3 ret))", "3");
end test-group;

define test-group unwind-protect
end test-group;

define test-group isa 
  test("Single Parent", "(isa <Any>)",           "#{Object <Any>}");
  test("Multi Parents", "(isa (<Any>))",         "#{Object <Any>}");
  test("Pti",           "(def Pti (isa <Any>))", $no-value-name);
  test("Pti2",          "(def Pti2 (isa Pti))",  $no-value-name);
  test("A",             "(def A (isa <Any>))",   $no-value-name);
  test("B",             "(def B (isa <Any>))",   $no-value-name);
  test("C",             "(def C (isa A))",       $no-value-name);
  test("D",             "(def D (isa C))",       $no-value-name);
  test("E",             "(def E (isa C))",       $no-value-name);
  test("I",             "(def I (isa B))",       $no-value-name);
  test("J",             "(def J (isa (A B)))",   $no-value-name);
end test-group;

define test-group dis
  ugv("f");
  test("DF A", "(dm (f (x A)) 'a)",      $no-value-name);
  test("DF B", "(dm (f (x B)) 'b)",      $no-value-name);
  test("DF C", "(dm (f (x C)) 'c)",      $no-value-name);
  // test("DF D", "(def (f (x D)) 'd)",  $no-value-name);
  // test("DF E", "(def (f (x E)) 'e)",  $no-value-name);
  // test("DF F", "(def (f (x F)) 'f)",  $no-value-name);
  test("F A",  "(f A)",               "a");
  test("F B",  "(f B)",               "b");
  test("F C",  "(f C)",               "c");
  test("F D",  "(f D)",               "c");
  test("F E",  "(f E)",               "c");
  test("F I",  "(f I)",               "b");
  test("F J",  "(f J)",               "ambiguous");
end test-group;

define constant $null-name = "$nul";

define test-group slt
  ugv("x"); ugv("x-setter");
  ugv("y"); ugv("y-setter");
  ugv("Pt"); ugv("p");
  test("D Pt",   "(def Pt (isa <Any>))", $no-value-name);
  test("Pt's x", "(slot Pt x)",          $no-value-name);
  test("Get x",  "(x Pt)",               $null-name);
  test("Set x",  "(set (x Pt) Pt)",      "$pt");
  test("Get x",  "(x Pt)",               "$pt");
  test("Pt's y", "(slot Pt y Pt)",       $no-value-name);
  test("Get y",  "(y Pt)",               "$pt");
  test("A Pt",   "(def p (isa Pt))",     $no-value-name);
  test("Get px", "(x p)",                "$pt");
  test("Get py", "(y p)",                "$pt");
end test-group;

define test-group cnd
end test-group;

// DISPATCH
// FUNCTION REDEF
/*

define proto-test-group num (proto) 
  test("pos?",  "(pos? (as proto 1))",  "#t");
  test("pos?",  "(pos? (as proto 0))",  "#f");
  test("pos?",  "(pos? (as proto-1))",  "#f");
  test("neg?",  "(neg? (as proto 1))",  "#f");
  test("neg?",  "(neg? (as proto 0))",  "#f");
  test("neg?",  "(neg? (as proto-1))",  "#t");
  test("zero?", "(zero? (as proto 1))", "#f");
  test("zero?", "(zero? (as proto 0))", "#t");
  test("zero?", "(zero? (as proto-1))", "#f");
end proto-test-group;

define proto-test-group col (proto) 
  test("fab 0",     "(fab proto 0)");
  test("empty?",    "(empty? (fab proto 0))",  "#t");
  test("empty",     "(empty proto)");
  test("Empty len", "(= (len (fab proto 0)) 0)" "#t");
  test("fab 5",     "(fab proto 5)");
  test("empty",     "(alter (fabs proto 0 1) (fabs proto 1 2))", "(fabs proto 1 2)") ;
end proto-test-group;

*/
