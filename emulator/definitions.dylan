module: proto

/// TODO:
/// 
/// 1. 
/// 
/// 
/// 
/// 

define class <top-level-form> (<object>)
  slot form-source-location /* , required-init-keyword: source-location: */;
  slot form-sequence-number :: <integer> = 0 /* next-form-sequence-number() */;
  slot form-body, required-init-keyword: body:;
end class;

define class <top-level-init-form> (<top-level-form>)
end class;

define class <defining-form> (<top-level-form>)
end class;

define class <variable-defining-form> (<defining-form>)
  slot form-binding, required-init-keyword: binding:;
end class;

define class <variable-definition> (<variable-defining-form>)
  slot form-type, required-init-keyword: type:;
end class;

define class <function-defining-form> (<variable-defining-form>)
  slot form-ast-value, required-init-keyword: value:;
end class;

define class <function-definition> (<function-defining-form>)
end class;

define class <generic-definition> (<function-defining-form>)
end class;

define class <modifying-form> (<variable-defining-form>)
end class;

define class <method-definition> (<modifying-form>)
end class;

define class <isa-definition> (<modifying-form>)
end class;

define class <slot-definition> (<modifying-form>)
end class;

define class <macro-definition> (<variable-defining-form>)
end class;

