/* Copyright (c) 2001 Jonathan Bachrach */

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <setjmp.h>

#include <math.h>

#define INLINE inline

/* LOW LEVEL */

typedef FILE*          PPORT;
typedef float          PFLO;
typedef long           PINT;
typedef unsigned long  PADR;
typedef char           PCHR;
typedef unsigned long  PLOG;
typedef void*          P;
#define PNUL           ((P)0)

typedef union {
  PINT i;
  PFLO f;
} INTFLO;

extern P CALL0(P);
extern P CALL1(P, P);
extern P CALL2(P, P, P);

extern P YPsb(P);

extern P YPinvoke_debugger(P condition);
extern P YPbreak(char*);

extern P YPfalse;
extern P YPtrue;

#define YPEE(x, y)    ((x) == (y))
#define YPeqQ(x, y)   ((x) == (y))
#define YPbb(x)       (((x) == 0) ? YPfalse : YPtrue)
#define YPiE(x, y)    (((PINT)(x)) == ((PINT)(y)))
#define YPiL(x, y)    (((PINT)(x)) <  ((PINT)(y)))
#define YPiA(x, y)    (((PINT)(x)) +  ((PINT)(y)))
#define YPi_(x, y)    (((PINT)(x)) -  ((PINT)(y)))
#define YPiT(x, y)    (((PINT)(x)) *  ((PINT)(y)))
#define YPim(x, y)    (((PINT)(x)) %  ((PINT)(y)))
#define YPir(x, y)    (((PINT)x) - ((PINT)y) * (((PINT)(x)) /  ((PINT)(y))))
#define YPitS(x, y)   (((PINT)(x)) /  ((PINT)(y)))
#define YPiv(x, y)    (((PINT)(x)) |  ((PINT)(y)))
#define YPiC(x, y)    (((PINT)(x)) ^  ((PINT)(y)))
#define YPiB(x, y)    (((PINT)(x)) &  ((PINT)(y)))
#define YPiX(x)       (!((PINT)(x)))
#define YPiQ(x, y)    (((PINT)(x) >> ((PINT)(y))) & 1)
#define YPiLL(x, y)   (((PINT)(x)) << ((PINT)(y)))
#define YPiGG(x, y)   (((PINT)(x)) >> ((PINT)(y)))
#define YPiLLL(x, y)  (((PINT)(x)) << ((PINT)(y))) /* TODO: FIX THIS <<< */
#define YPiGGG(x, y)  (((PINT)(x)) >> ((PINT)(y))) /* TODO: FIX THIS >>> */
#define YPcE(x, y)    (((PCHR)(PINT)(x)) == ((PCHR)(PINT)(y)))
#define YPcL(x, y)    (((PCHR)(PINT)(x)) <  ((PCHR)(PINT)(y)))

#define BOUNDP(x)      (((x) == PNUL) ? YPfalse : YPtrue)

/* OBJ */

typedef struct _values {
  PINT size;
  P    values[1];
} *VALUES, VALUES_DATA;

typedef struct _obj {
  P      traits;
  VALUES values;
} *OBJECT, OBJECT_DATA;

#define YPobject_traits(x)           (((OBJECT)(x))->traits)
#define YPobject_traits_setter(z, x) (((OBJECT)(x))->traits = (z))
#define YPobject_values(x)           (((OBJECT)(x))->values)
#define YPobject_values_setter(z, x) (((OBJECT)(x))->values = ((VALUES)(z)))
#define YPobject_values_size(x)      (((VALUES)(x))->size)

#include "gc.h"

extern void* malloc(size_t);

extern P Ynul;
extern P Ynul_slot;

#define VALUES_SIZE(n) (sizeof(VALUES_DATA) + ((PINT)(n))*sizeof(P) - sizeof(P))
#define OBJECT_DATA_SIZE (sizeof(OBJECT_DATA))

extern P YPmake_object (void);
extern P YPmake_object_values (P size);
extern P YPinstall_object_values (P dst, P size);
extern P YPadjust_object_values_size (P dst, P new_size, P src);
extern P YPclone (P x);
extern P YPraw_alloc (P size);
extern P YPelt (P v, P i);
extern P YPelt_setter (P x, P v, P i);

#define YPslot_elt(x, i) (((VALUES)(YPobject_values(x)))->values[(PINT)(i)])
#define YPslot_elt_setter(z, x, i) (((VALUES)(YPobject_values(x)))->values[(PINT)(i)] = (z))

/* FLO */

extern P FLOINT (PFLO x);
extern P YPflo_bits (P x);

/* VEC */

typedef struct _vec {
  PINT size;
  P    values[1];
} *PVEC, PVEC_DATA;

extern P YPPvfab (P size, P fill);
#define YPPvlen(x)              ((P)(((PVEC)(x))->size))
#define YPPvelt(x, i)           (((PVEC)(x))->values[((PINT)(i))])
#define YPPvelt_setter(z, x, i) (((PVEC)(x))->values[((PINT)(i))] = (z))

/* STR */

typedef PCHR* PSTR;

extern P YPPsfab (P size, P fill);
#define YPPslen(x)              ((P)(strlen((PSTR)(x))))
#define YPPselt(x, i)           ((P)(PINT)(((PSTR)(x))[((PINT)(i))]))
#define YPPselt_setter(z, x, i) ((P)(PINT)(((PSTR)(x))[((PINT)(i))] = ((PCHR)(PINT)(z))))

/* IO */

extern P Yfile_opening_error;
extern P YPopen_input_file (P name);
extern P YPopen_output_file (P name);
extern P YPclose_input_port (P s);
extern P YPclose_output_port (P s);
extern P YPnewline (P s);
extern P YPforce_output (P s);
extern P YPwrite_char (P s, P x);
extern P YPwrite_string (P s, P x);
extern P YPread_char (P s);
extern P YPpeek_char (P s);
extern P YPchar_readyQ (P s); 
extern PSTR YPread_string (FILE* s);
extern P YPeof_objectQ (P x);
extern P YPeof_object ();
extern PPORT YPcurrent_input_port (void);
extern PPORT YPcurrent_output_port (void);

/* OS */

extern PSTR getenv(PSTR);
extern PSTR setenv(PSTR, PSTR, int);
extern P YPos_name ();
extern P YPos_binding_value (P name);
extern P YPos_binding_value_setter (P value, P name);

/* CLOSURES */

typedef struct _env {
  PINT mark;
  PINT size;
  P    values[1];
} *ENV, ENV_DATA;

extern ENV envnul;
#define ENVNUL     (envnul)

typedef P (*PFUN)(P);

#define FUNCODEOFFSET  0
#define FUNSPECSOFFSET 1
#define FUNNARYPOFFSET 2
#define FUNARITYOFFSET 3
#define FUNVALUEOFFSET 4
#define FUNENVOFFSET   5

#define FUNCODE(fun) ((PFUN)YPslot_elt(fun, (P)FUNCODEOFFSET))

#define PAIRHEADOFFSET 0
#define PAIRTAILOFFSET 1

#define Phead(x) (YPslot_elt((x), (P)PAIRHEADOFFSET))
#define Ptail(x) (YPslot_elt((x), (P)PAIRTAILOFFSET))
#define Phead_setter(z, x) (YPslot_elt_setter((z), (x), (P)PAIRHEADOFFSET))
#define Ptail_setter(z, x) (YPslot_elt_setter((z), (x), (P)PAIRTAILOFFSET))

#define tag_mask 3
#define adr_tag  0
#define int_tag  1
#define chr_tag  2
#define loc_tag  3

extern int tag_bits (P adr);
extern long untag (P adr);
extern long tag (P adr, int tag);

/* #define IU(x) (YPslot_elt((x), (P)0)) */
#define IU(x) (untag(x))

#define FUNARITY(x) (PINT)(IU(YPslot_elt((x), (P)FUNARITYOFFSET)))
#define FUNVALUE(x) YPslot_elt((x), (P)FUNVALUEOFFSET)
#define FUNSPECS(x) (P)(YPslot_elt((x), (P)FUNSPECSOFFSET))
#define FUNNARYP(fun) ((PLOG)(YPslot_elt((fun), (P)FUNNARYPOFFSET) != YPfalse))

extern P* FUNENV (P fun);
extern P* FUNENVSETTER (P* env, P fun);

#define ENVGET(e, i)       (((ENV)(e))->values[((PINT)(i))])
#define ENVPUT(z, e, i)    (((ENV)(e))->values[((PINT)(i))] = ((P)(z)))
#define FUNENVGET(f, i)    ENVGET(YPslot_elt((f), (P)FUNENVOFFSET), (i))
#define FUNENVPUT(z, f, i) ENVPUT((z), YPslot_elt((f), (P)FUNENVOFFSET), (i))

#define YPfun_reg() (Pfun)

#define FREEREF(x) (FUNENVGET(Pfun, (x)))

extern P FABENV (int size, ...);
extern P FUNINIT (P fun, int n, ...);
extern P FUNSHELL (int d, P x, int n);
extern P FUNFAB (P x, int n, ...);

/* CALLS */

extern P   Pfunction_;
extern int Pargument_count_;
extern P   Pnext_methods_;

extern P* stack_;
extern int sp, fp;

#define PUSH(x)    (stack_[sp++] = (x))
#define POP()      (stack_[--sp])

/* #define ARG(x)         P x = POP() */
#define ARG(x, n)         P x = (stack_[fp - (n) - 2])

extern P CALL0 (P fun);
extern P CALL1 (P fun, P a1);
extern P CALL2 (P fun, P a1, P a2);
extern P CALL3 (P fun, P a1, P a2, P a3);
extern P CALLN (P fun, int n, ...);

extern P YPPapply (P fun, P args);
extern P YPPmep_apply (P fun, P args);
extern P YPfapply (P fproc, P args);

extern P YPisaQ(P,P);

extern void check_type(P, P);

#define RET(x) \
  { check_type(res, Pfun); return res; }

/* NON-LOCAL EXITS */

extern P do_exit (P fun);
extern P with_exit (P fun);
extern P with_cleanup (P body_fun, P cleanup_fun);

/* LITERALS */

#define DEFLIT(x)  P x = PNUL;

/* GLOBAL VARIABLES */

extern P unbound ();

#define DEF(x, n)  P x = PNUL;
#define CHKREF(x)  (((x) == PNUL) ? unbound() : (x))

/* FUNCTIONS */

#define FUNFOR(x)         extern P x; extern P x##I(P)
#define LOCFOR(x)         P x; extern P x##I(P)

/* BOXES */

#define BOXVAL(x)  (*((P*)(x)))
extern P BOXFAB(P x);

/* FUNCTION CODE */

#define FUNCODEDEF(x)  P x##I (P Pfun)
#define FUNCODEREF(x)  (&(x##I))

/* LOCATIVES */

extern P YPlocative;
extern P YPlb(P);

/* SYMBOL TABLE */

extern void regsym (P* adr, char *str);
extern P YPdo_runtime_bindings (P fun);

/* LOCATIVES */

extern P YPlocative_value (P loc);
extern P YPlocative_value_setter (P val, P loc);

/* APPS */

extern P YPapp_filename ();
extern P YPapp_args ();

/* OVERALL INITIALIZATION */

extern void YPinit_world(int argc, char* argv[]);

