//// Copyright 2002, Jonathan Bachrach.  See file TERMS.

#ifndef IN_GRT
#define IN_GRT
#include "config.h"
#include <time.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <setjmp.h>
#include <math.h>
#ifdef HAVE_POSIX_THREAD
#include <pthread.h>
#include "gc_pthread_redirects.h"
#endif

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
extern P YPlb(P);
extern P YPlu(P);

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
#define YPiX(x)       (~((PINT)(x)))
#define YPiQ(x, y)    (((PINT)(x) >> ((PINT)(y))) & 1)
#define YPiLL(x, y)   (((PINT)(x)) << ((PINT)(y)))
#define YPiGG(x, y)   (((PINT)(x)) >> ((PINT)(y)))
#define YPiLLL(x, y)  (((PINT)(x)) << ((PINT)(y))) /* TODO: FIX THIS <<< */
#define YPiGGG(x, y)  (((PINT)(x)) >> ((PINT)(y))) /* TODO: FIX THIS >>> */
#define YPcE(x, y)    (((PCHR)(PINT)(x)) == ((PCHR)(PINT)(y)))
#define YPcL(x, y)    (((PCHR)(PINT)(x)) <  ((PCHR)(PINT)(y)))

#define RTVBOUNDP(x)   (((x) == PNUL) ? YPfalse : YPtrue)
#define BOUNDP(x)      RTVBOUNDP(x)
#define DYNNUL         ((P)1)

/* OBJ */

typedef struct _obj {
  P class;
  P values[1];
} *OBJECT, OBJECT_DATA;

#define YPobject_class(x)            (((OBJECT)(x))->class)
#define YPobject_class_setter(z, x)  (((OBJECT)(x))->class = (z))

#include <gc/gc.h>

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
#define YPvlen(x)              ((P)(YPprop_elt((x), (PINT)REP_LEN_OFF)))
#define YPvelt(x, i)           ((P)(YPprop_elt((x), (PINT)(REP_DAT_OFF + (i)))))
#define YPvelt_setter(z, x, i) ((P)(YPprop_elt_setter((z), (x), (PINT)(REP_DAT_OFF + (i)))))

/* TUP */

extern P YPPtfab (P size, P fill);
#define YPtu(x)                ((P)(YPrep_dat(x)))
#define YPtlen(x)              ((P)(YPprop_elt((x), (PINT)REP_LEN_OFF)))
#define YPtelt(x, i)           ((P)(YPprop_elt((x), (PINT)(REP_DAT_OFF + (i)))))
#define YPtelt_setter(z, x, i) ((P)(YPprop_elt_setter((z), (x), (PINT)(REP_DAT_OFF + (i)))))

/* STR */

typedef PCHR* PSTR;

extern P YPPsfab (P size, P fill);
extern P YPsb (P str);
#define YPsu(x)                ((P)(YPrep_dat(x)))
#define YPslen(x)              ((P)(YPprop_elt((x), (PINT)REP_LEN_OFF)))
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

extern P YPos_name ();
extern P YPos_val (P name);
extern P YPos_val_setter (P value, P name);
P YgooSsystemYPpid ();

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

typedef struct _bind_exit_frame {
  jmp_buf		        destination;
  P*                            sp;
  P*                            fp;
  P			        value;
  struct _unwind_protect_frame* present_unwind_protect_frame;
} *BIND_EXIT_FRAME, BIND_EXIT_FRAME_DATA;

typedef struct _unwind_protect_frame {
  P cleanup_fun;
  struct _unwind_protect_frame* previous_unwind_protect_frame;
} *UNWIND_PROTECT_FRAME, UNWIND_PROTECT_FRAME_DATA;

// GOO REGISTERS

typedef struct {
  P*  stack;
  P*  sp;
  P*  fp;
  P   next_methods;
  int stack_allocp;
  UNWIND_PROTECT_FRAME current_unwind_protect_frame;
  UNWIND_PROTECT_FRAME top_unwind_protect_frame;
  P   dynvars;
} *REGS, REGS_DATA;

// GOO FUNCTIONS

typedef P (*PFUN)(REGS);

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

// THREAD LOCAL VARIABLE SUPPORT

#ifdef WITH_THREADS

#if defined(HAVE_THREAD_LOCAL_VARIABLE)
#define THREAD __thread
typedef P* T;
#define TREF(x)    (x)
#define TSET(x, v) (x = (v))
#elif defined(HAVE_POSIX_THREAD)
#define THREAD 
typedef pthread_key_t T;
#define TREF(x)    ((P*)pthread_getspecific(x))
#define TSET(x, v) pthread_setspecific(x, v)
#else
#error Unknown threading type
#endif

#else /* WITH_THREADS */

#define THREAD 
typedef P* T;
#define TREF(x)    (x)
#define TSET(x, v) (x = (v))

#endif /* WITH_THREADS */

#define DEFTVAR(v)   THREAD T v
#define EXTTVAR(v)   extern THREAD T v

// GOO REGISTERS

extern REGS YPfab_regs();
EXTTVAR(tregs);
EXTTVAR(goo_thread);

#define Pregs()      TREF(tregs)
#define REGSREF()    ((REGS)(TREF(tregs)))
#define REGSCREF()   (regs?regs:regs=REGSREF())
#define REGSSET(v)   TSET(tregs, (v))
#define DEFREGS()    REGS regs = REGSREF()
#define DEFCREGS()   REGS regs = (REGS)0
#define YPdef_regs() regs = REGSREF()

#define REG(x)       (regs->x)
#define CREG(x)      (REGSCREF()->x)
#define REGSET(x, v) (regs->x = (v))

#define MAX_STACK_SIZE 100000

#define YPfun_reg()            (Pfun)
#define YPnext_methods_reg()   (Pnext_methods)
#define YPsp_reg()             (REG(sp))
#define YPfp_reg()             (REG(fp))
#define YPsp_reg_setter(value) (REGSET(sp, value))
#define YPfp_reg_setter(value) (REGSET(fp, value))

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
  return ((P*)v)[(PINT)i];
}

STATIC_NOT_PRT_C INLINE P YPelt_setter (P x, P v, P i) {
  return ((P*)v)[(PINT)i] = x;
}


/* CALLS */

#define ON_STACK(a) do { \
  int old_stack_allocp = REG(stack_allocp); \
  REGSET(stack_allocp, 1); \
  a; \
  REGSET(stack_allocp, old_stack_allocp); \
} while(0)

#define PUSH(x)      (*(REG(sp)) = (x), REGSET(sp, REG(sp)+1))
#define POP()        (REGSET(sp, REG(sp)-1), *(REG(sp)))
#define DEC_STACK(n) (REGSET(sp, REG(sp)-(n)))
#define INC_STACK(n) (REGSET(sp, REG(sp)+(n)))
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

#define FUNREG()          *(REG(sp)-1)
#define LINK_STACK()      P Pfun = FUNREG(); P Pnext_methods = REG(next_methods); *REG(sp) = REG(fp); REGSET(fp, REG(sp)); REGSET(sp, REG(sp)+1); 
#define UNLINK_STACK()    {REGSET(sp, REG(fp));  REGSET(fp, *REG(sp)); }
#define YPunlink_stack (0);UNLINK_STACK
#define ARGLEN()          (REG(fp)[-2])
#define ARG(x, n)         x = (REG(fp)[- (n) - 3])
#define NARGS(x, n)       x = (opts_stackalloc(regs, (P)tag((P)untag(REG(fp) - (n) - 3), loc_tag), \
				      YPib((P)ARGLEN() - (n))))

extern P YLoptsG;
extern P _YPcheck_call_types(REGS);

#define YPcheck_call_types() _YPcheck_call_types(regs)

STATIC_NOT_PRT_C  inline P opts_stackalloc(REGS regs, P loc, P len)
{
  OBJECT opts;
  opts            = (OBJECT)(REG(sp));
  REGSET(sp, REG(sp) + 3);               // sizeof OBJECT in P's
  opts->class     = YLoptsG;
  opts->values[0] = loc;
  opts->values[1] = len;
  return opts;
}

STATIC_NOT_PRT_C  INLINE P _CALL0 (REGS regs, int check, P fun) {
  P   res;
  PUSH(0);
  PUSH(fun);
  if(check)
    YPcheck_call_types();
  res = (FUNCODE(fun))(regs);
  DEC_STACK(2);
  return res;
}

STATIC_NOT_PRT_C  INLINE P _CALL1 (REGS regs, int check, P fun, P a1) {
  P   res;
  PUSH(a1);
  PUSH((P)1);
  PUSH(fun);
  if(check)
    YPcheck_call_types();
  res = (FUNCODE(fun))(regs);
  DEC_STACK(3);
  return res;
}

STATIC_NOT_PRT_C  INLINE P _CALL2 (REGS regs, int check, P fun, P a1, P a2) {
  P   res;
  PUSH(a2);
  PUSH(a1);
  PUSH((P)2);
  PUSH(fun);
  if(check)
    YPcheck_call_types();
  res = (FUNCODE(fun))(regs);
  DEC_STACK(4);
  return res;
}

STATIC_NOT_PRT_C  INLINE P _CALL3
    (REGS regs, int check, P fun, P a1, P a2, P a3) {
  P   res;
  PUSH(a3);
  PUSH(a2);
  PUSH(a1);
  PUSH((P)3);
  PUSH(fun);
  if(check)
    YPcheck_call_types();
  res = (FUNCODE(fun))(regs);
  DEC_STACK(5);
  return res;
}

STATIC_NOT_PRT_C  INLINE P _CALL4
    (REGS regs, int check, P fun, P a1, P a2, P a3, P a4) {
  P   res;
  PUSH(a4);
  PUSH(a3);
  PUSH(a2);
  PUSH(a1);
  PUSH((P)4);
  PUSH(fun);
  if(check)
    YPcheck_call_types();
  res = (FUNCODE(fun))(regs);
  DEC_STACK(6);
  return res;
}

STATIC_NOT_PRT_C INLINE P _CALL5
    (REGS regs, int check, P fun, P a1, P a2, P a3, P a4, P a5) {
  P   res;
  PUSH(a5);
  PUSH(a4);
  PUSH(a3);
  PUSH(a2);
  PUSH(a1);
  PUSH((P)5);
  PUSH(fun);
  if(check)
    YPcheck_call_types();
  res = (FUNCODE(fun))(regs);
  DEC_STACK(7);
  return res;
}


STATIC_NOT_PRT_C  INLINE P _YPraw_call(REGS regs, P fun, P next_mets) {
  REGSET(next_methods, next_mets);
  return (FUNCODE(fun))(regs);
}

STATIC_NOT_PRT_C  INLINE P _YPraw_met_call(REGS regs, P fun, P next_mets) {
  YPunlink_stack(); 
  *(REG(sp)-1) = fun;
  return _YPraw_call(regs, fun, next_mets);
}

#define YPraw_met_call(_fun, _next_mets) _YPraw_met_call(regs, _fun, _next_mets)

extern P _CALLN (REGS regs, int check, P fun, int n, ...);

#define CALL0(_chk, _fun) \
  _CALL0(regs, _chk, _fun)
#define CALL1(_chk, _fun, _a0) \
  _CALL1(regs, _chk, _fun, _a0)
#define CALL2(_chk, _fun, _a0, _a1) \
  _CALL2(regs, _chk, _fun, _a0, _a1)
#define CALL3(_chk, _fun, _a0, _a1, _a2) \
  _CALL3(regs, _chk, _fun, _a0, _a1, _a2)
#define CALL4(_chk, _fun, _a0, _a1, _a2, _a3) \
  _CALL4(regs, _chk, _fun, _a0, _a1, _a2, _a3)
#define CALL5(_chk, _fun, _a0, _a1, _a2, _a3, _a4) \
  _CALL5(regs, _chk, _fun, _a0, _a1, _a2, _a3, _a4)
#define YPraw_call(_fun, _next_mets) _YPraw_call(regs, _fun, _next_mets)
#define CALLN(...) _CALLN(regs, __VA_ARGS__)
#define XCALL0(...) _CALL0(REGSCREF(), __VA_ARGS__)
#define XCALL1(...) _CALL1(REGSCREF(), __VA_ARGS__)
#define XCALL2(...) _CALL2(REGSCREF(), __VA_ARGS__)
#define XCALL3(...) _CALL3(REGSCREF(), __VA_ARGS__)
#define XCALL4(...) _CALL4(REGSCREF(), __VA_ARGS__)
#define XCALL5(...) _CALL5(REGSCREF(), __VA_ARGS__)
#define XCALLN(...) _CALLN(REGSCREF(), __VA_ARGS__)
#define XXCALL0(...) _CALL0(REGSREF(), __VA_ARGS__)
#define XXCALL1(...) _CALL1(REGSREF(), __VA_ARGS__)
#define XXCALL2(...) _CALL2(REGSREF(), __VA_ARGS__)
#define XXCALL3(...) _CALL3(REGSREF(), __VA_ARGS__)
#define XXCALL4(...) _CALL4(REGSREF(), __VA_ARGS__)
#define XXCALL5(...) _CALL5(REGSREF(), __VA_ARGS__)
#define XXCALLN(...) _CALLN(REGSREF(), __VA_ARGS__)
#define XXCALLN(...) _CALLN(REGSREF(), __VA_ARGS__)

extern P _check_type(REGS, P,P);
extern void check_fun_val_type(REGS, P, P);

#define check_type(x, t) _check_type(regs, x, t)

#define YPnext_methods() Pnext_methods

#define QRET(x) \
  { return (x); }

#define RET(x) \
  { check_fun_val_type(regs, (x), Pfun); return (x); }

/* NON-LOCAL EXITS */

extern P do_exit (REGS regs );
extern P with_exit (P fun);
extern P with_cleanup (P body_fun, P cleanup_fun);

/* LITERALS */

#define DEFLIT(x)  static P x = PNUL;

/* GLOBAL VARIABLES */

extern P unbound ();

#define LITREF(x) x

// RTV'S ARE RUNTIME VARIABLES IMPLEMENTED IN TERMS OF C VARIABLES

#define RTVDEF(x, m, n)  extern P x; P x = PNUL;
#define RTVEXT(x, m, n)  extern P x;
#define RTVREF(x)        x
#define RTVSET(x, v)     x = v
#define RTVCHKREF        RTVVARREF
//#define RTVCHKREF(x)     (((x) == PNUL) ? unbound() : (x))

extern P DYNFAB(P v);
#define DYNDEF(x, m, n)     extern P x; P x = PNUL;
#define DYNEXT(x, m, n)     extern P x;
#define DYNREF(x)           YPtelt(CREG(dynvars), x)
#define DYNSET(x, v)        YPtelt_setter(v, CREG(dynvars), x)
#define DYNDEFSET(x, v)     DYNFAB(&x); DYNSET(x, v);
#define YPdyn_var_val(x)           DYNREF(x)
#define YPdyn_var_val_setter(v, x) DYNSET(x, v)

extern P YPfab_dyn_var();

// RTV'S ARE THE DEFAULT EXCEPT IN DYNAMIC COMPILATION ALA dlgrt.h

#define DEF(x, m, n)  RTVDEF(x, m, n)
#define EXT(x, m, n)  RTVEXT(x, m, n)
#define VARREF(x)     RTVREF(x)
#define VARSET(x, v)  RTVSET(x, v)
#define CHKREF        RTVCHKREF(x)

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

#define FUNFOR(x)         extern P x; extern P x##I(REGS)
#define LOCFOR(x)         static P x; static P x##I(REGS)

/* BOXES */

#define BOXVAL(x)  (*((P*)(x)))
extern P BOXFAB(P x);

/* FUNCTION CODE */

#define FUNCODEDEF(x)  P x##I (REGS regs)
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

// BINDING KINDS

#define DVAR 0 // DYNAMIC 
#define CVAR 1 // C OR RUNTIME
#define PVAR 2 // PREDEFINED
#define NVAR 3 // NIL

typedef struct {
  char         *variable_name;  // The binding's name in this module
  char         kind;            // The binding's kind 
  P            *location;       // The storage location or NULL 
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
  P other_binding_fun,

  /* ((mod <module>) (name <str>) (loc <loc>) => <any>) */
  P dynamic_binding_fun

);

extern P YevalSast_evalYPbinding_value(P x);
extern P YevalSast_evalYPbinding_value_setter(P v, P x);

typedef struct {
  PSTR  var_name;    
  PSTR  mod_name;    
  P     binding;    
} DLVAR_DAT, *DLVAR;

STATIC_NOT_PRT_C INLINE P YevalSast_evalYPdlvar_nam(P x) { 
  return (((DLVAR)(x))->var_name); 
}
STATIC_NOT_PRT_C INLINE P YevalSast_evalYPdlvar_mod(P x) {
  return (((DLVAR)(x))->mod_name);
}
STATIC_NOT_PRT_C INLINE P YevalSast_evalYPdlvar(P x) {
  return (((DLVAR)(x))->binding);
}
STATIC_NOT_PRT_C INLINE P YevalSast_evalYPdlvar_setter(P v, P x) {
  return ((((DLVAR)(x))->binding)=(v));
}

#define YgooSsystemYPdefault_goo_root() DEFAULT_GOO_ROOT

extern P YPtime ();

#endif
