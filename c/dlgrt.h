#undef EXT
#undef DEF
#undef VARREF
#undef VARSET
#undef FUNFOR
#undef BOUNDP

#define LOCNAM(x)    x##V
#define EXT(x, m, n) static DLVAR_DAT LOCNAM(x) = { n, m, PNUL };
#define DEF(x, m, n) static P x = PNUL; static DLVAR_DAT LOCNAM(x) = { n, m, PNUL };
#define BOUNDP(x)    (P)Yast_evalYPbinding_boundQ((P)&LOCNAM(x))
#define VARREF(x)    Yast_evalYPbinding_value((P)&LOCNAM(x))
#define VARSET(x, v) Yast_evalYPbinding_value_setter((P)v, (P)&LOCNAM(x))
#define FUNFOR(x)    extern P x##I(P, P)

