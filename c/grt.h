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

extern P YPsb(P);

extern P YPinvoke_debugger(P condition);
extern P YPbreak(char*);

extern P YPfalse;
extern P YPtrue;

/*
  Not used yet.
#define YPprim_nary_start(arg) va_list ap; va_start(ap, arg)
#define YPprim_nary_next() va_arg(ap, P)
#define YPprim_nary_end() va_end(ap)
*/

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

typedef struct _obj {
  P class;
  P values[1];
} *OBJECT, OBJECT_DATA;

#define YPobject_class(x)            (((OBJECT)(x))->class)
#define YPobject_class_setter(z, x)  (((OBJECT)(x))->class = (z))

#include "gc.h"

extern void* malloc(size_t);

extern P Ynul;
extern P Ynul_slot;

#define OBJECT_DATA_SIZE (sizeof(OBJECT_DATA))

extern P YPobject_of (P class, P size);
extern P YPclone (P x);
extern P YPraw_alloc (P size);
extern P YPelt (P v, P i);
extern P YPelt_setter (P x, P v, P i);

/*
extern P YPslot_elt(P, P);
extern P YPslot_elt_setter(P, P, P);
*/

#define YPslot_elt(x, i)           (((OBJECT)(x))->values[(PINT)(i)])
#define YPslot_elt_setter(z, x, i) (((OBJECT)(x))->values[(PINT)(i)] = (z))
#define YPslot_dat_at(x, i)        (&(((OBJECT)(x))->values[(PINT)(i)]))

/* FLO */

extern P FLOINT (PFLO x);
extern P YPflo_bits (P x);

/*

typedef struct _vec {
  PINT size;
  P    values[1];
} *PVEC, PVEC_DATA;

extern P YPPvfab (P size, P fill);
#define YPPvlen(x)              ((P)(((PVEC)(x))->size))
#define YPPvelt(x, i)           (((PVEC)(x))->values[((PINT)(i))])
#define YPPvelt_setter(z, x, i) (((PVEC)(x))->values[((PINT)(i))] = (z))

typedef PCHR* PSTR;

extern P YPPsfab (P size, P fill);
#define YPPslen(x)              ((P)(strlen((PSTR)(x))))
#define YPPselt(x, i)           ((P)(PINT)(((PSTR)(x))[((PINT)(i))]))
#define YPPselt_setter(z, x, i) ((P)(PINT)(((PSTR)(x))[((PINT)(i))] = ((PCHR)(PINT)(z))))

*/

/* REP */

#define REP_LEN_OFF 0
#define REP_DAT_OFF 1

#define YPrep_dat(x)            (YPslot_dat_at((x), (P)REP_DAT_OFF))

/* VEC */

extern P YPPvfab (P size, P fill);
#define YPvu(x)                ((P)(YPrep_dat(x)))
#define YPvlen(x)              ((P)(YPslot_elt((x), (P)REP_LEN_OFF)))
#define YPvelt(x, i)           ((P)(YPslot_elt((x), (P)(REP_DAT_OFF + (i)))))
#define YPvelt_setter(z, x, i) ((P)(YPslot_elt_setter((z), (x), (P)(REP_DAT_OFF + (i)))))

/* STR */

typedef PCHR* PSTR;

extern P YPPsfab (P size, P fill);
extern P YPsb (P str);
#define YPsu(x)                ((P)(YPrep_dat(x)))
#define YPslen(x)              ((P)(YPslot_elt((x), (P)REP_LEN_OFF)))
#define YPselt(x, i)           ((P)(PINT)(((PSTR)(YPsu(x)))[((PINT)(i))]))
#define YPselt_setter(z, x, i) ((P)(PINT)(((PSTR)(YPsu(x)))[((PINT)(i))] = ((PCHR)(PINT)(z))))

/* IO */

extern P Yerror;
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
extern P YPfile_mtime (P x);
extern P YPfile_existsQ (P name);
extern P YPfile_type (P name);
extern P YPcreate_directory (P name);

/* OS */

extern PSTR getenv(PSTR);
extern PSTR setenv(PSTR, PSTR, int);
extern P YPos_name ();
extern P YPos_binding_value (P name);
extern P YPos_binding_value_setter (P value, P name);

/* CLOSURES */

typedef struct _env {
  PINT size;
  P    values[1];
} *ENV, ENV_DATA;

extern ENV envnul;
#define ENVNUL     (envnul)

typedef P (*PFUN)(P, P);

#define FUNCODEOFFSET  0
#define FUNNAMEOFFSET  1
#define FUNSIGOFFSET   2
#define FUNENVOFFSET   3

#define SIGNAMESOFFSET 0
#define SIGSPECSOFFSET 1
#define SIGNARYPOFFSET 2
#define SIGARITYOFFSET 3
#define SIGVALUEOFFSET 4

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

#define FUNCODE(fun) ((PFUN)YPslot_elt(fun, (P)FUNCODEOFFSET))
#define FUNNAME(fun) ((PFUN)YPslot_elt(fun, (P)FUNNAMEOFFSET))
#define FUNSIG(fun)  ((PFUN)YPslot_elt(fun, (P)FUNSIGOFFSET))

#define SIGNAMES(x) (P)(YPslot_elt((x), (P)SIGNAMESOFFSET))
#define SIGARITY(x) (PINT)(IU(YPslot_elt((x), (P)SIGARITYOFFSET)))
#define SIGVALUE(x) YPslot_elt((x), (P)SIGVALUEOFFSET)
#define SIGSPECS(x) (P)(YPslot_elt((x), (P)SIGSPECSOFFSET))
#define SIGNARYP(x) ((PLOG)(YPslot_elt((x), (P)SIGNARYPOFFSET) != YPfalse))

#define FUNNAMES(x) SIGNAMES(FUNSIG(x))
#define FUNARITY(x) SIGARITY(FUNSIG(x))
#define FUNVALUE(x) SIGVALUE(FUNSIG(x))
#define FUNSPECS(x) SIGSPECS(FUNSIG(x))
#define FUNNARYP(x) SIGNARYP(FUNSIG(x))

extern P* FUNENV (P fun);
extern P* FUNENVSETTER (P* env, P fun);

#define ENVGET(e, i)       (((ENV)(e))->values[((PINT)(i))])
#define ENVPUT(z, e, i)    (((ENV)(e))->values[((PINT)(i))] = ((P)(z)))
#define FUNENVGET(f, i)    ENVGET(YPslot_elt((f), (P)FUNENVOFFSET), (i))
#define FUNENVPUT(z, f, i) ENVPUT((z), YPslot_elt((f), (P)FUNENVOFFSET), (i))

#define YPfun_reg() (Pfun)
#define YPnext_methods_reg() (Pnext_methods)

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

extern P KCALL0 (P fun);
extern P KCALL1 (P fun, P a1);
extern P KCALL2 (P fun, P a1, P a2);
extern P KCALL3 (P fun, P a1, P a2, P a3);
extern P KCALLN (P fun, int n, ...);

extern P YPPapply (P fun, P next_mets, P args);
extern P YPPmep_apply (P fun, P next_mets, P args);
extern P YPfapply (P fproc, P args);

#define YPnext_methods() Pnext_methods

extern P YPisaQ(P,P);
extern void check_fun_val_type(P, P);
extern P check_type(P, P);

#define QRET(x) \
  { return (x); }

#define RET(x) \
  { check_fun_val_type((x), Pfun); return (x); }

/* NON-LOCAL EXITS */

extern P do_exit (P fun);
extern P with_exit (P fun);
extern P with_cleanup (P body_fun, P cleanup_fun);

/* LITERALS */

#define DEFLIT(x)  static P x = PNUL;

/* GLOBAL VARIABLES */

extern P unbound ();

#define DEF(x, m, n)  extern P x; P x = PNUL;
#define EXT(x, m, n)  extern P x;
#define CHKREF(x)     (((x) == PNUL) ? unbound() : (x))

/* PRIVATE MODULE VARIABLES USED DIRECTLY BY THE C BACK END */

EXT(YPfalse, "boot", "%false");
EXT(YPtrue, "boot", "%true");
EXT(Ynil, "boot", "nil");
EXT(YruntimeYvec, "runtime", "vec");
EXT(YruntimeYPwith_monitor, "runtime", "%with-monitor");

/* It is not clear who is generating code which uses this. */
EXT(YPdispatch,"boot","%dispatch");

/* PRIVATE MODULE PRIMITIVES USED DIRECTLY BY THE C BACK END */

extern P YPpair (P,P);
extern P YPPlist(int num, ...);
extern P YPint (P);
extern P YPchr (P);
extern P YPflo (P);
extern P YPsb (P);
extern P YPPsym (P);
extern P YPmacro (P,P,P);
extern P YPsig (P,P,P,P,P);
extern P YPgen (P,P,P,P,P);
extern P YPmet (P,P,P,P);

/* FUNCTIONS */

#define FUNFOR(x)         extern P x; extern P x##I(P, P)
#define LOCFOR(x)         static P x; static P x##I(P, P)

/* BOXES */

#define BOXVAL(x)  (*((P*)(x)))
extern P BOXFAB(P x);

/* FUNCTION CODE */

#define FUNCODEDEF(x)  P x##I (P Pfun, P Pnext_methods)
#define FUNCODEREF(x)  (&(x##I))

/* LOCATIVES */

extern P YPlocative;
extern P YPlb(P);

/* SYMBOL TABLE */

extern P regsym (P* adr, char *modstr, char *namestr);
extern P YPdo_runtime_bindings (P fun);

/* LOCATIVES */

extern P YPlocative_value (P loc);
extern P YPlocative_value_setter (P val, P loc);

/* APPS */

extern P YPapp_filename ();
extern P YPapp_args ();

/* OVERALL INITIALIZATION */

extern void YPinit_world(int argc, char* argv[]);

/* CURSES */

extern P YPgrid_open ();
extern P YPgrid_close ();
extern P YPgrid_move (P x, P y);
extern P YPgrid_read ();
extern P YPgrid_write (P c);
extern P YPgrid_refresh ();

/* MODULE ENVIRONMENT INFORMATION */

typedef struct _MODULE_INFO MODULE_INFO;

typedef struct {
  MODULE_INFO  *module_info;    /* The module used */
} USE_INFO;

typedef struct {
  char         *variable_name;  /* The binding's name in this module */
  MODULE_INFO  *module_info;    /* The defining module */
  char         *original_name;  /* The original name in that module */
} IMPORT_INFO;

typedef struct {
  char         *variable_name;  /* The binding's name in this module */
  P            *location;       /* The storage location or NULL */
} BINDING_INFO;

typedef struct {
  char         *variable_name;  /* The binding's name in this module */
  char         *exported_as;    /* The name to export it under */
} EXPORT_INFO;

struct _MODULE_INFO {
  char         *module_name;
  P            *module_object;  /* NULL or run-time module object */
  USE_INFO     *uses;
  IMPORT_INFO  *imports;
  BINDING_INFO *bindings;
  EXPORT_INFO  *exports;
};

/* Holds pointer to top-level MODULE_INFO structure. */
extern MODULE_INFO *proto_toplevel_module_info;

/* Building the runtime environment. */
extern P YPbuild_runtime_modules(
  /* ((modname <str>) => <module>) */
  P create_module_fun,

  /* ((mod <module>) (uses <module>) => <any>) */
  P use_module_fun,    

  /* ((mod <module>) (name <str>)
      (from-mod <module>) (original-name <str>) => <any>) */
  P import_fun,

  /* ((mod <module>) (name <str>) (loc <loc>) => <any>) */
  P runtime_binding_fun,    

  /* ((mod <module>) (name <str>) => <any>) */
  P other_binding_fun,    

  /* ((mod <module>) (name <str>) (as-name <str>) => <any>) */
  P export_fun
);
