module: proto

/// IMPORT/EXPORT 

define method %export (env, x) => (res)
  x
end method;
define variable *importers-by-object* = make(<table>);
define variable *importers-by-owner*  = make(<table>);
define method %register-importer-by-owner (owner, importer)
  *importers-by-owner*[owner] := importer;
end method;
define method %register-importer (object, importer)
  *importers-by-object*[object] := importer;
end method;

define method %import (env, x) => (res)
  x
end method;

define method %import (env :: <environment>, x :: <proto>) => (res)
  let importer
    = element(*importers-by-object*, x, default: #f)
        | element(*importers-by-owner*, 
                  traits-owner(proto-traits(x)), default: #f);
  if (importer)
    importer(env, x)
  else
    x
  end if;
end method;

/// BOOTING RIGGINGS

define variable *booted?*            = #f;
// define variable *symbol-booted?*     = #f;
define variable *booted-slots*       = #();
define variable *booted-accessors*   = #();
define variable *booted-bindings*    = #();

define function %register-booted-slot (slot)
  *booted-slots* := add(*booted-slots*, slot);
end function;

define function %register-booted-accessor (accessor)
  *booted-accessors* := add(*booted-accessors*, accessor);
end function;

define function %register-booted-binding (name, value)
  gv(name) := value;
  *booted-bindings* := add(*booted-bindings*, pair(name, value));
end function;

define macro %ct-name
  { %ct-name(?:name) }
    => { "*" ## ?name ## "*" }
end macro;

/// ENVIRONMENT SUPPORT

define variable *the-global-environment* = $the-empty-environment;

define function env () => (res :: <environment>)
  *the-global-environment*
end function;

define function env-setter (z :: <environment>) => (res :: <environment>)
  *the-global-environment* := z;
end function;

define method %build-env (bindings :: <list>)
  env() := env-extend!($the-empty-environment, 
		       map(head, bindings), map(tail, bindings), kind: #"global");
end method;

%build-env(list(pair(#"nul", *nul*)));

define method gv (x) => (res)
  env-binding-value(env(), as(<symbol>, x));
end method;

define method gbv (x) => (res)
  env-binding-value(boot-env(), as(<symbol>, x));
end method;

define method gv-setter (z, x) => (res)
  env-define-binding!(env(), as(<symbol>, x), z)
  // env-binding-value!(env(), as(<symbol>, x), unbound: always(#f)) := z;
end method;

define method ugv (x) => (res)
  gv(x) := #f;
end method;

define method gpns (x) => (res)
  map(rcurry(gn-only, env()), proto-parents(x))
end method;

define method gn-only (x, env) => (res)
  let name = env-binding-name(env, x);
  if (instance?(name, <symbol>))
    name
  else
    x
  end if;
end method;

define method gbn (x) => (res)
  if (instance?(x, <&proto>))
    let name = gn-only(x, boot-env());
    if (instance?(name, <symbol>))
      name
    else
      x
    end if
  else
    x
  end if;
end method;

define method gn (x) => (res)
  if (proto?(x))
    let name = gn-only(x, env());
    if (instance?(name, <symbol>))
      name
    else
      gpns(x)
    end if
  else
    x
  end if;
end method;

define variable *base-env* = env();

define method snapshot-base-environment ()
  *base-env* := env();
  env()      := env-extend!(env(), #(), #(), kind: #"global");
end method;

define method restore-base-environment ()
  env() := *base-env*;
  snapshot-base-environment();
end method;

/// CT/RT DEFINITION SUPPORT

define macro %%binding-definer
  { define %%binding (?:name, ?ct-name:name) = ?:expression }
    => { define constant ?ct-name = ?expression;
         %register-booted-binding(?#"name", ?ct-name) }
  { define %%binding ?:name = ?:expression }
    => { %register-booted-binding(?#"name", ?expression) }
end macro;

define macro %binding-definer
  { define %binding (?:name, ?ct-name:name) = ?:expression }
    => { define %%binding (?name, ?ct-name) = ?expression }
  { define %binding (?:name) = ?:expression }
    => { define %%binding ?name  = ?expression }
  { define %binding ?:name = ?:expression }
    => { define %%binding (?name, ?name) = ?expression }
end macro;

define macro %function-definer
  { define %function (?:name, ?ct-name:name) ?rest:* end }
    => { define function ?ct-name ?rest end;
         %register-booted-binding(?#"name", ?ct-name) }
  { define %function ?:name ?rest:* end }
    => { define function ?name ?rest end;
         %register-booted-binding(?#"name", ?name) }
end macro;

/// SYMBOL BOOT SUPPORT

define constant %symbols = make(<equal-table>);
define method %%%sym (x :: <string>) => (res)
  %%clone(%ct-name(<Sym>), x)
end method;
define method %%sym (x :: <string>) => (res)
  element(%symbols, x, default: #f)
    | (element(%symbols, x) := %%%sym(x));
end method;
define method %%sym (x :: <symbol>) => (res)
  %%sym(as(<string>, x))
end method;
define method %%sym (x :: <proto>) => (res)
  %%sym(%import(env(), x))
end method;
define %binding (%%sym) = %%sym;
define %binding (fab-sym) = %%sym;
define method as (c == <string>, x :: <proto>) => (res :: <string>)
  if (proto-instance?(x, %ct-name(<Sym>)))
    as(<string>, %sym-dat(x))
  else
    next-method();
  end if;
end method;

// TODO: PATCH Sym's %sym-dat slot type to be Str

define function %patch-symbols ()
  // TODO: PATCH SYMBOL VALUES TO BE 
  // do(proto-eval, *booted-symbols*);
end function;

define %function %sym-keys () => (res)
  let keys = %vfab(size(%symbols));
  for (i :: <integer> from 0, val keyed-by key in %symbols)
    %velt(keys, i) := key;
  end for;
  keys
end %function;
define %function %sym-vals () => (res)
  let vals = %vfab(size(%symbols));
  for (i :: <integer> from 0, val keyed-by key in %symbols)
    %velt(vals, i) := val;
  end for;
  vals
end %function;

/// LOW LEVEL OBJECT SUPPORT FOR BOOTSTRAP

define method %%slot-value (x :: <proto>, i :: <integer>) => (res)
  element(proto-values(x), i);
end method;

define method %%slot-value-setter (z, x :: <proto>, i :: <integer>)
  element(proto-values(x), i) := z;
end method;

define function %%clone (p :: <proto>, #rest vals) => (res :: <proto>)
  let vs = make-proto-values(max(size(proto-slots(p)), size(vals)));
  let x  = make(<proto>, traits: proto-traits(p), values: vs);
  for (i :: <integer> from 0, v in vals)
    vs[i] := v;
  end for;
  x
end function;

define function %%isa(superclass) => (obj)
  let superclasses
    = if (superclass == #"boot")
        #()
      else
        list(gv(superclass))
      end if;
  %isa(superclasses, #(), #());
end function;

define function %%slot(owner, name, type, init) => ()
  let slot = %slot(owner, name, type, init);
  %register-booted-slot(slot);
end function;

define macro %slot-definer
  { define %slot ?:name ?ct-name:name ?owner:name 
         ?offset:expression ?type:name ?init:expression }
    => { %%slot(%ct-name(?owner), %%sym(?"name"), %ct-name(?type), always(?init));
	 define function ?ct-name (x) => (z)
           %%slot-value(x, ?offset)
	 end function;
         %register-booted-accessor(sexpr-make-getter(?#"name", ?#"owner"));
	 define function ?ct-name ## "-setter" (z, x)
           %%slot-value(x, ?offset) := z;
	 end function;
         %register-booted-accessor(sexpr-make-setter(?#"name", ?#"owner", ?#"type")) }
end macro;

define macro %slots-definer
  { define %slots ?owner:name (?offset:expression) end }
    => { }
  { define %slots ?owner:name (?offset:expression) 
      slot (?:name, ?ct-name:name) :: ?type:name = ?init:expression; ?rest:*
    end }
    => { define %slot ?name ?ct-name ?owner ?offset ?type ?init;
         define %slots ?owner (?offset + 1) ?rest end }
  { define %slots ?owner:name (?offset:expression)  
      slot ?:name :: ?type:name = ?init:expression; ?rest:*
    end }
    => { define %slot ?name ?name ?owner ?offset ?type ?init; 
         define %slots ?owner (?offset + 1) ?rest end }
end macro;

define macro %proto-slots-definer
  { define %proto-slots (?owner:name) ?slots:* end }
    => { define %slots ?owner (0) ?slots end }
end macro;

define macro %%proto-definer
  { define %%proto (?:name, ?ct-name:name) (?superclass:name) ?slots:* end }
    => { define %binding (?name, ?ct-name) = %%isa(?#"superclass");
	 define %slots ?name (0) ?slots end
         // define %proto-cloner ?name (0) ?slots end 
         }
end macro;

define macro %proto-definer
  { define %proto (?:name, ?ct-name:name) () ?slots:* end }
    => { define %%proto (?name, ?ct-name) (boot) ?slots end }
  { define %proto (?:name, ?ct-name:name) (?superclass:name) ?slots:* end }
    => { define %%proto (?name, ?ct-name) (?superclass) ?slots end }
  { define %proto ?:name (?superclass:name) ?slots:* end }
    => { define %%proto (?name, "*" ## ?name ## "*") (?superclass) ?slots end }
end macro;

define %binding (%slot-value, %fv)               = %slot-value;
define %binding (%slot-value-setter, %fv-setter) = %slot-value-setter;

define %binding (slot-value)        = %slot-value;
define %binding (slot-value-setter) = %slot-value-setter;

define %proto (<Any>, *top*) () end;
define constant *<any>* = *top*;

define %proto <Sym> (<Any>) end;

define %proto-slots (<Sym>)
  slot %sym-dat :: <Any> = "";
end %proto-slots; 

// define %proto Nul (<Any>) end; // BOOTED IN OBJECTS
proto-traits(%ct-name(Nul)) := proto-traits(%ct-name(<Any>));

define %proto <Log>  (<Any>) end;
define %proto %true  (<Log>) end;
define %proto %false (<Log>) end;

define %proto <Num> (<Any>) end;
define %proto <Int> (<Num>) 
  slot %int-val :: <Any> = 0;
end %proto;

define %proto <Flo> (<Num>) 
  slot %flo-val :: <Any> = 0.0;
end %proto;

define %proto <Chr> (<Num>) 
  slot %chr-val :: <Any> = 'a';
end %proto;

define %proto <loc> (<any>) 
  slot %loc-val :: <Any> = #f;
end %proto;

define %proto <Col> (<Any>) end;
define %proto <Seq> (<Col>) end;
define %proto <Lst> (<Seq>)
  slot (head, %head) :: <Any> = %ct-name(Nul);
  slot (tail, %tail) :: <Lst> = %ct-name(Nul);
end %proto;
define %proto Nil (<Lst>) end; 
%head(%ct-name(<Lst>)) := %ct-name(Nil);
%tail(%ct-name(<Lst>)) := %ct-name(Nil);
%head(%ct-name(nil))   := %ct-name(Nil);
%tail(%ct-name(nil))   := %ct-name(Nil);

define macro %repeated-proto-definer
  { define %repeated-proto ?:name
      (?dat:name, ?elt:name, ?exp:name, ?raw?:expression, ?code:name)
     = ?init:expression }
    => { define %binding "%" ## ?code ## "emp"
            = %%clone(%ct-name(?name), make(?dat));
         define %function "%" ## ?code ## "fab" (size :: <integer>) => (res)
	   if (size == 0)
	     "%" ## ?code ## "emp"
           else
	     %%clone(%ct-name(?name), make(?dat, size: size, fill: ?init))
	   end if;
	 end %function;
         define %function "%" ## ?code ## "len" (x) => (res :: <integer>)
           size(%%slot-value(x, 0))
	 end %function;
         define %function "%" ## ?code ## "elt" 
             (x, i :: <integer>) => (res :: ?elt)
           as(?elt, %%slot-value(x, 0)[i])
	 end %function;
         define %function "%" ## ?code ## "elt-setter"
             (z :: ?elt, x, i :: <integer>)
           %%slot-value(x, 0)[i] := as(?exp, z);
	 end %function }
end macro;

define %proto <Flat> (<Seq>) end; 

define %proto <Vec> (<Flat>) 
  slot %vec-dat :: <Any> = #[];
end %proto; 

define %repeated-proto <Vec>
  (<simple-object-vector>, <object>, <object>, #f, v) = *Nul*;

define %proto <Str> (<Flat>) 
  slot %str-dat :: <Any> = "";
end %proto; 

define %repeated-proto <Str>
  (<byte-string>, <integer>, <byte-character>, #t, s) = ' ';

define %proto <Fun> (<Any>)
  slot (fun-specializers, proto-function-specializers) :: <Lst> = #();
  slot (fun-optionals?, proto-function-optionals?)     :: <Log> = #f;
end %proto;

define %proto <Met> (<Fun>)
end %proto;

define %slots <Met> (2) // TODO: BOOT SUCKS
  slot (fun-parameters, proto-function-parameters)     :: <Lst> = #();
  slot (fun-body, proto-function-body)                 :: <Any> = #f;
  slot (fun-environment, proto-function-environment)   :: <Any> = #f;
end %slots;

define %proto <Gen> (<Fun>)
end %proto;

define %slots <Gen> (2) // TODO: BOOT SUCKS
  slot (fun-methods, proto-function-methods) :: <Lst> = #();
  slot (fun-cache, proto-function-cache) :: <any>     = #f;
end %slots;

/// DEFINE IMPORT EXPORT FUNCTIONS

define method %export (env :: <environment>, x :: <boolean>) => (res)
  if (x) 
    env-binding-value(env, #"%true")
  else
    env-binding-value(env, #"%false")
  end if
end method;

%register-importer(%ct-name(%true),  always(#t));

%register-importer(%ct-name(%false), always(#f));

define method %export (env :: <environment>, x :: <empty-list>) 
  env-binding-value(env, #"nil");
end method;

define %binding (%pair) = method (x, y) %%clone(%ct-name(<Lst>), x, y) end;

define method %export (env :: <environment>, x :: <list>) 
  invoke-primitive(env, #"%pair", %export(env, head(x)), %export(env, tail(x)))
end method;

%register-importer(%ct-name(Nil), always(#()));

%register-importer-by-owner
  (%ct-name(<Lst>), 
   method (env, x)
     pair(%import(env, %head(x)), %import(env, %tail(x)))
   end method);

define %function %shallow-import-list (x)
  if (x == *nil*)
    #()
  else
    pair(%head(x), %shallow-import-list(%tail(x)))
  end if
end %function;

%register-importer-by-owner
   (%ct-name(<Sym>), method (env, x) as(<symbol>, %sym-dat(x)) end);

define macro %repeated-proto-import/export-definer
  { define %repeated-proto-import/export ?:name (?dat:name, ?code:name, ?raw?:expression) }
    => { define %binding ("%" ## ?code ## "b") = method (x) %%clone(%ct-name(?name), x) end;
         define method %export (env :: <environment>, x :: ?dat) => (res)
	   invoke-primitive
             (env, "%" ## ?#"code" ## "b", if (?raw?) x else map(curry(%export, env), x) end);
	 end method;
         define %binding ("%" ## ?code ## "u") = method (x) %%slot-value(x, 0) end;
         %register-importer-by-owner
           (%ct-name(?name), 
            method (env, x) 
              map(curry(%import, env), invoke-primitive(env, "%" ## ?#"code" ## "u", x)) 
            end method) }
end macro;

define %repeated-proto-import/export <Vec> (<simple-object-vector>, v, #f);

define %repeated-proto-import/export <Str> (<byte-string>,          s, #t);

define %function %import-opts (args :: <proto>)
  iterate imp (res = #(), args = args)
    if (args == %ct-name(Nil))
      reverse!(res)
    else
      imp(pair(%head(args), res), %tail(args))
    end if;
  end iterate;
end %function;

define method %export (env :: <environment>, x :: <symbol>) 
  invoke-primitive(env, #"%%sym", as(<string>, x))
end method;

define macro %boxing-definer
  { define %boxing "<" ## ?box:name ## ">" 
      (?raw:name, ?export:name, ?char:name) }
    => { define %binding "%" ## ?char ## "b" 
           = method (x :: ?raw) => (res)
	       %%clone(%ct-name("<" ## ?box ## ">"), x) 
	     end method;
         define %binding "%" ## ?char ## "u" 
           = method (x) => (res) "%" ## ?box ## "-val"(x) end;
         define method %export (env :: <environment>, x :: ?export) => (res) 
           invoke-primitive(env, "%" ## ?#"char" ## "b", as(?raw, x))
	 end method;
         %register-importer-by-owner
           (%ct-name("<" ## ?box ## ">"), 
	    method (env, x)
	      as(?export, invoke-primitive(env, "%" ## ?#"char" ## "u", x))
	    end method); }
end macro;

define %boxing <Int> (<integer>, <integer>, i);
define %boxing <Flo> (<single-float>, <single-float>, f);
define %boxing <Chr> (<integer>, <byte-character>, c);

define %binding %lb = method (x) %%clone(*<loc>*, x) end;
define %binding %lu = method (x) %loc-val(x) end;

define %binding (isa?)
  = method (x, y) %export(env(), proto-instance?(x, y)) end;
define %binding (%isa)                 = %isa;
define %binding (%slot)                = %slot;
define generic proto-instance? (x, y) => (well?);
define %binding (%import)              = method (x) %import(env(), x) end;
define %binding (%export)              = method (x) %export(env(), x) end;
define %binding (%object-parents)       = proto-parents;

/// PRIMITIVES

define constant $boot-top = *booted-bindings*;

define constant $export-eof-object = %%clone(*<chr>*, 999);

define %binding %eq? = \==;
define %binding %bb   = method (x) if (x) *%true* else *%false* end end;
define %binding %i=   = \=;
define %binding %i<   = \<;
define %binding %i+   = \+;
define %binding %i-   = \-;
define %binding %i*   = \*;
define %binding %im   = modulo;
define %binding %ir   = remainder;
define %binding %it/  = truncate/;
define %binding %iv   = logior;
define %binding %i^   = logxor;
define %binding %i&   = logand;
define %binding %i!   = lognot;
define %binding %i?   = logbit?;
define %binding %i<<  = ash;
define %binding %i>>  = method (x, a) ash(x, -a) end;
define %binding %i<<< = lsh;
define %binding %i>>> = method (x, a) lsh(x, -a) end;
define %binding %fi2f = curry(as, <single-float>);
define %binding %f=  = \=;
define %binding %f<  = \<;
define %binding %f+  = \+;
define %binding %f*  = \*;
define %binding %f-  = \-;
define %binding %f/  = \/;
define %binding %ft  = truncate;
define %binding %ft/ = truncate/;
define %binding %ff  = floor;
define %binding %fc  = ceiling;
define %binding %c= = \=;
define %binding %c< = \<;
define %binding %raw-alloc  = #f;
define %binding %elt        = #f;
define %binding %elt-setter = #f;
define %binding %app-filename = #f;
define %binding %app-args     = #f;
define %binding (%flo-bits)            = rcurry(as, <integer>); // TODO: NYI
define %binding (%break)               = break;
define %binding (%invoke-debugger)     = break;
define %binding (%current-output-port) = current-output-port;
define %binding (%current-input-port)  = current-input-port;
define %binding (%open-input-file)     = open-input-port;
define %binding (%open-output-file)    = open-output-port;
define %binding (%close-output-port)   = close-output-port;
define %binding (%close-input-port)    = close-input-port;
define %binding (%write-char)          
  = method (x, p) write-char(as(<character>, x), p) end;
define %binding (%write-string)        = write-string;
define %binding (%read-char)           = read-char;
define %binding (%force-output)        = force-output;
define %binding (%newline)             = newline;
define %binding (%eof-object?)         = eof-object?;
define %binding (%eof-object)          = always($export-eof-object);
define %binding (%peek-char)           = peek-char;
define %binding (%char-ready?)         = stream-input-available?;
define %binding (%do-runtime-bindings)
  = method (fun)
      local method doit (name, value)
	      proto-apply(fun, list(%export(env(), name), %lb(name)))
	    end method;
      env-do-global-bindings(env(), doit);
    end method;
define %binding (%locative-value)      
  = method (loc)
      env-binding-value(env(), %lu(loc))
    end method;
define %binding (%locative-value-setter) 
  = method (z, loc)
      env-binding-value(env(), %lu(loc)) := z;
    end method;
      
define %binding (%binding-name)        
  = method (x) 
      %export(env(), env-binding-name(env(), x, unbound: method (y) #f end))
    end method;
define %function %sym (x) => (res)
  %%sym(%str-dat(x))
end %function;

/// OBJECT SYSTEM PRIMITIVES

define variable *fun-reg* = #f;
define %function %fun-reg () *fun-reg* end;
define function %fun-reg-setter (fun) *fun-reg* := fun; end;

define constant <&proto-values> = <simple-object-vector>;

define class <&proto> (<object>)
  slot %proto-traits :: <&proto>,
    init-keyword: traits:;
  slot %proto-values :: <&proto-values> = #[],
    init-keyword: values:;
end class;

define %binding (%object-traits)        = %proto-traits;
define %binding (%object-traits-setter) = %proto-traits-setter;
define %binding (%object-values)        = %proto-values;
define %binding (%object-values-setter) = %proto-values-setter;

define %function %make-object ()
  make(<&proto>)
end %function;

define %function %slot-elt (x :: <&proto>, i :: <integer>) => (res)
  %proto-values(x)[i]
end %function;

define %function %slot-elt-setter (z, x :: <&proto>, i :: <integer>)
  %proto-values(x)[i] := z
end %function;

define %function %make-object-values (size :: <integer>) => (res :: <&proto-values>)
  make(<&proto-values>, size: size)
end %function;

define %function %install-object-values (dst :: <&proto>, size :: <integer>) => ()
  %proto-values(dst) := %make-object-values(size);
end %function;

define %function %adjust-object-values-size
    (dst :: <&proto>, new-size :: <integer>, src :: <&proto>) => ()
  let old-values = %proto-values(src);
  let new-values = %make-object-values(new-size);
  %proto-values(dst) := new-values;
  iterate loop (i :: <integer> = 0)
    when (i < size(old-values))
      new-values[i] := old-values[i];
      loop(i + 1);
    end when;
  end iterate;
end %function;

define %binding (%%slen)
  = size;
define %binding (%%selt)
  = method (x, i) as(<integer>, element(x, i)) end;
define %binding (%%selt-setter)
  = method (z, x, i) element(x, i) := as(<byte-character>, z) end;
define %binding (%%sfab)
  = method (size, fill) make(<byte-string>, size: size, fill: fill) end;

define %binding (%%vlen)        = size;
define %binding (%%velt)        = element;
define %binding (%%velt-setter) = element-setter;
define %binding (%%vfab)
  = method (size, fill) make(<simple-object-vector>, size: size, fill: fill) end;

define variable *trace?* = #f;
define function %trace? () *trace?* end;
define %function %trace-on () *trace?* := #t end;
define %function %trace-off () *trace?* := #f end;

define %binding (%os-name)                 = #f;
define %binding (%os-binding-value)        = #f;
define %binding (%os-binding-value-setter) = #f;
define %binding (%%mep-apply)              = #f;

define %function %%apply (fun, args)
  let env
    = boot-env();
  let imp-args 
    = iterate imp (res = #(), args = args)
	if (args == env-binding-value(env, #"nil"))
	  reverse!(res)
	else
	  imp(pair(invoke-primitive(env, #"%head", args), res), 
	      invoke-primitive(env, #"%tail", args))
	end if;
      end iterate;
  proto-apply(fun, imp-args)
end %function;

define constant $boot-bottom = *booted-bindings*;

define variable *the-boot-environment* = $the-empty-environment;

define function boot-env () => (res :: <environment>)
  *the-boot-environment*
end function;

define function boot-env-setter (z :: <environment>) => (res :: <environment>)
  *the-boot-environment* := z;
end function;

define function build-boot-env ()
  collecting (nams, vals)
    iterate loop (bindings = $boot-bottom, last-bindings = #f)
      if (last-bindings == $boot-top | bindings == #())
	boot-env() 
	  := env-extend!($the-empty-environment, 
			 collected(nams), collected(vals), kind: #"global");
      else
	let binding = head(bindings);
        // format-out("SNAPSHOTTING %s\n", head(binding));
	collect-into(nams, head(binding));
	collect-into(vals, tail(binding));
	loop(tail(bindings), bindings);
      end if;
    end iterate;
  end collecting;
end function;

build-boot-env();

define variable *boot-env* = boot-env();

define method snapshot-boot-environment ()
  *boot-env* := boot-env();
  boot-env() := env-extend!(boot-env(), #(), #(), kind: #"global");
end method;

define method restore-boot-environment ()
  boot-env() := *boot-env*;
  snapshot-boot-environment();
end method;

snapshot-boot-environment();

// EXTRA BOOTING PRIMITIVES

define %function %list (#rest args)
  %export(env(), map-as(<list>, curry(%import, env()), args))
end %function;

define %function %pair (x, y)
  %%clone(%ct-name(<Lst>), x, y);  
end %function;

define %function %cat (#rest args)
  %export(env(), reduce(concatenate, #(), map(curry(%import, env()), args)))
end %function;

define %binding %cat! = %cat;

// NAME CORRESPONDENCE TO NATIVE SYSTEM

define %binding (%str)  = %sfab;
define %binding (%vec)  = %vfab;
define %binding (%snul) = %semp;
define %binding (%vnul) = %vemp;
