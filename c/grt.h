/* Copyright (c) 2001 Jonathan Bachrach */

#include <time.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <setjmp.h>

#include <math.h>

#define INLINE inline
#ifdef IN_PRT_C
#define STATIC_NOT_PRT_C 
#else
#define STATIC_NOT_PRT_C static
#endif

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
extern P YPopts(P loc, P len);
extern P YPib(P i);

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

extern P Ynul;
extern P Ynul_prop;

#define OBJECT_DATA_SIZE (sizeof(OBJECT_DATA))

extern P YPobject_of (P class, P size);
extern P YPclone (P x);
extern P YPraw_alloc (P size);

#define YPprop_elt(x, i)           (((OBJECT)(x))->values[(PINT)(i)])
#define YPprop_elt_setter(z, x, i) (((OBJECT)(x))->values[(PINT)(i)] = (z))
#define YPprop_dat_at(x, i)        (&(((OBJECT)(x))->values[(PINT)(i)]))

/* FLO */

extern P FLOINT (PFLO x);
extern P YPflo_bits (P x);

/* REP */

#define REP_LEN_OFF 0
#define REP_DAT_OFF 1

#define YPrep_dat(x)            (YPprop_dat_at((x), (P)REP_DAT_OFF))

/* REP */

extern P YPPrfab (P size, P fill);
#define YPru(x)                ((P)(YPrep_dat(x)))
#define YPrlen(x)              ((P)(YPprop_elt((x), (P)REP_LEN_OFF)))
#define YPrelt(x, i)           ((P)(YPprop_elt((x), (P)(REP_DAT_OFF + (i)))))
#define YPrelt_setter(z, x, i) ((P)(YPprop_elt_setter((z), (x), (P)(REP_DAT_OFF + (i)))))

/* VEC */

extern P YPPvfab (P size, P fill);
#define YPvu(x)                ((P)(YPrep_dat(x)))
#define YPvlen(x)              ((P)(YPprop_elt((x), (P)REP_LEN_OFF)))
#define YPvelt(x, i)           ((P)(YPprop_elt((x), (P)(REP_DAT_OFF + (i)))))
#define YPvelt_setter(z, x, i) ((P)(YPprop_elt_setter((z), (x), (P)(REP_DAT_OFF + (i)))))

/* TUP */

extern P YPPtfab (P size, P fill);
#define YPtu(x)                ((P)(YPrep_dat(x)))
#define YPtlen(x)              ((P)(YPprop_elt((x), (P)REP_LEN_OFF)))
#define YPtelt(x, i)           ((P)(YPprop_elt((x), (P)(REP_DAT_OFF + (i)))))
#define YPtelt_setter(z, x, i) ((P)(YPprop_elt_setter((z), (x), (P)(REP_DAT_OFF + (i)))))

/* STR */

typedef PCHR* PSTR;

extern P YPPsfab (P size, P fill);
extern P YPsb (P str);
#define YPsu(x)                ((P)(YPrep_dat(x)))
#define YPslen(x)              ((P)(YPprop_elt((x), (P)REP_LEN_OFF)))
#define YPselt(x, i)           ((P)(PINT)(((PSTR)(YPsu(x)))[((PINT)(i))]))
#define YPselt_setter(z, x, i) ((P)(PINT)(((PSTR)(YPsu(x)))[((PINT)(i))] = ((PCHR)(PINT)(z))))

/* IO */

extern P Yerror;
extern P Yfile_opening_error;
extern P YPopen_in_file (P name);
extern P YPopen_out_file (P name);
extern P YPclose_in_port (P s);
extern P YPclose_out_port (P s);
extern P YPnewline (P s);
extern P YPforce_out (P s);
extern P YPput (P s, P x);
extern P YPputs (P s, P x);
extern P YPget (P s);
extern P YPpeek (P s);
extern P YPreadyQ (P s); 
extern PSTR YPgets (FILE* s);
extern P YPeof_objectQ (P x);
extern P YPeof_object ();
extern PPORT YPcurrent_in_port (void);
extern PPORT YPcurrent_out_port (void);
extern P YPfile_mtime (P x);
extern P YPfile_existsQ (P name);
extern P YPfile_type (P name);
extern P YPcreate_directory (P name);

/* OS */

extern PSTR getenv(PSTR);
extern PSTR setenv(PSTR, PSTR, int);
extern P YPos_name ();
extern P YPos_val (P name);
extern P YPos_val_setter (P value, P name);
#define timeval_diff(a, b, result)                                            \
  do {                                                                        \
    (result)->tv_sec = (a)->tv_sec - (b)->tv_sec;                             \
    (result)->tv_usec = (a)->tv_usec - (b)->tv_usec;                          \
    if ((result)->tv_usec < 0) {                                              \
      --(result)->tv_sec;                                                     \
      (result)->tv_usec += 1000000;                                           \
    }                                                                         \
  } while (0)


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

#define Phead(x) (YPprop_elt((x), (P)PAIRHEADOFFSET))
#define Ptail(x) (YPprop_elt((x), (P)PAIRTAILOFFSET))
#define Phead_setter(z, x) (YPprop_elt_setter((z), (x), (P)PAIRHEADOFFSET))
#define Ptail_setter(z, x) (YPprop_elt_setter((z), (x), (P)PAIRTAILOFFSET))

#define tag_mask 3
#define adr_tag  0
#define int_tag  1
#define chr_tag  2
#define loc_tag  3

/* #define IU(x) (YPprop_elt((x), (P)0)) */
#define IU(x) (untag(x))

#define FUNCODE(fun) ((PFUN)YPprop_elt(fun, (P)FUNCODEOFFSET))
#define FUNNAME(fun) ((PFUN)YPprop_elt(fun, (P)FUNNAMEOFFSET))
#define FUNSIG(fun)  ((PFUN)YPprop_elt(fun, (P)FUNSIGOFFSET))

#define SIGNAMES(x) (P)(YPprop_elt((x), (P)SIGNAMESOFFSET))
#define SIGARITY(x) (PINT)(IU(YPprop_elt((x), (P)SIGARITYOFFSET)))
#define SIGVALUE(x) YPprop_elt((x), (P)SIGVALUEOFFSET)
#define SIGSPECS(x) (P)(YPprop_elt((x), (P)SIGSPECSOFFSET))
#define SIGNARYP(x) ((PLOG)(YPprop_elt((x), (P)SIGNARYPOFFSET) != YPfalse))

#define FUNNAMES(x) SIGNAMES(FUNSIG(x))
#define FUNARITY(x) SIGARITY(FUNSIG(x))
#define FUNVALUE(x) SIGVALUE(FUNSIG(x))
#define FUNSPECS(x) SIGSPECS(FUNSIG(x))
#define FUNNARYP(x) SIGNARYP(FUNSIG(x))

STATIC_NOT_PRT_C INLINE P* FUNENV (P fun) {
  return (P*)YPprop_elt(fun, (P)FUNENVOFFSET);
}

STATIC_NOT_PRT_C INLINE P* FUNENVSETTER (P* env, P fun) {
  return (P*)YPprop_elt_setter(env, fun, (P)FUNENVOFFSET);
}

#define ENVGET(e, i)       (((ENV)(e))->values[((PINT)(i))])
#define ENVPUT(z, e, i)    (((ENV)(e))->values[((PINT)(i))] = ((P)(z)))
#define FUNENVGET(f, i)    ENVGET(FUNENV((f)), (i))
#define FUNENVPUT(z, f, i) ENVPUT((z), FUNENV((f)), (i))

#define YPfun_reg() (Pfun)
#define YPnext_methods_reg() (Pnext_methods)
#define YPsp_reg() (&stack_[sp])
#define YPfp_reg() (&stack_[fp])
#define YPsp_reg_setter(value) (sp = (P*)(value) - stack_)
#define YPfp_reg_setter(value) (fp = (P*)(value) - stack_)

#define FREEREF(x) (FUNENVGET(Pfun, (x)))

extern P FABENV (int size, ...);
extern P FUNINIT (P fun, int n, ...);
extern P FUNSHELL (int d, P x, int n);
extern P FUNFAB (P x, int n, ...);

/* TAG */

STATIC_NOT_PRT_C INLINE int tag_bits (P adr) {
  return (PADR)adr & tag_mask;
}

STATIC_NOT_PRT_C  INLINE long untag (P adr) {
  return (PADR)adr >> 2;
}

STATIC_NOT_PRT_C  INLINE long tag (P adr, int tag) {
  return (PADR)adr << 2 | tag;
}

STATIC_NOT_PRT_C INLINE P YPelt (P v, P i) {
  return ((P*)v)[(int)i];
}

STATIC_NOT_PRT_C INLINE P YPelt_setter (P x, P v, P i) {
  return ((P*)v)[(int)i] = x;
}


/* CALLS */

extern P   Pfunction_;
extern int Pargument_count_;
extern P   Pnext_methods_;

#define ON_STACK(a) do { \
  int old_stack_allocp = stack_allocp; \
  stack_allocp = 1; \
  a; \
  stack_allocp = old_stack_allocp; \
} while(0)

extern P* stack_;
extern int sp, fp;

#define PUSH(x)    (stack_[sp++] = (x))
#define POP()      (stack_[--sp])
#define DEC_STACK(n) (sp-=n)
#define INC_STACK(n) (sp+=n)
/* #define ARG(x)         P x = POP() */
/*
STACK LAYOUT
      arg2...n
      arg1
      arg0
      arglen
      fun obj
fp->  prev fp
      locals...
*/

#define LINK_STACK()      {stack_[sp] = (P)fp; fp = sp; sp++; }
#define UNLINK_STACK()    {sp = fp; fp = (int)stack_[sp]; }
#define YPunlink_stack (0);UNLINK_STACK
#define ARGLEN()          (stack_[fp - 2])
#define ARG(x, n)         x = (stack_[fp - (n) - 3])
#define NARGS(x, n)       x = (opts_stackalloc((P)tag((P)untag((P)(stack_ + fp - (n) - 3)), loc_tag), \
				      YPib((P)ARGLEN() - n)))

extern P YLoptsG;
extern P YPcheck_call_types();

STATIC_NOT_PRT_C  inline P opts_stackalloc(P loc, P len)
{
  OBJECT opts;
  opts            = (OBJECT)(&stack_[sp]);
  sp += 3;
  opts->class     = YLoptsG;
  opts->values[0] = loc;
  opts->values[1] = len;
  return opts;
}

/*
#define CALL0(check, zfun) ({\
  P zz_res, zz_fun = zfun; \
  PUSH(0); \
  PUSH(zz_fun); \
  if(check) \
   YPcheck_call_types(); \
  zz_res = (FUNCODE(zz_fun))(zz_fun, YPfalse); \
  DEC_STACK(2); \
  zz_res; \
})

#define CALL1(check, zfun, za1) ({\
  P zz_res, zz_fun=zfun, zz_a1 = za1; \
  PUSH(zz_a1); \
  PUSH((P)1); \
  PUSH(zz_fun); \
  if(check) \
   YPcheck_call_types(); \
  zz_res = (FUNCODE(zz_fun))(zz_fun, YPfalse); \
  DEC_STACK(3); \
  zz_res; \
})

#define CALL2(check, zfun, za1, za2) ({\
  P zz_res, zz_fun=zfun, zz_a1=za1, zz_a2=za2; \
  PUSH(zz_a2); \
  PUSH(zz_a1); \
  PUSH((P)2); \
  PUSH(zz_fun); \
  if(check) \
   YPcheck_call_types(); \
  zz_res = (FUNCODE(zz_fun))(zz_fun, YPfalse); \
  DEC_STACK(4); \
  zz_res; \
})

#define CALL3(check, zfun, za1, za2, za3) ({\
  P zz_res, zz_fun=zfun, zz_a1=za1, zz_a2=za2, zz_a3=za3; \
  PUSH(zz_a3); \
  PUSH(zz_a2); \
  PUSH(zz_a1); \
  PUSH((P)3); \
  PUSH(zz_fun); \
  if(check) \
   YPcheck_call_types(); \
  zz_res = (FUNCODE(zz_fun))(zz_fun, YPfalse); \
  DEC_STACK(5); \
  zz_res; \
})

#define YPraw_call(zfun, znext_mets) ({ \
  P zz_fun=zfun, zz_next_mets = znext_mets; \
  (FUNCODE(zz_fun))(zz_fun, zz_next_mets); \
})
*/

STATIC_NOT_PRT_C  INLINE P CALL0 (int check, P fun) {
  P   res;
  PUSH(0);
  PUSH(fun);
  if(check)
    YPcheck_call_types();
  res = (FUNCODE(fun))(fun, YPfalse);
  DEC_STACK(2);
  return res;
}

STATIC_NOT_PRT_C  INLINE P CALL1 (int check, P fun, P a1) {
  P   res;
  PUSH(a1);
  PUSH((P)1);
  PUSH(fun);
  if(check)
    YPcheck_call_types();
  res = (FUNCODE(fun))(fun, YPfalse);
  DEC_STACK(3);
  return res;
}

STATIC_NOT_PRT_C  INLINE P CALL2 (int check, P fun, P a1, P a2) {
  P   res;
  PUSH(a2);
  PUSH(a1);
  PUSH((P)2);
  PUSH(fun);
  if(check)
    YPcheck_call_types();
  res = (FUNCODE(fun))(fun, YPfalse);
  DEC_STACK(4);
  return res;
}

STATIC_NOT_PRT_C  INLINE P CALL3 (int check, P fun, P a1, P a2, P a3) {
  P   res;
  PUSH(a3);
  PUSH(a2);
  PUSH(a1);
  PUSH((P)3);
  PUSH(fun);
  if(check)
    YPcheck_call_types();
  res = (FUNCODE(fun))(fun, YPfalse);
  DEC_STACK(5);
  return res;
}


STATIC_NOT_PRT_C  INLINE P YPraw_call(P fun, P next_mets)
{
  return (FUNCODE(fun))(fun, next_mets);
}

extern P CALLN (int check, P fun, int n, ...);

extern P check_type(P,P);
extern void check_fun_val_type(P, P);

#define YPnext_methods() Pnext_methods

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
#define LITREF(x) x
#define VARREF(x) x
#define VARSET(x, v) x = v
//#define CHKREF(x)     (((x) == PNUL) ? unbound() : (x))
#define CHKREF VARREF

/* PRIVATE MODULE VARIABLES USED DIRECTLY BY THE C BACK END */

EXT(YPfalse, "boot", "%false");
EXT(YPtrue, "boot", "%true");
EXT(Ynil, "boot", "nil");
EXT(YruntimeYvec, "runtime", "vec");
EXT(YPwith_monitor, "runtime", "%with-monitor");

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
extern P YPsig (P,P,P,P,P,P);
extern P YPgen (P,P,P,P,P,P,P);
extern P YPmet (P,P,P,P,P,P);

/* FUNCTIONS */

#define FUNFOR(x)         extern P x; extern P x##I(P, P)
#define LOCFOR(x)         static P x; static P x##I(P, P)

/* BOXES */

#define BOXVAL(x)  (*((P*)(x)))
extern P BOXFAB(P x);

/* FUNCTION CODE */

#define FUNCODEDEF(x)  P x##I (P Pfun, P Pnext_methods)
#define FUNCODEREF(x)  (&(x##I))

/* SYMBOL TABLE */

extern P regsym (P* adr, char *modstr, char *namestr);
extern P YPdo_runtime_bindings (P fun);

/* LOCATIVES */

STATIC_NOT_PRT_C  INLINE P YPloc_val (P loc) {
  P* ptr = (P*)((PADR)loc & ~tag_mask);
  return *ptr;
}

STATIC_NOT_PRT_C  INLINE P YPloc_val_setter (P val, P loc) {
  P* ptr = (P*)((PADR)loc & ~tag_mask);
  return *ptr = val;
}

#define YPloc_off(loc, off) (((P*)((PADR)(loc) & ~tag_mask))[(PINT)off])
#define YPloc_off_setter(val, loc, off) (((P*)((PADR)(loc) & ~tag_mask))[(PINT)off] = val)

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
extern MODULE_INFO *goo_toplevel_module_info;

/* Building the runtime environment. */
extern P YPprocess_module(
  /* (mod_info <loc>) */
  P mod_info,

  /* ((mod <module>) (name <str>)
      (from-mod <module>) (original-name <str>) => <any>) */
  P import_fun,

  /* ((mod <module>) (name <str>) (as-name <str>) => <any>) */
  P export_fun
);

extern P YPbuild_runtime_modules(
  /* ((modname <str>) => <module>) */
  P create_module_fun,

  /* ((mod <module>) (uses <module>) => <any>) */
  P use_module_fun,    

  /* ((mod <module>) (name <str>) (loc <loc>) => <any>) */
  P runtime_binding_fun,    

  /* ((mod <module>) (name <str>) => <any>) */
  P other_binding_fun

);

extern P Yx8rSast_evalYPbinding_value(P x);
extern P Yx8rSast_evalYPbinding_value_setter(P v, P x);

typedef struct {
  PSTR  var_name;    
  PSTR  mod_name;    
  P     binding;    
} DLVAR_DAT, *DLVAR;

STATIC_NOT_PRT_C INLINE P Yx8rSast_evalYPdlvar_nam(P x) { 
  return (((DLVAR)(x))->var_name); 
}
STATIC_NOT_PRT_C INLINE P Yx8rSast_evalYPdlvar_mod(P x) {
  return (((DLVAR)(x))->mod_name);
}
STATIC_NOT_PRT_C INLINE P Yx8rSast_evalYPdlvar(P x) {
  return (((DLVAR)(x))->binding);
}
STATIC_NOT_PRT_C INLINE P Yx8rSast_evalYPdlvar_setter(P v, P x) {
  return ((((DLVAR)(x))->binding)=(v));
}

