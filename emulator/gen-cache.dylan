module: proto

define class <gen-cache> (<object>)
  slot gen-cache-singletons :: <list> = #();
  slot gen-cache-classes :: <list> = #();
end class;

define function check-cache (gen, cache, i, n)
  if (instance?(cache, <proto-method>) & i < n)
    break("BROKEN MISS G=%= I=%= N=%= C=%=\n", gen, i, n, cache);
  end if;
end function;

define function gen-lookup-1-using
    (key, assocs :: <list>, missable?, gen :: <proto-generic>, cache,
     i :: <integer>, n :: <integer>, args :: <arguments>)
  iterate loop (assocs = assocs)
    if (empty?(assocs)) // miss
      if (missable?)
        #f
      else 
        format-out("MISSED I=%=\n", i);
        proto-function-cache(gen) := gen-lookup-miss(gen, args);
        check-cache(gen, proto-function-cache(gen), 0, n);
        gen-lookup(gen, args);
      end if;
    else
      let k = head(assocs);
      let v = head(tail(assocs));
      if (k == key)
        // format-out("FOUND I=%= %= %= => %=\n", i, key, v);
        gen-lookup-1(gen, v, i + 1, n, args)
      else
        loop(tail(tail(assocs)))
      end if;
    end if;
  end iterate;
end function;

define function gen-lookup-1
    (gen :: <proto-generic>, cache,
     i :: <integer>, n :: <integer>, args :: <arguments>)
  if (cache)
    if (i = n)
      proto-apply-method(gen, cache, args);
    else 
      let arg = args[i];
      // format-out("LOOKING I=%= UP ON A=%= %=\n", i, arg);
      gen-lookup-1-using
        (arg, gen-cache-singletons(cache), #t, gen, cache, i, n, args)
        | gen-lookup-1-using
            (proto-traits(arg), gen-cache-classes(cache), 
             #f, gen, cache, i, n, args);
    end if;
  else
    format-out("MISSED I=%=\n", i);
    proto-function-cache(gen) := gen-lookup-miss(gen, args);
    check-cache(gen, proto-function-cache(gen), 0, n);
    gen-lookup(gen, args);
  end if;
end function;

define function gen-lookup-miss-1-using
    (key, all-assocs :: <function>, all-assocs-setter :: <function>, 
     gen :: <proto-generic>, cache, met :: <proto-method>,
     i :: <integer>, n :: <integer>, 
     args :: <arguments>, specs :: <arguments>)
  let cache = cache | make(<gen-cache>);
  iterate loop (assocs = all-assocs(cache))
    if (empty?(assocs)) // miss
      format-out("MISSED ON MISS I=%=\n", i);
      let val = gen-lookup-miss-1(gen, #f, met, i + 1, n, args, specs);
      check-cache(gen, val, i + 1, n);
      all-assocs(cache) := pair(key, pair(val, all-assocs(cache)));
    else
      let k = head(assocs);
      let v = head(tail(assocs));
      if (k == key)
	format-out("FOUND I=%= %= => %= ON MISS\n", i, key, v);
        gen-lookup-miss-1(gen, v, met, i + 1, n, args, specs);
      else
        loop(tail(tail(assocs)))
      end if;
    end if;
  end iterate;
  cache
end function;

define function singleton-spec? (x :: <proto>)
  traits-owner(proto-traits(x)) ~== x
end function;

define function gen-lookup-miss-1
    (gen :: <proto-generic>, cache, met :: <proto-method>,
     i :: <integer>, n :: <integer>, 
     args :: <arguments>, specs :: <arguments>)
  if (i = n)
    met
  else
    let spec = specs[i];
    format-out("MISSING I=%= ON %= SING? %=\n", i, spec, singleton-spec?(spec));
    if (singleton-spec?(spec))
      gen-lookup-miss-1-using
        (spec, gen-cache-singletons, gen-cache-singletons-setter,
         gen, cache, met, i, n, args, specs)
    else
      gen-lookup-miss-1-using
        (proto-traits(args[i]), gen-cache-classes, gen-cache-classes-setter,
         gen, cache, met, i, n, args, specs)
    end if;
  end if;
end function;

define function choose-method (gen :: <proto-generic>, args :: <arguments>)
  let (sorted-methods, ambig-methods) 
    = proto-compute-sorted-applicable-methods(gen, args);
  if (size(ambig-methods) > 0)
    error("Ambiguous Method Error when calling %= on %=", gen, args);
  elseif (size(sorted-methods) = 0)
    format-out("No Applicable Methods Error %= on %=\n", gen, args);
    error("No Applicable Methods Error when calling %= on %=", gen, args);
  else
    first(sorted-methods)
  end if;
end function;

define function gen-lookup-miss
    (gen :: <proto-generic>, args :: <arguments>)
  let met   = choose-method(gen, args);
  let specs = proto-function-specializers(met);
  format-out("GEN-CACHE MISS ON %= %=\n", gen, specs);
  let n   = proto-function-number-required(gen);  
  gen-lookup-miss-1
    (gen, proto-function-cache(gen), met, 0, n, args, specs);
end function;

define function gen-lookup
    (gen :: <proto-generic>, args :: <arguments>)
  // format-out("GEN-CACHE LOOKUP ON %= %=\n", gen, args);
  // TODO: ensure-function-cache();
  let n = proto-function-number-required(gen);  
  let c = proto-function-cache(gen);
  if (instance?(c, <proto>))
    proto-function-cache(gen) := #f;
  end if;
  gen-lookup-1(gen, proto-function-cache(gen), 0, n, args)
end function;
