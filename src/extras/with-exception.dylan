define &macro %with-exception
  { %with-exception (?type:expression, /* #rest */ ?options:*) ?stuff:* end }
    => #{ %with-exception (_dummy_ :: ?type, ?options) ?stuff end }
  { %with-exception (?:name :: ?type:expression, #rest ?options:*)
      ?protected:body
    \exception
      ?handling:body
    end }
    // TODO: URGENT: Much of this expansion is screwed. Get it right!
    // The handler really does have to take a non-local exit to
    // unwind things before it executes the handler body.
    => #{ block (_unwind-exception_)
           let _original-handlers_ = *current-handlers*;
           local method _handler-function_ (?name :: ?type, _next-handler_)
	     %dynamic-extent(_handler-function_);
             *current-handlers* := _original-handlers_;
             let (#rest all-values) = begin ?handling end;
             apply(_unwind-exception_, all-values);
             // let _value_ = begin ?handling end;
             // _unwind-exception_(_value_);
           end method;
           *current-handlers*
             := pair(make-handler(?type, _handler-function_, ?options),
                     *current-handlers*);
           block ()
             ?protected
           cleanup
             *current-handlers* := _original-handlers_;
           end;
         end };
end &macro;
