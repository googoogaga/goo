Module:         simple-tables
Author:         Scott McKay
Copyright:      1995 by Harlequin, Inc.

/// Hash code computations


/// 'id' (\==) hashing

define method id-hash (object)
  values(object.address-of,
         current-gc-state())
end method id-hash;

define method id-hash (object :: <boolean>)
  values(if (object) 131 else 149 end,
         $permanent-hash-state)
end method id-hash;

define method id-hash (object :: <small-integer>)
  // Offset it so that 0 doesn't hash to 0
 values(abs(rot(x, 15) - x + 31),
        $permanent-hash-state)
end method id-hash;
  
define method id-hash (object :: <float>)
  // Offset it so that 0.0 doesn't hash to 0
  values(object.bits + 89,
         $permanent-hash-state)
end method id-hash;

/*
define method id-hash (object :: <ratio>)
  values(logxor(id-hash(object.numerator), id-hash(object.denominator)),
         $permanent-hash-state)
end method id-hash;
*/

define method id-hash (object :: <complex>)
  values(logxor(id-hash(object.realpart), id-hash(object.complexpart)),
         $permanent-hash-state)
end method id-hash;

define method id-hash (object :: <character>)
  id-hash(as(<small-integer>, object))
end method id-hash;


/// 'equal' (\=) hashing

define method equal-hash (object)
  id-hash(object)
end method equal-hash;

define method equal-hash (object :: <float>)
  equal-hash(rationalize(object))
end method equal-hash;

/*
define method equal-hash (object :: <ratio>)
  values(logxor(equal-hash(object.numerator), equal-hash(object.denominator)),
         $permanent-hash-state)
end method equal-hash;
*/

define method equal-hash (object :: <complex>)
  values(logxor(equal-hash(object.realpart), equal-hash(object.complexpart)),
         $permanent-hash-state)
end method equal-hash;

define method equal-hash (object :: <collection>)
end method equal-hash;

define method equal-hash (object :: <sequence>)
end method equal-hash;

define method equal-hash (object :: <string>)
  let hash = 0;
  for (i from 0 below size(object))
    hash := rot(logxor(as(<small-integer>, object[i]), hash), 7)
  end;
  abs(hash)
end method equalp-hash;

define method equal-hash (object :: <list>)
end method equal-hash;


/// 'equalp' hashing

define method equalp-hash (object)
  equal-hash(object)
end method equalp-hash;

define method equalp-hash (object :: <character>)
  equal-hash(as(<small-integer>, as-uppercase(object)))
end method object-hash;

define method equalp-hash (object :: <string>)
  let hash = 0;
  for (i from 0 below size(object))
    hash := rot(logxor(as(<small-integer>, object[i]), hash), 7)
  end;
  abs(hash)
end method equalp-hash;

//(define-method =-hash ((x <list>))
//  (bind ((rot 4)
//       (hash 0)
//       (val %gc-dependence-none))
//    (for (until (atom? x))
//      (bind ((y (pop! x)))
//      (set! rot (%ldb (%byte 5 0) (+ rot 7)))         ;rot = mod(rot+7,32)
//      (set! hash (logxor (rot (select y instance?
//                                ((<symbol>)
//                                 (bind ((hash flag (id-hash y)))
//                                   (when (and flag (> flag val))
//                                     (set! val flag))
//                                   hash))
//                                ((<string>)
//                                 (string-hash y))
//                                ((<fixnum>)
//                                 (+ y 13))
//                                (else:
//                                  (bind ((hash flag (=-hash y)))
//                                    (when (and flag (> flag val))
//                                      (set! val flag))
//                                    hash)))
//                              rot)
//                         hash)))
//      finally
//        (unless (empty? x)
//        (set! hash (logxor (rot (bind ((hash flag (=-hash x)))
//                                  (when (and flag (> flag val))
//                                    (set! val flag))
//                                  hash)
//                                (- rot 4))
//                           hash)))
//      (values hash val))))
