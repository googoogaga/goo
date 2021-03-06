//// Copyright 2002, Jonathan Bachrach.  See file TERMS.

#ifndef IN_GRT
#define IN_GRT
#if !defined(_MSC_VER)
#include "config.h"
#else
#undef PINT
#define NOGDI
#define NOUSER
#pragma warning (disable:4047)
#include <windows.h>
#undef PINT
#undef WIN32
#endif
#include <time.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <setjmp.h>
#include <math.h>
#ifdef HAVE_POSIX_THREAD
#include <pthread.h>
#include <gc/gc_pthread_redirects.h>
#endif

#if defined(_MSC_VER)
#define INLINE
#else
#define INLINE inline 
#endif

#ifdef IN_GRT_C
#define STATIC_NOT_GRT_C 
#else
#define STATIC_NOT_GRT_C static
#endif

#if defined(_MSC_VER)
#if defined(BUILD_DLL)
#define IMPORTEXPORT __declspec(dllimport)
#else
#define IMPORTEXPORT __declspec(dllexport)
#endif
#else
#define IMPORTEXPORT
#endif

/* LOW LEVEL */

typedef FILE*          PPORT;
typedef float          PFLO;
#if defined(_MSC_VER)
#define PINT long
#else
typedef long           PINT;
#endif
typedef unsigned long  PADR;
typedef unsigned char  PCHR;
typedef unsigned long  PLOG;
typedef void*          P;
#define PNUL           ((P)0)

typedef union {
  PINT i;
  PFLO f;
} INTFLO;

IMPORTEXPORT extern P YPsb(P);
IMPORTEXPORT extern P YPsb_with_len(P, PINT);
IMPORTEXPORT extern P YPlb(P);
IMPORTEXPORT extern P YPlu(P);

IMPORTEXPORT extern P YPinvoke_debugger(P condition);
IMPORTEXPORT extern P YPbreak(char*);

IMPORTEXPORT extern P YPfalse;
IMPORTEXPORT extern P YPtrue;
IMPORTEXPORT extern P YPopts(P loc, P len);
IMPORTEXPORT extern P YPib(P i);

/*
  Not used yet.
#define YPprim_nary_start(arg) va_list ap; va_start(ap, arg)
#define YPprim_nary_next() va_arg(ap, P)
#define YPprim_nary_end() va_end(ap)
*/

#define YPEE(x, y)    ((x) == (y))
#define YPeqQ(x, y)   ((x) == (y))
#define YPbb(x)       (((x) == 0) ? YPfalse : YPtrue)
#define YPbu(x)       ((x) == YPfalse)
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

#define RTVBOUNDP(x)  (((x) == PNUL) ? YPfalse : YPtrue)
#define BOUNDP(x)     RTVBOUNDP(x)
#define DYNNUL        ((P)1)

#define RTVVARREF_OR(x, d)   (((x) == PNUL) ? d : (x))
#define VARREF_OR(x, d)      RTVVARREF_OR(x, d)
/* OBJ */

typedef struct _obj {
  P class;
  P values[1];
} *OBJECT, OBJECT_DATA;

#define YPobject_class(x)            (((OBJECT)(x))->class)
#define YPobject_class_setter(z, x)  (((OBJECT)(x))->class = (z))

#if defined(_MSC_VER)
#include "gc/gc.h"
#else
#include <gc/gc.h>
#endif

IMPORTEXPORT extern P Ynul;
IMPORTEXPORT extern P Ynul_prop;

#define OBJECT_DATA_SIZE (sizeof(OBJECT_DATA))

IMPORTEXPORT extern P YPobject_of (P class, P size);
IMPORTEXPORT extern P YPclone (P x);
IMPORTEXPORT extern P YPraw_alloc (P size);

#define YPprop_elt(x, i)           (((OBJECT)(x))->values[(PINT)(i)])
#define YPprop_elt_setter(z, x, i) (((OBJECT)(x))->values[(PINT)(i)] = (z))
#define YPprop_dat_at(x, i)        (&(((OBJECT)(x))->values[(PINT)(i)]))

/* FLO */

IMPORTEXPORT extern P FLOINT (PFLO x);
IMPORTEXPORT extern P YPflo_bits (P x);

/* REP */

#define REP_LEN_OFF 0
#define REP_DAT_OFF 1

#define YPrep_dat(x)            (YPprop_dat_at((x), (P)REP_DAT_OFF))

/* REP */

IMPORTEXPORT extern P YPPrfab (P size, P fill);
#define YPru(x)                ((P)(YPrep_dat(x)))
#define YPrlen(x)              ((P)(YPprop_elt((x), (P)REP_LEN_OFF)))
#define YPrelt(x, i)           ((P)(YPprop_elt((x), (P)((char*)REP_DAT_OFF + (long)(i)))))
#define YPrelt_setter(z, x, i) ((P)(YPprop_elt_setter((z), (x), (P)((char*)REP_DAT_OFF + (long)(i)))))

/* TUP */

IMPORTEXPORT extern P Ytup;
IMPORTEXPORT extern P YPPtfab (P size, P fill);
#define YPtu(x)                ((P)(YPrep_dat(x)))
#define YPtlen(x)              ((P)(YPprop_elt((x), (PINT)REP_LEN_OFF)))
#define YPtelt(x, i)           ((P)(YPprop_elt((x), (PINT)((char*)REP_DAT_OFF + (long)(i)))))
#define YPtelt_setter(z, x, i) ((P)(YPprop_elt_setter((z), (x), (PINT)((char*)REP_DAT_OFF + (long)(i)))))

/* STR */

#if !defined(_MSC_VER)
typedef PCHR* PSTR;
#endif

IMPORTEXPORT extern P YPPsfab (P size, P fill);
IMPORTEXPORT extern P YPsb (P str);
#define YPsu(x)                ((P)(YPrep_dat(x)))
#define YPslen(x)              ((P)(YPprop_elt((x), (PINT)REP_LEN_OFF)))
#define YPselt(x, i)           ((P)(PINT)(((PSTR)(YPsu(x)))[((PINT)(i))]))
#define YPselt_setter(z, x, i) ((P)(PINT)(((PSTR)(YPsu(x)))[((PINT)(i))] = ((PCHR)(PINT)(z))))

/* OS */

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

IMPORTEXPORT extern ENV envnul;
#define ENVNUL     (envnul)

typedef struct _bind_exit_frame {
  jmp_buf		        destination;
  P*                            sp;
  P*                            fp;
  P                             vsp, vfp, vpc, vfn, vnm;
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
  int stack_checkp;
  UNWIND_PROTECT_FRAME current_unwind_protect_frame;
  UNWIND_PROTECT_FRAME top_unwind_protect_frame;
  P   dynvars;
  // VM STATE
  P   vsp;
  P   vfp;
  P   vpc;
  P   vfn;
  P   vnm;
} *REGS, REGS_DATA;

// GOO FUNCTIONS

typedef P (*PFUN)(REGS);

#define FUNCODEOFFSET  0
#define FUNSIGOFFSET   1
#define FUNINFOOFFSET  2
#define FUNENVOFFSET   3

#define FUNINFONAMEOFFSET   0
#define FUNINFONAMESOFFSET  1
#define FUNINFOSRCOFFSET    2
#define FUNINFOSRCLOCOFFSET 3
#define FUNINFOCOUNTOFFSET  4

#define SIGSPECSOFFSET 0
#define SIGNARYPOFFSET 1
#define SIGARITYOFFSET 2
#define SIGVALUEOFFSET 3

#define PAIRHEADOFFSET 0
#define PAIRTAILOFFSET 1

#define Phead(x) (YPprop_elt((x), (P)PAIRHEADOFFSET))
#define Ptail(x) (YPprop_elt((x), (P)PAIRTAILOFFSET))
#define Phead_setter(z, x) (YPprop_elt_setter((z), (x), (P)PAIRHEADOFFSET))
#define Ptail_setter(z, x) (YPprop_elt_setter((z), (x), (P)PAIRTAILOFFSET))

#define tag_mask 3
#define TAG_BITS 2
#define adr_tag  0
#define int_tag  1
#define chr_tag  2
#define loc_tag  3

/* #define IU(x) (YPprop_elt((x), (P)0)) */
#define IU(x) ((PINT)(x)>>TAG_BITS)

#define FUNCODE(fun)  ((PFUN)YPprop_elt(fun, (P)FUNCODEOFFSET))
#define FUNSIG(fun)   ((PFUN)YPprop_elt(fun, (P)FUNSIGOFFSET))
#define FUNINFO(fun)  ((PFUN)YPprop_elt(fun, (P)FUNINFOOFFSET))
#define FUNNAME(fun)  ((PFUN)YPprop_elt(FUNINFO(fun), (P)FUNINFONAMEOFFSET))
#define FUNNAMES(fun) ((PFUN)YPprop_elt(FUNINFO(fun), (P)FUNINFONAMESOFFSET))
#define FUNCOUNT(fun) ((PFUN)YPprop_elt(FUNINFO(fun), (P)FUNINFOCOUNTOFFSET))

#define SIGARITY(x) (PINT)(IU(YPprop_elt((x), (P)SIGARITYOFFSET)))
#define SIGVALUE(x) YPprop_elt((x), (P)SIGVALUEOFFSET)
#define SIGSPECS(x) (P)(YPprop_elt((x), (P)SIGSPECSOFFSET))
#define SIGNARYP(x) ((PLOG)(YPprop_elt((x), (P)SIGNARYPOFFSET) != YPfalse))

#define FUNARITY(x) SIGARITY(FUNSIG(x))
#define FUNVALUE(x) SIGVALUE(FUNSIG(x))
#define FUNSPECS(x) SIGSPECS(FUNSIG(x))
#define FUNNARYP(x) SIGNARYP(FUNSIG(x))

STATIC_NOT_GRT_C INLINE P* FUNENV (P fun) {
  return (P*)YPprop_elt(fun, (P)FUNENVOFFSET);
}

STATIC_NOT_GRT_C INLINE P* FUNENVSETTER (P* env, P fun) {
  return (P*)YPprop_elt_setter(env, fun, (P)FUNENVOFFSET);
}

#define ENVGET(e, i)       (((ENV)(e))->values[((PINT)(i))])
#define ENVPUT(z, e, i)    (((ENV)(e))->values[((PINT)(i))] = ((P)(z)))
#define FUNENVGET(f, i)    ENVGET(FUNENV((f)), (i))
#define FUNENVPUT(z, f, i) ENVPUT((z), FUNENV((f)), (i))

// THREAD LOCAL VARIABLE SUPPORT

#ifdef WITH_THREADS

#if defined(HAVE_THREAD_LOCAL_VARIABLE)
#if defined(MSVC_THREAD)
#define THREAD __declspec(thread)
#else /* MSVC_THREAD */
#define THREAD __thread
#endif /* !MSVC_THREAD */
typedef P* T;
#define TREF(x)    (x)
#define TSET(x, v) (x = (v))
#elif defined(HAVE_POSIX_THREAD)
#define THREAD 
typedef pthread_key_t T;
#define TREF(x)    ((P*)pthread_getspecific(x))
#define TSET(x, v) pthread_setspecific(x, v)
#elif defined(MSVC_THREAD)
#define THREAD 
typedef unsigned long T;
#define TREF(x)    ((P*)TlsGetValue(x))
#define TSET(x, v) TlsSetValue(x, v)
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
IMPORTEXPORT EXTTVAR(tregs);
EXTTVAR(goo_thread);

#define Pregs()       TREF(tregs)
#define REGSREF()     ((REGS)(TREF(tregs)))
#define REGSCREF()    (regs?regs:(regs=REGSREF()))
#define REGSSET(v)    TSET(tregs, (P)(v))
#define DEFREGS()     REGS regs = REGSREF()
#define DEFCREGS()    REGS regs = (REGS)0
#define YPdef_regs()  regs = REGSREF()
#define YPset_regs(x) regs = (REGS)(x)

#define REG(x)       (regs->x)
#define CREG(x)      (REGSCREF()->x)
#define REGSET(x, v) (regs->x = (v))

#define MAX_STACK_SIZE         70000
#define YPmax_stack_len()      (MAX_STACK_SIZE)

#define YPfun_reg()            (Pfun)
#define YPnext_methods_reg()   (REG(next_methods))
#define YPnext_methods_reg_setter(x) (REG(next_methods) = (x))
#define YPsp_reg()             (REG(sp))
#define YPsp_elt(i)            (REG(sp)[(int)i])
#define YPfp_reg()             (REG(fp))
#define YPsp_reg_setter(value) (REGSET(sp, value))
#define YPfp_reg_setter(value) (REGSET(fp, value))
#define YPstack_reg()          (REG(stack))
#define YPstack_check_regQ()          (P)(REG(stack_checkp))
#define YPstack_check_regQ_setter(x)  (REGSET(stack_checkp, (int)x))

#define YPvpc()             (REG(vpc))
#define YPvfn()             (REG(vfn))
#define YPvnm()             (REG(vnm))
#define YPvsp()             (REG(vsp))
#define YPvfp()             (REG(vfp))
#define YPvpc_setter(value) (REGSET(vpc, value))
#define YPvfn_setter(value) (REGSET(vfn, value))
#define YPvnm_setter(value) (REGSET(vnm, value))
#define YPvsp_setter(value) (REGSET(vsp, value))
#define YPvfp_setter(value) (REGSET(vfp, value))

#define FREEREF(x) (FUNENVGET(Pfun, (x)))

#define YPvm_fun_env_elt(x, i)           (FUNENVGET((x), (i)))
#define YPvm_fun_env_elt_setter(v, x, i) (FUNENVPUT((v), (x), (i)))

IMPORTEXPORT extern P FABENV (int size, ...);
IMPORTEXPORT extern P FUNINIT (P fun, int n, ...);
IMPORTEXPORT extern P FUNSHELL (int d, P x, int n);
IMPORTEXPORT extern P FUNFAB (P x, int n, ...);

extern P YPvm_fun_env_fab (P n);

extern P YPenable_stack_checks ();

/* TAG */

#define MAX_GOO_FIXNUM LONG_MAX >> TAG_BITS
#define MIN_GOO_FIXNUM LONG_MIN >> TAG_BITS


STATIC_NOT_GRT_C INLINE int tag_bits (P adr) {
  return (PADR)adr & tag_mask;
}

STATIC_NOT_GRT_C  INLINE long untag (P adr) {
  return (PADR)adr >> TAG_BITS;
}

STATIC_NOT_GRT_C  INLINE long tag (P adr, int tag) {
  return (PADR)adr << TAG_BITS | tag;
}

// STATIC_NOT_GRT_C INLINE P YPiu (P x) { return (P)untag(x); }
// STATIC_NOT_GRT_C INLINE P YPib (P x) { return (P)tag(x, int_tag); }

STATIC_NOT_GRT_C INLINE P YPelt (P v, P i) {
  return ((P*)v)[(PINT)i];
}

STATIC_NOT_GRT_C INLINE P YPelt_setter (P x, P v, P i) {
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
#define YPunlink_stack() (0);UNLINK_STACK()
#define ARGLEN()          (REG(fp)[-2])
#define ARG(x, n)         x = (REG(fp)[- (n) - 3])
#define NARGS(x, n)       x = (opts_stackalloc(regs, (P)tag((P)untag(REG(fp) - (n) - 3), loc_tag), \
				      YPib((char*)ARGLEN() - (n))))

IMPORTEXPORT extern P YLoptsG;
// IMPORTEXPORT extern P _YPcheck_call_types(REGS);
IMPORTEXPORT extern P YPPcheck_call_types(P);

#define YPcheck_call_types() YPPcheck_call_types(regs)
// #define YPcheck_call_types() _YPcheck_call_types(regs)

STATIC_NOT_GRT_C  INLINE P opts_stackalloc(REGS regs, P loc, P len)
{
  OBJECT opts;
  opts            = (OBJECT)(REG(sp));
  opts->class     = YLoptsG;
  opts->values[0] = loc;
  opts->values[1] = len;
  REGSET(sp, REG(sp) + 3);               // sizeof OBJECT in P's
  return opts;
}

// #define MAXFUNCOUNT (2<<28)
// #define FUNINC(x) (FUNCOUNT(fun) = MIN(FUNCOUNT(fun), MAXFUNCOUNT))
// #define FUNINC(x) (FUNCOUNT(fun)+=4, FUNCOUNT(fun))
#define FUNINC(x) (FUNCOUNT(fun)+=4)
// #define FUNCALL(fun) (FUNINC(fun), (FUNCODE(fun))(regs))
#define FUNCALL(fun) ((FUNCODE(fun))(regs))

STATIC_NOT_GRT_C  INLINE P _CALL0 (REGS regs, int check, P fun) {
  P   res;
  PUSH(0);
  PUSH(fun);
  if(check)
    YPcheck_call_types();
  res = FUNCALL(fun);
  DEC_STACK(2);
  return res;
}

STATIC_NOT_GRT_C  INLINE P _CALL1 (REGS regs, int check, P fun, P a1) {
  P   res;
  PUSH(a1);
  PUSH((P)1);
  PUSH(fun);
  if(check)
    YPcheck_call_types();
  res = FUNCALL(fun);
  DEC_STACK(3);
  return res;
}

STATIC_NOT_GRT_C  INLINE P _CALL2 (REGS regs, int check, P fun, P a1, P a2) {
  P   res;
  PUSH(a2);
  PUSH(a1);
  PUSH((P)2);
  PUSH(fun);
  if(check)
    YPcheck_call_types();
  res = FUNCALL(fun);
  DEC_STACK(4);
  return res;
}

STATIC_NOT_GRT_C  INLINE P _CALL3
    (REGS regs, int check, P fun, P a1, P a2, P a3) {
  P   res;
  PUSH(a3);
  PUSH(a2);
  PUSH(a1);
  PUSH((P)3);
  PUSH(fun);
  if(check)
    YPcheck_call_types();
  res = FUNCALL(fun);
  DEC_STACK(5);
  return res;
}

STATIC_NOT_GRT_C  INLINE P _CALL4
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
  res = FUNCALL(fun);
  DEC_STACK(6);
  return res;
}

STATIC_NOT_GRT_C INLINE P _CALL5
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
  res = FUNCALL(fun);
  DEC_STACK(7);
  return res;
}

STATIC_NOT_GRT_C  INLINE P _YPraw_call(REGS regs, P fun, P next_mets) {
  REGSET(next_methods, next_mets);
  return FUNCALL(fun);
}

STATIC_NOT_GRT_C  INLINE P _YPraw_met_call(REGS regs, P fun, P next_mets) {
  YPunlink_stack(); 
  *(REG(sp)-1) = fun;
  return _YPraw_call(regs, fun, next_mets);
}

#define YPraw_met_call(_fun, _next_mets) _YPraw_met_call(regs, _fun, _next_mets)

IMPORTEXPORT extern P _CALLN (REGS regs, int check, P fun, int n, ...);

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

#if !defined(_MSC_VER)
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
#else
IMPORTEXPORT EXTTVAR(msc_calln_regs);
IMPORTEXPORT extern P _MSC_CALLN (int check, P fun, int n, ...);
#define CALLN (TSET(msc_calln_regs, regs),_MSC_CALLN)
#define XCALL0(check, fun) _CALL0(REGSCREF(), check, fun)
#define XCALL1(check, fun, a1) _CALL1(REGSCREF(), check, fun, a1)
#define XCALL2(check, fun, a1, a2) _CALL2(REGSCREF(), check, fun, a1, a2)
#define XCALL3(check, fun, a1, a2, a3) _CALL3(REGSCREF(), check, fun, a1, a2, a3)
#define XCALL4(check, fun, a1, a2, a3, a4) _CALL4(REGSCREF(), check, fun, a1, a2, a3, a4)
#define XCALL5(check, fun, a1, a2, a3, a4, a5) _CALL5(REGSCREF(), check, fun, a1, a2, a3, a4, a5)
#define XCALLN (TSET(msc_calln_regs, REGSCREF()),_MSC_CALLN)
#define XXCALL0(check, fun) _CALL0(REGSREF(), check, fun)
#define XXCALL1(check, fun, a1) _CALL1(REGSREF(), check, fun, a1)
#define XXCALL2(check, fun, a1, a2) _CALL2(REGSREF(), check, fun, a1, a2)
#define XXCALL3(check, fun, a1, a2, a3) _CALL3(REGSREF(), check, fun, a1, a2, a3)
#define XXCALL4(check, fun, a1, a2, a3, a4) _CALL4(REGSREF(), check, fun, a1, a2, a3, a4)
#define XXCALL5(check, fun, a1, a2, a3, a4, a5) _CALL5(REGSREF(), check, fun, a1, a2, a3, a4, a5)
#define XXCALLN (TSET(msc_calln_regs,REGSREF()),_MSC_CALLN)
#endif

IMPORTEXPORT extern P YPcheck_type(P,P,P);
IMPORTEXPORT extern P YPfun_val_check_type(P, P, P);
IMPORTEXPORT extern P _YPfun_val_check_type(REGS, P, P);

#define check_type(x, t) YPcheck_type(regs, x, t)

#define YPnext_methods() Pnext_methods

#define QRET(x) \
  { return (x); }

#define RET(x) \
  { YPfun_val_check_type(regs, (x), Pfun); return (x); }

/* NON-LOCAL EXITS */

IMPORTEXPORT extern P do_exit (REGS regs );
IMPORTEXPORT extern P with_exit (P fun);
IMPORTEXPORT extern P with_cleanup (P body_fun, P cleanup_fun);

#define YPvm_with_exit with_exit
#define YPvm_with_cleanup with_cleanup

/* LITERALS */

#define DEFLIT(x)  static P x = PNUL;

/* GLOBAL VARIABLES */

IMPORTEXPORT extern P unbound ();

#define LITREF(x) x

// RTV'S ARE RUNTIME VARIABLES IMPLEMENTED IN TERMS OF C VARIABLES

#define RTVDEF(x, m, n)  IMPORTEXPORT P x = PNUL;
#define RTVEXT(x, m, n)  IMPORTEXPORT extern P x;
#define RTVREF(x)        x
#define RTVSET(x, v)     x = v
#define RTVCHKREF        RTVVARREF
//#define RTVCHKREF(x)     (((x) == PNUL) ? unbound() : (x))

IMPORTEXPORT extern P DYNFAB(P v);
#define DYNDEF(x, m, n)     IMPORTEXPORT extern P x; P x = PNUL;
#define DYNEXT(x, m, n)     IMPORTEXPORT extern P x;
#define DYNREF(x)           YPtelt(CREG(dynvars), x)
#define DYNSET(x, v)        YPtelt_setter(v, CREG(dynvars), x)
#define DYNDEFSET(x, v)     DYNFAB(&x); DYNSET(x, v);
#define YPdyn_var_val(x)           DYNREF(x)
#define YPdyn_var_val_setter(v, x) DYNSET(x, v)

IMPORTEXPORT extern P YPfab_dyn_var();

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

IMPORTEXPORT extern P YPpair (P,P);
IMPORTEXPORT extern P YPPlist(int num, ...);
// IMPORTEXPORT extern P YPint (P);
#define YPint(x) ((P)((((int)x)<<2)|1))   // TODO: KEEP IN SYNC WITH BOOT.GOO!!!
IMPORTEXPORT extern P YPchr (P);
IMPORTEXPORT extern P YPflo (P);
IMPORTEXPORT extern P YPsb (P);
IMPORTEXPORT extern P YPPsym (P);
IMPORTEXPORT extern P YPmacro (P,P,P);
IMPORTEXPORT extern P YPsig (P,P,P,P,P);
IMPORTEXPORT extern P YPfab_sig (P,P,P,P,P);
IMPORTEXPORT extern P YPfab_gen (P,P,P,P);
IMPORTEXPORT extern P YPfab_met (P,P,P,P,P,P);
IMPORTEXPORT extern P YPfab_met_inlineable (P,P,P,P,P,P);
IMPORTEXPORT extern P YPsrc_loc (P,P);

/* FUNCTIONS */

#define FUNFOR(x)         IMPORTEXPORT extern P x; extern P x##I(REGS)
#define LOCFOR(x)         static P x; static P x##I(REGS)

/* BOXES */

#define BOXVALOFFSET 0
#define BOXGET(x)    (YPprop_elt(x, (P)BOXVALOFFSET))
#define BOXPUT(v,x)  (YPprop_elt_setter(v, x, (P)BOXVALOFFSET))
IMPORTEXPORT extern P BOXFAB(P x);

#define YPvm_box_fab              BOXFAB
#define YPvm_box_val(x)           BOXGET(x)
#define YPvm_box_val_setter(v, x) BOXPUT(v, x)

/* FUNCTION CODE */

#define FUNCODEDEF(x)  P x##I (REGS regs)
#define LOCCODEDEF(x)  static P x##I (REGS regs)
#define FUNCODEREF(x)  (&(x##I))

/* SYMBOL TABLE */

IMPORTEXPORT extern P regsym (P* adr, char *modstr, char *namestr);
IMPORTEXPORT extern P YPdo_runtime_bindings (P fun);

/* EOF OBJECT */

STATIC_NOT_GRT_C INLINE P YPeof_objectQ (P x) { 
  return (P)(PLOG)((PINT)x == EOF); 
}

STATIC_NOT_GRT_C INLINE P YPeof_object () { 
  return (P)EOF; 
}

/* LOCATIVES */

STATIC_NOT_GRT_C  INLINE P YPloc_val (P loc) {
  P* ptr = (P*)((PADR)loc & ~tag_mask);
  return *ptr;
}

STATIC_NOT_GRT_C  INLINE P YPloc_val_setter (P val, P loc) {
  P* ptr = (P*)((PADR)loc & ~tag_mask);
  return *ptr = val;
}

#define YPloc_off(loc, off) (((P*)((PADR)(loc) & ~tag_mask))[(PINT)off])
#define YPloc_off_setter(val, loc, off) (((P*)((PADR)(loc) & ~tag_mask))[(PINT)off] = val)

/* APPS */

IMPORTEXPORT extern P YPapp_filename ();
IMPORTEXPORT extern P YPapp_args ();

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
IMPORTEXPORT extern P YPprocess_module(
  /* (mod_info <loc>) */
  P mod_info,

  /* ((mod <module>) (name <str>)
      (from-mod <module>) (original-name <str>) => <any>) */
  P import_fun,

  /* ((mod <module>) (name <str>) (as-name <str>) => <any>) */
  P export_fun
);

IMPORTEXPORT extern P YPbuild_runtime_modules(
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

IMPORTEXPORT extern P YevalSast_evalYPbinding_value(P x);
IMPORTEXPORT extern P YevalSast_evalYPbinding_value_setter(P v, P x);

typedef struct {
  PSTR  var_name;    
  PSTR  mod_name;    
  P     binding;    
} DLVAR_DAT, *DLVAR;

STATIC_NOT_GRT_C INLINE P YevalSast_evalYPdlvar_nam(P x) { 
  return (((DLVAR)(x))->var_name); 
}
STATIC_NOT_GRT_C INLINE P YevalSast_evalYPdlvar_mod(P x) {
  return (((DLVAR)(x))->mod_name);
}
STATIC_NOT_GRT_C INLINE P YevalSast_evalYPdlvar(P x) {
  return (((DLVAR)(x))->binding);
}
STATIC_NOT_GRT_C INLINE P YevalSast_evalYPdlvar_setter(P v, P x) {
  return ((((DLVAR)(x))->binding)=(v));
}

#if defined(_MSC_VER)
#define DEFAULT_GOO_ROOT "."
#endif
#define YgooSsystemYPdefault_goo_root() DEFAULT_GOO_ROOT

IMPORTEXPORT extern P YPtime ();

IMPORTEXPORT extern P YPlit (P n);

#endif
