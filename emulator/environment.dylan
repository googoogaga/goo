module: proto

//  An ENVIRONMENT is a chain of FRAMES.

define class <environment> (<object>)
  slot environment-parent = #f, init-keyword: parent:;
  slot environment-frame  = #f, init-keyword: frame:;
end class;

define class <global-environment> (<environment>)
end class;

define variable $the-empty-environment = make(<environment>);

define constant <names>  = <list>;
define constant <values> = <list>;

define class <linear-frame> (<object>)
  slot frame-names :: <names>   = #(), init-keyword: names:;
  slot frame-values :: <values> = #(), init-keyword: values:;
end class;

// frames

define method make-frame 
    (names :: <names>, values :: <values>, kind :: <symbol>) => (res)
  let n = size(names);
  if (n <= 10 & kind ~== #"global")
    make(<linear-frame>, names: names, values: values);
  else
    let frame = make(<table-frame>, size: n);
    local method fill-table! (nams, vals)
	    if (~ empty?(nams))
	      element(frame, head(nams)) := head(vals);
	      fill-table!(tail(nams), tail(vals));
	    end if;
	  end method;
    fill-table!(names, values);
    frame;
  end if;
end method;

define constant <table-frame> = <table>;

define method frame-binding-value
    (frame :: <linear-frame>, name, fail :: <function>) => (res)
  local method scan (names, values)
	  if (empty?(names))
            fail();
	  elseif (name == head(names))
	    head(values);
	  else
	    scan(tail(names), tail(values));
	  end if;
	end method;
  scan(frame-names(frame), frame-values(frame));
end method;

define method frame-do-bindings (frame :: <linear-frame>, f :: <function>) => ()
  for (name in frame-names(frame), value in frame-values(frame))
    f(name, value)
  end for;
end method;

define method frame-binding-value
    (frame :: <table-frame>, name, fail :: <function>) => (res)
  let val = element(frame, name, default: $not-found);
  if (val == $not-found)
    fail();
  else
    val;
  end if;
end method;

define method frame-do-bindings (frame :: <table-frame>, f :: <function>) => ()
  for (value keyed-by name in frame)
    f(name, value)
  end for;
end method;

define method frame-binding-name
    (frame :: <linear-frame>, value, fail :: <function>) => (res)
  local method scan (names, values)
	  if (empty?(values))
            fail();
	  elseif (value == head(values))
	    head(names);
	  else
	    scan(tail(names), tail(values));
	  end if;
	end method;
  scan(frame-names(frame), frame-values(frame));
end method;

define method frame-binding-name
    (frame :: <table-frame>, value, fail :: <function>) => (res)
  let name = find-key(frame, curry(\==, value), failure: $not-found);
  if (name == $not-found)
    fail();
  else
    name;
  end if;
end method;

define method frame-binding-value-setter 
    (value, frame :: <linear-frame>, name, fail :: <function>)
  local method scan (names, values)
	  if (empty?(names))
	    fail();
	  elseif (name == head(names))
	    head(values) := value;
	  else
	    scan(tail(names), tail(values));
	  end if;
	end method;
  scan(frame-names(frame), frame-values(frame));
end method;

define variable $not-found = list(#"not-found");

define method frame-binding-value-setter 
    (value, frame :: <table-frame>, name, fail :: <function>) => (res)
  if (element(frame, name, default: $not-found) == $not-found)
    fail();
  else
    element(frame, name) := value;
  end if;
end method;

define method frame-define-binding! 
    (frame :: <linear-frame>, name, value) => (res)
  local method scan (names, values)
	  if (empty?(names))
	    frame-names(frame)  := pair(name,  frame-names(frame));
	    frame-values(frame) := pair(value, frame-values(frame));
	  elseif (name == head(names))
	    head(values) := values;
	  else
	    scan(tail(names), tail(values));
	  end if;
	end method;
  scan(frame-names(frame), frame-values(frame));
end method;

define method frame-define-binding! 
    (frame :: <table-frame>, name, value) => (res)
  element(frame, name) := value;
end method;

// Environments: public

define method env-extend!
    (base-env :: <environment>, names :: <names>, values :: <values>, 
     #key kind = #"local")
 => (res :: <environment>)
  if (size(names) = size(values))
    make(if (kind == #"local") <environment> else <global-environment> end,
	 parent: base-env,
	 frame:  make-frame(names, values, kind));
  elseif (size(names) < size(values))
    error("Too many arguments supplied: %=, %=", names, values);
  else
    error("Too few arguments supplied: %=, %=", names, values);
  end if;
end method;

define method unbound-binding-handler (bnd)
  error("Unbound binding: %=", bnd); 
end method;

define method env-binding-value
    (env :: <environment>, name, #key unbound = unbound-binding-handler)
 => (res)
  local method parent-loop (env)
	  if (env == $the-empty-environment)
	    unbound(name)
	  else
	    frame-binding-value
	      (environment-frame(env), name,
	       method ()
		 parent-loop(environment-parent(env));
	       end method)
	  end if;
	end method;
  parent-loop(env);
end method;

define method unnamed-binding-handler (val)
  val
end method;

define method env-binding-name
    (env :: <environment>, value, #key unbound = unnamed-binding-handler)
 => (res)
  local method parent-loop (env)
	  if (env == $the-empty-environment)
	    unnamed-binding-handler(value)
	  else
	    frame-binding-name
	      (environment-frame(env), value,
	       method ()
		 parent-loop(environment-parent(env));
	       end method)
	  end if;
	end method;
  parent-loop(env);
end method;

define method env-binding-value-setter 
    (value, env :: <environment>, name, #key unbound = unbound-binding-handler)
 => (res)
  local method parent-loop (env)
	  if (env == $the-empty-environment)
	    unbound(value)
	  else
            frame-binding-value
	      (environment-frame(env), name,
	       method ()
		 parent-loop(environment-parent(env));
	       end method)
	      := value;
	  end if;
	end method;
  parent-loop(env);
  value
end method;

define constant $the-unspecified-value = vector(#"the-unspecified-value");

define method env-find-global-env 
    (env :: <environment>) => (res :: false-or(<global-environment>))
  iterate find (env = env)
    if (instance?(env, <global-environment>))
      env
    else
      let parent = environment-parent(env);
      parent & find(parent)
    end if
  end iterate;
end method;

define method env-define-binding! (env :: <environment>, name, value) => ()
  let genv = env-find-global-env(env);
  format-out("DEFINING %s\n", name);
  frame-define-binding!(environment-frame(genv), name, value);
end method;

define method env-do-global-bindings (env :: <environment>, f :: <function>) => ()
  let genv = env-find-global-env(env);
  iterate loop (env = env)
    unless (env == $the-empty-environment)
      frame-do-bindings(environment-frame(env), f);
      loop(environment-parent(env))
    end unless;
  end iterate;
end method;
