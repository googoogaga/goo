//// Copyright 2002, Jonathan Bachrach.  See file TERMS.

#ifdef _CYGWIN32__
#define WIN32
#endif

#define IN_GRT_C
#include "grt.h"
#if !defined(MSWIN32) && !defined(_MSC_VER)
#include <sys/types.h>
#include <sys/time.h>
#include <sys/resource.h>
#endif

#if defined(_MSC_VER)
#include <stdlib.h>
#include <sys/stat.h>
#include <direct.h>
#include <signal.h>
#include <process.h>
#endif

extern P Ynil;

/* DEBUGGING */

P YPbreak(char* message) {
#if defined(macintosh)
  Debugger();
#elif defined(WIN32)
  extern void __stdcall DebugBreak(void);
  DebugBreak();
#else
  int *ptr = (int*)0;
  printf("%s\n", message);
  *ptr = 0; /* generate a memory fault */
#endif
  return PNUL;
}

P unbound () {
  //  YPbreak("unbound binding");
  return PNUL;
}

extern void println (P adr);

P YPinvoke_debugger(P condition) {
  printf("ERROR: ");
  println(condition);
  YPbreak("");
}

/* STACK */

extern P YLmetG;
extern P YLgenG;
extern P YLlstG;
extern P YPpair (P, P);
extern P Yunknown_function_error;

// FIXME: gives args backwards. Rewrite in goo.
P YPdo_stack_frames (P fun) {
  DEFREGS();
  P* xfp = REG(fp);
  while (xfp != REG(stack)) {
    P*  nfp     = *xfp;
    P   args    = Ynil;
    P   f       = *(--xfp); 
    PINT numargs = (PINT)(*(--xfp));
    PINT i;
    for (i = 0; i < numargs; i++)
      args = YPpair(*(--xfp), args);
    CALL2(1, fun, f, args);
    xfp = nfp;
  }
  return YPfalse;
}

/* OBJECT */

unsigned long nallocd  = 0; /* BYTES TOTAL ALLOCATED */
unsigned long nsallocd = 0; /* BYTES STACK ALLOCATED */

int any_stack_allocp = 1;

INLINE P _allocate (unsigned long size, int atomicp) {
  nallocd += size;
  if (size > 100000000)
    YPbreak("ALLOCATE: BAD SIZE");
  if (any_stack_allocp) {
    DEFREGS();
    if (REG(stack_allocp)) {
      P res      = (P)REG(sp);
      PINT nwords = ((size - 1) / sizeof(P)) + 1;
      nsallocd  += size;
      REGSET(sp, REG(sp)+nwords);
      /* bzero(res, size); */
      return res;
    }
  } 
  if (atomicp)
    return((P)GC_malloc_atomic((size_t)size));
  else
    return((P)GC_malloc((size_t)size));
}  

INLINE P allocate (unsigned long size) {
  return _allocate(size, 0);
}

INLINE P allocate_atomic (unsigned long size) {
  return _allocate(size, 1);
}

INLINE P stack_allocate (unsigned long size) {
  DEFREGS();
  P res;
  int old_stack_allocp = REG(stack_allocp); REGSET(stack_allocp, 1);
  res = allocate(size);
  REGSET(stack_allocp, old_stack_allocp);
  return res;
}

#define OBJECT_DATA_SIZE (sizeof(OBJECT_DATA))

INLINE P YPraw_alloc (P size) {
  return allocate((unsigned long)size*(sizeof(P)));
}

INLINE P YPobject_of (P class, P size) {
  PINT i;
  P obj = allocate(((PINT)size + 1) * sizeof(P));
  for (i = 0; i < (PINT)size; i++)
    YPprop_elt_setter(Ynul_prop, obj, (P)i);
  YPobject_class_setter(class, obj);
  return obj;
}

extern P YPclass_prop_len(P);

INLINE P YPclone (P x) {
  PINT i, size;
  P   c, y;
  c    = YPobject_class(x);
  size = YPiu(YPclass_prop_len(c));
  y    = YPobject_of(c, (P)size);
  for (i = 0; i < (PINT)size; i++)
    YPprop_elt_setter(YPprop_elt(x, (P)i), y, (P)i);
  return y;
}

/* DEBUG */

P YPPROP_ELT (P x, P i) {
  return YPprop_elt(x, i);
}

P YPPROP_ELT_SETTER (P z, P x, P i) {
  return YPprop_elt_setter(z, x, i);
}

/* REP */

extern P YLrepG;

P YPPrfab (P len, P fill) {
  PINT i;
  P obj = allocate(((PINT)len + 2) * sizeof(P));
  YPprop_elt_setter(len, obj, (P)REP_LEN_OFF);
  for (i = 0; i < (PINT)len; i++)
    YPprop_elt_setter(fill, obj, (P)(i + REP_DAT_OFF));
  YPobject_class_setter(YLrepG, obj);
  return obj;
}
  
/* TUP */

extern P YLtupG;

P YPPtfab (P len, P fill) {
  PINT i;
  P obj = allocate(((PINT)len + 2) * sizeof(P));
  YPprop_elt_setter(len, obj, (P)REP_LEN_OFF);
  for (i = 0; i < (PINT)len; i++)
    YPprop_elt_setter(fill, obj, (P)(i + REP_DAT_OFF));
  YPobject_class_setter(YLtupG, obj);
  return obj;
}
  
/* STR */

extern P YLstrG;

P YPPsfab (P len, P fill) {
  PINT i;
  P obj = allocate_atomic((2) * sizeof(P) + ((PINT)len + 1)*sizeof(PCHR));
  PSTR str = (PSTR)YPrep_dat(obj);
  YPprop_elt_setter(len, obj, (P)REP_LEN_OFF);
  for (i = 0; i < (PINT)len; i++)
    str[i] = (PCHR)(PINT)fill;
  str[(PINT)len] = (PCHR)0;
  YPobject_class_setter(YLstrG, obj);
  return obj;
}
  
P YPsb (P pstr) {
  PSTR str = (PSTR)pstr;
  PINT len = strlen(str);
  P obj   = allocate_atomic((2) * sizeof(P) + ((PINT)len + 1)*sizeof(PCHR));
  PSTR dat = (PSTR)YPrep_dat(obj);
  YPprop_elt_setter((P)len, obj, (P)REP_LEN_OFF);
  strcpy(dat, str);
  YPobject_class_setter(YLstrG, obj);
  return obj;
}  

P YPsb_with_len (P pstr, PINT len) {
  PSTR str = (PSTR)pstr;
  PINT i;
  P obj   = allocate_atomic((2) * sizeof(P) + ((PINT)len + 1)*sizeof(PCHR));
  PSTR dat = (PSTR)YPrep_dat(obj);
  YPprop_elt_setter((P)len, obj, (P)REP_LEN_OFF);
  memcpy(dat, str, len);
  dat[len] = 0;
  YPobject_class_setter(YLstrG, obj);
  return obj;
}  

/* This is a lot more correct than calling YPsb directly.
** XXX - Fix uses of YPsb. */
static P cstr_to_pstr (char *cstr) {
  size_t buflen;
  char *raw_pstr;
  buflen = strlen(cstr) + 1;
  raw_pstr = allocate_atomic(strlen(cstr));
  strncpy(raw_pstr, cstr, buflen);
  return YPsb(raw_pstr);
}

/* CLOSURES */

ENV envnul = (ENV)PNUL;

unsigned long env_nallocd = 0;

INLINE P ENVFAB (int n) {
  unsigned long snallocd = nallocd;
  ENV env = allocate(sizeof(ENV_DATA) + ((n - 1) * sizeof(P)));
  env_nallocd += nallocd - snallocd;
  env->size = n;
  return env;
}

P YPvm_fun_env_fab (P n) { return ENVFAB((int)n); }

P FABENV (int size, ...) {
  int i;
  ENV env = ENVFAB(size);
  va_list ap; va_start(ap, size);
  for (i = 0; i < size; i++)
    ENVPUT((P)va_arg(ap, P), env, i);
  return (P)env;
}

P FUNINIT (P fun, int n, ...) {
  int i;
  va_list ap; va_start(ap, n);
  for (i = 0; i < n; i++)
    FUNENVGET(fun, i) = va_arg(ap, P);
  va_end(ap);
  return fun;
}

unsigned long fun_nallocd = 0;

extern P YPib(P);
extern P YPclass_prop_len_setter(P, P); /* TODO: TEMP */

INLINE P FUNSHELL (int d, P x, int n) {
  DEFREGS();
  P   fun;
  unsigned int snallocd = nallocd;
  int old_stack_allocp = REG(stack_allocp); REGSET(stack_allocp, d);
  YPclass_prop_len_setter(YPib((P)6), YLmetG);
  fun = YPclone(x);
  fun_nallocd += nallocd - snallocd;
  FUNENVSETTER(ENVFAB(n), fun);
  REGSET(stack_allocp, old_stack_allocp);
  return fun;
}

P FUNFAB (P x, int n, ...) {
  int i;
  va_list ap; 
  unsigned long snallocd = nallocd;
  P   fun;
  YPclass_prop_len_setter(YPib((P)6), YLmetG);
  fun = YPclone(x);
  FUNENVSETTER(ENVFAB(n), fun);
  fun_nallocd += nallocd - snallocd;
  va_start(ap, n);
  for (i = 0; i < n; i++)
    FUNENVGET(fun, i) = va_arg(ap, P);
  va_end(ap);
  return fun;
}

/* CALLS */

// INLINE OBJECT STACK_PAIR(P h, P t) {
//   OBJECT pair     = (OBJECT)stack_allocate(3 * sizeof(P));
//   pair->class     = YLlstG;
//   YPprop_elt_setter(h, pair, (P)0);
//   YPprop_elt_setter(t, pair, (P)1);
//   return pair;
// }

P _CALLN (REGS regs, int check, P fun, int n, ...) {
  int i;
  P   res;
  va_list ap; va_start(ap, n);
  INC_STACK(n);
  
  for (i = 0; i < n; i++)
    REG(sp)[- i - 1] = va_arg(ap, P);

  va_end(ap);
  PUSH((P)(PINT)n);
  PUSH(fun);
  if(check)
    YPcheck_call_types();
  res = (FUNCODE(fun))(regs);
  DEC_STACK(n+2);
  return res;
}

/* NLX */

void print_frame_count () {
  DEFREGS();
  int i;
  UNWIND_PROTECT_FRAME ptr = REG(current_unwind_protect_frame);
  for (i = 0; ptr != REG(top_unwind_protect_frame); i++)
    ptr = ptr->previous_unwind_protect_frame;
  printf("FRAME COUNT = %d\n", i);
}

extern P YPmet (P, P, P, P, P, P);
extern P YPsig (P, P, P, P, P, P);

P do_exit (REGS regs) {
  P value;
  BIND_EXIT_FRAME frame = (BIND_EXIT_FRAME)FUNENVGET(FUNREG(), 0);
  LINK_STACK()
  ARG(value, 0);
  UNLINK_STACK()
  
  // handle all unwinds. If any unwind handler calls a non-local exit
  // itself, it may longjump out of here.
  while (REG(current_unwind_protect_frame) 
	  != frame->present_unwind_protect_frame) {
    UNWIND_PROTECT_FRAME upf = REG(current_unwind_protect_frame);
    REGSET(current_unwind_protect_frame,
	   REG(current_unwind_protect_frame)->previous_unwind_protect_frame);
    CALL0(1, upf->cleanup_fun);
  }
  // do the jump
  frame->value = value;
  REGSET(sp, frame->sp);
  REGSET(fp, frame->fp);
  REGSET(vsp, frame->vsp);
  REGSET(vfp, frame->vfp);
  REGSET(vpc, frame->vpc);
  REGSET(vfn, frame->vfn);
  REGSET(vnm, frame->vnm);
  longjmp(frame->destination, 1);
  return(PNUL); /* NEVER RETURNS BUT KEEPS COMPILER HAPPY */
}


P MAKE_BIND_EXIT_FRAME () {
  DEFREGS();
  P *osp  = REG(sp),  *ofp  = REG(fp);
  P *ovsp = REG(vsp), *ovfp = REG(vfp);
  P *ovpc = REG(vpc), *ovfn = REG(vfn), *ovnm = REG(vnm);
  BIND_EXIT_FRAME frame
    = (BIND_EXIT_FRAME)stack_allocate(sizeof(BIND_EXIT_FRAME_DATA));
  frame->sp  = osp;  frame->fp  = ofp;
  frame->vsp = ovsp; frame->vfp = ovfp;
  frame->vpc = ovpc; frame->vfn = ovfn; frame->vnm = ovnm;
  frame->present_unwind_protect_frame = REG(current_unwind_protect_frame);
  return((P)frame);
}

extern P YLanyG;

// creates non-local exit label
P with_exit (P fun) {
  DEFREGS();
  BIND_EXIT_FRAME frame;
  P               exit;
  int old_stack_allocp = REG(stack_allocp); REGSET(stack_allocp, 1);

  frame = MAKE_BIND_EXIT_FRAME();
  exit  = YPmet(&do_exit, YPfalse,
		YPsig(Ynil, YPpair(YLanyG, Ynil), 
		      YPfalse, YPib((P)1), YPfalse, Ynil),
		FABENV(1, frame), Ynul, YPfalse);
  REGSET(stack_allocp, old_stack_allocp);
  if (!setjmp(frame->destination))
    return CALL1(1, fun, exit);
  else
    return frame->value;
}

// creates finally handler

P with_cleanup (P body_fun, P cleanup_fun) {
  DEFREGS();
  P value = YPfalse;
  UNWIND_PROTECT_FRAME frame 
    = (UNWIND_PROTECT_FRAME)stack_allocate(sizeof(UNWIND_PROTECT_FRAME_DATA));
  /* print_frame_count(); */
  frame->previous_unwind_protect_frame = REG(current_unwind_protect_frame);
  frame->cleanup_fun                   = cleanup_fun;
  
  REGSET(current_unwind_protect_frame, frame);
  value = CALL0(1, body_fun);
  REGSET(current_unwind_protect_frame,
	 REG(current_unwind_protect_frame)->previous_unwind_protect_frame);
  
  CALL0(1, cleanup_fun);
  return value;
}

/* BOXES */

unsigned long box_nallocd = 0;

extern P YLboxG;

INLINE P BOXFAB(P x) {  
  unsigned long snallocd = nallocd;
  P* box = (P*)allocate(2 * sizeof(P));
  box_nallocd += nallocd - snallocd;
  YPobject_class_setter(YLboxG, box);
  BOXPUT(x, box);
  return box;
}

/* SYMBOL TABLE */

extern P YPclass_name(P);
extern P YPsym_nam(P);
extern P YPmet_name(P);

char* type (P adr) {
  if (adr == PNUL)
    return "UNBOUND";
  else {
    int tag = tag_bits(adr);
    P class;
    switch (tag) {
    case adr_tag:
      class = YPobject_class(adr);
      if (class == PNUL)
	return "UNBOUND";
      else if (tag_bits(class) != adr_tag)
	  return "BOGUS";
      else {
	P class_name = (P)YPsym_nam(YPclass_name(class));
	if (class_name == NULL)
	  return "DYN";
	else
	  return (char*)YPsu(class_name);
      }
    case int_tag:
      return "<fixnum>";
    case chr_tag:
      return "<chr>";
    case loc_tag:
      return "<loc>";
    }
  }
}

#define MIN(x,y) ((x)<(y) ? (x) : (y))

extern void print_kind(P, int, int);

void print (P adr) {
  print_kind(adr, 0, 0);
}

int max_depth  = 3;
int max_length = 10;

void print_kind (P adr, int prettyp, int depth) {
  if (depth < max_depth) {
  char* typename = type(adr);
  int   t        = tag_bits(adr);
  if (adr == 0x0 || strcmp(typename, "UNBOUND") == 0) {
    printf("UNBOUND"); return;
  } else if (adr == YPfalse) {
    printf("#f"); return;
  } else if (adr == YPtrue) {
    printf("#t"); return;
  } else if (adr == Ynil) {
    printf("()"); return;
  } 
  switch (t) {
  case int_tag:
    printf("%d", untag(adr)); return;
  case chr_tag:
    printf("%c", untag(adr)); return;
  case loc_tag:
    printf("&0x%lx", tag((P)untag(adr), 0)); return;
  default:
    break;
  }
  if (strcmp(typename, "<fixnum>") == 0) {
    printf("%ld", (PINT)YPprop_elt(adr, (P)0));
  } else if (strcmp(typename, "<chr>") == 0) {
    printf("%c", (char)(PINT)YPprop_elt(adr, (P)0));
  } else if (strcmp(typename, "<loc>") == 0) {
    printf("&0x%lx", YPprop_elt(adr, (P)0));
  } else if (strcmp(typename, "<flo>") == 0) {
    INTFLO x;
    x.i = (PINT)YPprop_elt(adr, (P)0);
    printf("%f", x.f);
  } else if (strcmp(typename, "<sym>") == 0) {
    printf("%s", YPsu(YPprop_elt(adr, (P)0)));
  } else if (strcmp(typename, "<class>") == 0) {
    print_kind(YPclass_name(adr), 0, depth);
  } else if (strcmp(typename, "<str>") == 0) {
    printf("\""); printf("%s", YPsu(adr)); printf("\"");
  } else if (strcmp(typename, "<lst>") == 0) {
    P ptr; int j;
    printf("("); 
    for (ptr = adr, j = 0; ptr != Ynil; ptr = YPprop_elt(ptr, (P)1), j++) {
      if (j != 0) printf(" ");
      if (j < max_length) {
        print_kind(YPprop_elt(ptr, (P)0), 0, depth + 1); 
      } else {
	printf("..."); break;
      }
    }
    printf(")");
  } else if (strcmp(typename, "<tup>") == 0) {
    int j, n;
    n = (PINT)YPtlen(adr);
    printf("#("); 
    for (j = 0; j < n; j++) {
      if (j != 0) printf(" ");
      if (j < max_length) {
	print_kind(YPtelt(adr, j), 0, depth + 1); 
      } else {
	printf("..."); break;
      }
    }
    printf(")");
  } else if (strcmp(typename, "<rep>") == 0) {
    int j, n;
    n = (PINT)YPrlen(adr);
    printf("#<"); 
    for (j = 0; j < n; j++) {
      if (j != 0) printf(" ");
      if (j < max_length) {
	print_kind(YPrelt(adr, j), 0, depth + 1); 
      } else {
	printf("..."); break;
      }
    }
    printf(">");
  } else if (strcmp(typename, "<opts>") == 0) {
    OBJECT p = (OBJECT)adr;
    int j, n;
    P* v = (P*)YPtag(YPuntag(p->values[0]), 0); // TODO: USE ALIASES
    n = (PINT)YPuntag(p->values[1]);
    printf("#<"); 
    for (j = 0; j < n; j++) {
      if (j != 0) printf(" ");
      if (j < max_length) {
	print_kind(v[-j], 0, depth + 1); 
      } else {
	printf("..."); break;
      }
    }
    printf(">");
  } else if (strcmp(typename, "<met>") == 0) {
    ENV env; int j, n; 
    printf("(MET ");
	print_kind((P)YPmet_name(adr), 0, depth + 1);
    print_kind(FUNSPECS(adr), 0, depth + 1);
    /*
    env = (ENV)YPprop_elt(adr, (P)FUNENVOFFSET);
    n   = env->size;
    if (n > 0) {
      printf(" [");
      for (j = 0; j < n; j++) {
	P val = ENVGET(env, j);
	if (j != 0) printf(" ");
	if (j < max_length) {
	  if (val == adr)
	    printf("SELF");
	  else
	    print_kind(val, 0, depth + 1);
	} else {
	  printf("..."); break;
	}
      }
      printf("]");
    }
    */
    printf(" 0x%lx)", adr);
  } else if (strcmp(typename, "<gen>") == 0) {
    printf("(GEN ");
	print_kind((P)YPmet_name(adr), 0, depth+1);
    print_kind(FUNSPECS(adr), 0, depth + 1);
    printf(" 0x%lx)", adr);
  } else if (strcmp(typename, "<file-out-port>") == 0) {
    printf("(OUT-PORT 0x%lx)", adr);
  } else if (strcmp(typename, "<file-in-port>") == 0) {
    printf("(IN-PORT 0x%lx)", adr);
  } else {
    int i;
    P c       = YPobject_class(adr);
    int size  = (int)YPiu(YPclass_prop_len(c));
    int below = MIN(size, 10);
    printf("(%s", typename);
    for (i = 0; i < below; i++) {
      printf(" "); 
      if (i < max_length) {
	print_kind(YPprop_elt(adr, (PINT)i), 0, depth + 1);
      } else {
	printf("..."); break;
      }
    }
    printf(" 0x%lx)", adr);
  }} else {
    printf("<>");
  }
}

void println (P adr) {
  print_kind(adr, 1, 0); printf("\n");
}

void prtobj (P adr) {
  if (adr == 0)
    printf("NUL");
  else {
    char* typename = type(adr);
    printf("0x%lx", adr);
    if (typename) 
      printf(" ISA %s", typename);
  }
}
void desprop (int i, P adr) {
  printf("%d: ", i);
  prtobj(adr);
  printf("\n");
}

void desobj (P adr) {
  int i;
  if (adr == PNUL) {
    printf("PNUL\n");
  } else {
    char* typename = type(adr);
    if ((strcmp(typename, "<fixnum>") == 0)|
	(strcmp(typename, "<chr>") == 0)|
	(strcmp(typename, "<loc>") == 0)|
	(strcmp(typename, "<flo>") == 0)|
	(strcmp(typename, "<str>") == 0)|
	(strcmp(typename, "<file-in-port>") == 0)|
	(strcmp(typename, "<file-out-port>") == 0)) {
      printf("1: "); print(adr); printf("\n");
    } else {
      int metp  = strcmp(typename, "<met>") == 0;
      int genp  = strcmp(typename, "<gen>") == 0;
      int funp  = metp | genp;
      P c       = YPobject_class(adr);
      int size  = (int)YPiu(YPclass_prop_len(c));
      int from  = funp ? 1 : 0;
      int below = MIN(metp ? size - 1 : size, 10);
      for (i = from; i < below; i++)
	desprop(i, YPprop_elt(adr, (PINT)i));
      if (metp) {
	int j;
	ENV env = (ENV)YPprop_elt(adr, (P)FUNENVOFFSET);
	printf("ENV SIZE %d\n", env->size);
	for (j = 0; j < env->size; j++, i++)
	  desprop(i, ENVGET(env, j));
      }
    }
  }
}

void des (P adr) {
  int tag  = tag_bits(adr);
  if (tag == adr_tag) {
    P class = YPobject_class(adr);
    printf("CLASS: %s", YPsu(YPclass_name(class)));
    desobj(class);
    printf("OBJECT: ");
    desobj(adr);
  } else
    desobj(adr);
}

/* KEYBOARD INTERRUPT HANDLING */

#include <signal.h>

extern P Ykeyboard_interrupt;
void setup_keyboard_interrupts (void);

#if defined(HAVE_POSIX_THREAD)
extern pthread_t main_thread;
#endif

void keyboard_interrupt (int value) {
#if !defined(_MSC_VER)
  sigset_t set;
  sigemptyset(&set);
  sigaddset(&set, SIGINT);
  sigprocmask(SIG_UNBLOCK, &set, NULL);
#endif

#ifdef HAVE_POSIX_THREAD
  if (pthread_self() == main_thread)
#endif 
    XXCALL0(1, Ykeyboard_interrupt);
#ifdef HAVE_POSIX_THREAD
  else
    pthread_kill(main_thread, SIGINT);
#endif 
}

void setup_keyboard_interrupts (void) {
  signal(SIGINT, keyboard_interrupt);
}

int    Pargc;
char** Pargv;

P YPapp_filename () {
  char* filename = Pargv[0];
#if defined(_WIN32) || defined(WIN32) || defined(WINNT)
  { int i;
    for (i = 0; i < strlen(filename); i++) 
      if (filename[i] == '/')
	filename[i] = '\\';
  }
#endif
  return YPsb(filename);
}

P YPapp_args () {
  int i;
  P   args = Ynil;
  for (i = 1; i < Pargc; i++) 
    args = YPpair(YPsb(Pargv[i]), args);
  return args;
}

#define NO_UNEXEC
#if defined(WIN32) || defined(_MSC_VER)
#define NO_UNEXEC
#endif

extern P Yerror;

P YPunexec(P name) {
#if defined(_MSC_VER)
  _CALL1(REGSREF(),1, Yerror, YPsb("Cannot unexec."));
#else
#ifdef NO_UNEXEC
  XXCALL1(1, Yerror, YPsb("Cannot unexec."));
#else
  unexec((char *)name, YPsu(YPapp_filename()), 0, 0, 0);
#endif
#endif
  return YPfalse;
}

P YevalSg2cYPprint_cpu_usage(char *message) {
	return;
/*
  struct rusage usage;
  getrusage(RUSAGE_SELF, &usage);
  printf("%20s %d.%06.6d %d.%06.6d\n", message,
	 usage.ru_utime.tv_sec, usage.ru_utime.tv_usec,
	 usage.ru_stime.tv_sec, usage.ru_stime.tv_usec);
  return YPfalse;
  //  return YPpair(YPib(usage.ru_utime), YPpair(YPib(*(void**)&usage.ru_stime), Ynil));
*/
}

#if !defined(_MSC_VER)
struct timeval get_rusage() {
  struct rusage usage;
  getrusage(RUSAGE_SELF, &usage);
  return usage.ru_utime;
}
#endif

P YPPlist(int num, ...) {
  if (num == 0)
    return Ynil;
  else {
    int i;
    P lst = YPpair(Ynil, Ynil);
    P nxt = lst;
    va_list ap; va_start(ap, num);
    for (i = 0; i < num; i++) {
      P now = nxt;
      YPhead_setter(va_arg(ap, P), now);
      if (i < (num - 1)) {
        nxt = YPpair(Ynil, Ynil);
        YPtail_setter(nxt, now);
      }
    }
    return lst;
  }
}

P YPprocess_module(
    P mod_info,
    P import_fun,
    P export_fun) {

  DEFREGS();
  MODULE_INFO *module_info = (MODULE_INFO*)(tag((P)untag(mod_info), 0));
  P modobj = module_info->module_object;
  IMPORT_INFO *import_info;
  EXPORT_INFO *export_info;

  /* Import bindings into this module. */
  for (import_info = module_info->imports;
       import_info->variable_name;
       import_info++) {
    P name      = YPsb(import_info->variable_name);
    P orig_name = import_info->original_name;
    CALL4(0, import_fun, modobj, name,
	  import_info->module_info->module_object,
	  (orig_name == NULL) ? name : YPsb(orig_name));
  }

  /* Export bindings from this module. */
  for (export_info = module_info->exports;
       export_info->variable_name;
       export_info++) {
    P name   = YPsb(export_info->variable_name);
    P exp_as = export_info->exported_as;
    CALL3(0, export_fun, modobj, name, (exp_as == NULL) ? name : YPsb(exp_as));
  }
  return PNUL;
}  

static void process_runtime_module_shell
    (MODULE_INFO *module_info, P create_module_fun, P use_module_fun,
     P runtime_binding_fun, P other_binding_fun, P dynamic_binding_fun) {
  DEFREGS();
  P modobj;
  USE_INFO *use_info;
  BINDING_INFO *binding_info;

  /* Don't initialize ourself more than once. */
  if (module_info->module_object)
    return;
  
  /* Create our own module object. */
  module_info->module_object =
    CALL2(0, create_module_fun, YPsb(module_info->module_name),
	  (P)YPlb(module_info));
  modobj = module_info->module_object;

  /* Recursively initialize all the modules we depend upon, and mark
  ** them as used. */
  for (use_info = module_info->uses; use_info->module_info; use_info++) {
    process_runtime_module_shell
      (use_info->module_info, create_module_fun, use_module_fun,
       runtime_binding_fun, other_binding_fun, dynamic_binding_fun);
    CALL2(0, use_module_fun, modobj, use_info->module_info->module_object);
  }

  /* Define bindings in this module. */
  for (binding_info = module_info->bindings;
       binding_info->variable_name;
       binding_info++)
  {
    switch (binding_info->kind) {
    case DVAR: 
      CALL3(0, dynamic_binding_fun, modobj,
	    YPsb(binding_info->variable_name), 
	    (P)YPlb((P)binding_info->location));
      break;
    case PVAR:
      CALL2(0, other_binding_fun, modobj,
	    YPsb(binding_info->variable_name));
      break;
    case CVAR:
      CALL3(0, runtime_binding_fun, modobj,
	    YPsb(binding_info->variable_name),
	    (P)YPlb((P)binding_info->location));
      break;
    }
    /*
    if (binding_info->location == DYNNUL) {
      DEFDYNVAR(key); 
      CALL3(0, dynamic_binding_fun, modobj,
	    YPsb(binding_info->variable_name), (P)YPlb(key));
    } else if (binding_info->location)
      CALL3(0, runtime_binding_fun, modobj,
	    YPsb(binding_info->variable_name),
	    (P)YPlb((P)binding_info->location));
    else
      CALL2(0, other_binding_fun, modobj,
	    YPsb(binding_info->variable_name));
    */
  }
}

P YPbuild_runtime_modules(
    P create_module_fun, 
    P use_module_fun,
    P runtime_binding_fun,    
    P other_binding_fun,
    P dynamic_binding_fun)
{
  process_runtime_module_shell
    (goo_toplevel_module_info, create_module_fun, use_module_fun,
     runtime_binding_fun, other_binding_fun, dynamic_binding_fun);
  return YPfalse;
}

P YPfab_dyn_var() {
  T* key = (T*)allocate(sizeof(T));
  DYNFAB(key);
  return (P)key;
}

/* TODO: GET THIS WORKING ON WINDOWS */
P YgooSsystemYPpid () {
  return (P)(PINT)getpid();
}

/* OVERALL INITIALIZATION */

void* _DYNAMIC;

extern P YPTstart_running_atT;

DEFTVAR(goo_thread);
DEFTVAR(tregs);
REGS main_regs = (REGS)0;
#ifdef HAVE_POSIX_THREAD
pthread_t main_thread = (pthread_t)0;
#endif

#define MAX_DYNVARS 256
int dynvar_key = 0; 

// NO LOCK NEEDED BECAUSE DDV OCCURS ON ONE THREAD ONLY
// TODO: PROPAGATE NEW VAR VALS TO EXISTING THREADS
// TODO: EXTEND WHEN OVERFLOW

P DYNFAB(P v) {
  int* key = (int*)v; 
  *key = dynvar_key++;
  if (dynvar_key > MAX_DYNVARS)
    XXCALL1(1, Yerror, YPsb("TOO MANY DYNAMIC VARIABLES."));
  return (P)*key;
}

REGS YPfab_regs() {
  REGS regs;
  int  old_any_stack_allocp = any_stack_allocp;
  any_stack_allocp = 0;
  regs = (REGS)allocate(sizeof(REGS_DATA));
  REGSET(stack, (P*)allocate(MAX_STACK_SIZE * sizeof(P)));
  REGSET(fp, REG(stack));
  REGSET(sp, REG(stack));
  REGSET(top_unwind_protect_frame, allocate(sizeof(UNWIND_PROTECT_FRAME_DATA)));
  REGSET(current_unwind_protect_frame, REG(top_unwind_protect_frame));
  REGSET(stack_allocp, 0);
  REGSET(stack_checkp, 1);
  REGSET(vfp, YPib((P)0));
  REGSET(vsp, YPib((P)0));
  REGSET(dynvars, YPPtfab((P)MAX_DYNVARS, YPfalse));
  if (main_regs != (REGS)0) {
    int i;
    P vars     = REG(dynvars);
    P mainvars = main_regs->dynvars;
    for (i = 0; i < dynvar_key; i++)
      YPtelt_setter(YPtelt(mainvars, i), vars, i);
  }
  any_stack_allocp = old_any_stack_allocp;
  return regs;
}

void YPinit_world(int argc, char* argv[]) {
  static int need_init = 1;
  Pargc   = argc;
  Pargv   = argv;
  if(!need_init)
  {
    /*
    stdin = fdopen(0, "r");
    stdout = fdopen(1, "a");
    setvbuf(stdout, NULL, _IOLBF, 0);
    stderr = fdopen(2, "a");
    setvbuf(stderr, NULL, _IONBF, 0);
    */
    XXCALL0(1, YPTstart_running_atT); // TODO: WHAT IS THIS FOR?
    exit(0);
  }
  // GC_enable_incremental();

  GC_init();
#if !defined(HAVE_THREAD_LOCAL_VARIABLE)
#if defined(HAVE_POSIX_THREAD)
  pthread_key_create(&tregs, NULL);
  pthread_key_create(&goo_thread, NULL);
#elif defined(MSVC_THREAD)
  tregs = TlsAlloc();
  goo_thread = TlsAlloc();
#endif
#endif
  main_regs = YPfab_regs();
  REGSSET(main_regs);
  envnul  = ENVFAB(0);
#ifdef HAVE_POSIX_THREAD
  main_thread = pthread_self();
#endif
  setup_keyboard_interrupts();
  need_init = 0;
}


