module: proto

define method print-object (x :: <global-binding>, s :: <stream>) => ()
  format(s, "GB_%s", binding-name(x))
end method;

define method print-object (x :: <predefined-binding>, s :: <stream>) => ()
  format(s, "PB_%s", binding-name(x))
end method;

define method print-object (x :: <local-binding>, s :: <stream>) => ()
  format(s, "LB");
  when (binding-mutable?(x))
    format(s, "M");
  end when;
  when (binding-dotted?(x)) 
    format(s, "D");
  end when;
  format(s, "_%s", binding-name(x));
end method;

define method print-object (x :: <magic-binding>, s :: <stream>) => ()
  format(s, "MK_%s", binding-name(x))
end method;

define method print-object (x :: <local-reference>, s :: <stream>) => ()
  format(s, "LR^%s", reference-binding(x))
end method;

define method print-object (x :: <global-reference>, s :: <stream>) => ()
  format(s, "GR^%s", reference-binding(x))
end method;

define method print-object (x :: <predefined-reference>, s :: <stream>) => ()
  format(s, "PR_%s", reference-binding(x))
end method;

define method print-object (x :: <local-assignment>, s :: <stream>) => ()
  format(s, "(SET %= %=)", assignment-reference(x), assignment-form(x))
end method;

define method print-object (x :: <global-assignment>, s :: <stream>) => ()
  format(s, "(SET %= %=)", assignment-binding(x), assignment-form(x))
end method;

define method print-object (x :: <definition>, s :: <stream>) => ()
  format(s, "(DEF %= %=)", assignment-binding(x), assignment-form(x))
end method;

define method print-object (x :: <ast-function>, s :: <stream>) => ()
  format(s, "(%s ", function-kind(x));
  print-list(function-bindings(x), s);
  format(s, " %=)", function-body(x));
end method;

define method print-object (x :: <alternative>, s :: <stream>) => ()
  format(s, "(IF %= %= %=)", 
	 alternative-condition(x), 
	 alternative-consequent(x), 
	 alternative-alternant(x))
end method;

define method print-object-list 
    (x, s :: <stream>, prefix :: <string>, suffix :: <string>, do-first?,
     empty? :: <function>, head :: <function>, tail :: <function>,
     #key print = print-object) => ()
  format(s, prefix);
  iterate loop (x = x, first? = #t)
    unless (empty?(x))
      if (~do-first? | ~first?) format(s, " "); end;
      print(head(x), s);
      loop(tail(x), #f);
    end unless;
  end iterate;
  format(s, suffix);
end method;

define method print-object (x :: <sequential>, s :: <stream>) => ()
  print-object-list
    (x, s, "(SEQ", ")", #f, empty-sequential?,
     sequential-head, sequential-tail);
end method;

define method print-object (x :: <constant>, s :: <stream>) => ()
  format(s, "C(%=)", constant-value(x));
end method;

define method print-object (x :: <regular-application>, s :: <stream>) => ()
  format(s, "(%=%=)", application-function(x), application-arguments(x));
end method;

define method print-object (x :: <predefined-application>, s :: <stream>) => ()
  format(s, "(%=%=)", application-binding(x), application-arguments(x));
end method;

define method print-object (x :: <fix-let>, s :: <stream>) => ()
  format(s, "(LET ");
  print-list
    (map(list, fix-let-bindings(x), as(<list>, fix-let-arguments(x))),
     s, print: print-list);
  format(s, " %s)", fix-let-body(x));
end method;

define method print-object (x :: <argument-list>, s :: <stream>) => ()
  print-object-list
    (x, s, "", "", #f, empty-argument-list?, arguments-head, arguments-tail);
end method;

define method print-list 
    (x :: <list>, s :: <stream>, #key print = print-object) => ()
  print-object-list
    (x, s, "(", ")", #t, empty?, head, tail, print: print);
end method;

define method print-object (x :: <locals>, s :: <stream>) => ()
  format(s, "(LOC ");
  print-list
    (map(list, locals-bindings(x), locals-functions(x)), s, print: print-list);
  format(s, " %=)", locals-body(x));
end method;

define method print-object (x :: <bind-exit>, s :: <stream>) => ()
  format(s, "(BLK %=)", bind-exit-main-fun(x));
end method;

define method print-object (x :: <unwind-protect>, s :: <stream>) => ()
  format(s, "(UNWIND-PROTECT %= %=)", 
	 unwind-protect-protected-thunk(x), unwind-protect-cleanup-thunk(x));
end method;

define method print-object (x :: <monitor>, s :: <stream>) => ()
  format(s, "(MON %= %=)", monitor-handler(x), monitor-main-thunk(x));
end method;

define method print-object (x :: <static-environment>, s :: <stream>) => ()
  format(s, "(ENV LOCS: (");
  iterate loc-loop (x = x, first? = #t)
    if (instance?(x, <static-global-environment>))
      format(s, ") GLOS: (");
      iterate glo-loop (x = environment-next(x), first? = #t)
        if (x == #f | instance?(x, <static-empty-environment>))
          format(s, "))");
        else
          unless (first?) format(s, " ") end;
          format(s, "%=", environment-binding(x));
          glo-loop(environment-next(x), #f);
        end if;
      end iterate;
    else
      unless (first?) format(s, " ") end;
      format(s, "%=", environment-binding(x));
      loc-loop(environment-next(x), #f);
    end if;
  end iterate;
end method;

