//// Copyright 2002, Jonathan Bachrach.  See file TERMS.

#undef FUNFOR

#define FUNFOR(x)    extern P x##I(REGS)

#undef EXT
#undef DEF
#undef VARREF
#undef VARSET
#undef BOUNDP

#define LOCNAM(x)    x##V
#define EXT(x, m, n) static DLVAR_DAT LOCNAM(x) = { n, m, PNUL };
#define DEF(x, m, n) static P x = PNUL; static DLVAR_DAT LOCNAM(x) = { n, m, PNUL };
#define BOUNDP(x)    (P)YevalSast_evalYPbinding_boundQ((P)&LOCNAM(x))
#define VARREF(x)    YevalSast_evalYPbinding_value((P)&LOCNAM(x))
#define VARSET(x, v) YevalSast_evalYPbinding_value_setter((P)v, (P)&LOCNAM(x))


#undef DYNEXT
#undef DYNDEF
#undef DYNREF
#undef DYNSET

#define DYNEXT(x, m, n) EXT(x, m, n)
#define DYNDEF(x, m, n) DEF(x, m, n)
#define DYNREF(x)       VARREF(x)
#define DYNSET(x, v)    VARSET(x, v)


