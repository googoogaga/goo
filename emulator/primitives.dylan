module: proto

define constant <proto-values> = <simple-object-vector>;

define class <proto> (<object>)
  slot %proto-traits :: <proto-traits>,
    init-keyword: traits:;
  slot %proto-values :: <proto-values> = #[],
    init-keyword: values:;
end class;

define function %make-proto ()
  make(<proto>)
end function;

define function %proto-values-element (x :: <proto>, i :: <integer>) => (res)
  %proto-values(x)[i]
end function;

define function %proto-values-element-setter (z, x :: <proto>, i :: <integer>)
  %proto-values(x)[i] := z
end function;

define function %make-proto-values (size :: <integer>) => (res :: <proto-values>)
  make(<proto-values>, size: size)
end function;

define function %install-proto-values (dst :: <proto>, size :: <integer>) => ()
  %proto-values(owner) := %make-proto-values(new-size);
end function;

define function %adjust-proto-values-size
    (dst :: <proto> new-size :: <integer>, src :: <proto>) => ()
  let old-values = %proto-values(src);
  let new-values = %make-proto-values(new-size);
  %proto-values(owner) := new-values;
  iterate loop (i :: <integer> = 0)
    when (i < %proto-values-size(old-values))
      new-values[i] := old-values[i];
      loop(i + 1);
    end when;
  end iterate;
end function;
