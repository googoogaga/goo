Module: dylan-user

define library proto
  export proto;
  use functional-dylan;
  use threads;
  use streams;
  use standard-io;
  use print;
  use format;
  use format-out;
  use equal-table;
  use collectors;
end library proto;

define module proto
  use functional-dylan,
    exclude: { application-arguments };
  use dylan-extensions,
    rename:  { slot-getter       => dylan-slot-getter,
               slot-setter       => dylan-slot-setter,
               slot-value        => dylan-slot-value, 
	       slot-value-setter => dylan-slot-value-setter }, 
    exclude: { slot-owner, slot-type };
  use threads;
  use streams;
  use standard-io;
  use print;
  use format;
  use format-out;
  use equal-table;
  use collectors;
  export proto-read,
         proto-eval,
         proto-write,
         // proto-driver-loop,
         eof-object?,
         newline,
         string->number;
end module proto;

// eof

