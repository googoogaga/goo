/* Copyright (c) 2001 Jonathan Bachrach */

#include "prt.h"

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

extern void println (P adr);

P YPinvoke_debugger(P condition) {
  printf("ERROR: ");
  println(condition);
  YPbreak("");
}

/* TAG */

INLINE int tag_bits (P adr) {
  return (PADR)adr & tag_mask;
}

INLINE long untag (P adr) {
  return (PADR)adr >> 2;
}

INLINE long tag (P adr, int tag) {
  return (PADR)adr << 2 | tag;
}

/* OBJECT */

unsigned long nallocd = 0;

INLINE P allocate (unsigned long size) {
  nallocd += size;
  if (size > 100000000)
    YPbreak("ALLOCATE: BAD SIZE");
  return((P)GC_malloc((size_t)size));
}  

#define OBJECT_DATA_SIZE (sizeof(OBJECT_DATA))

INLINE P YPmake_object (void) {
  return allocate(OBJECT_DATA_SIZE);
}

INLINE P YPraw_alloc (P size) {
  return allocate((unsigned long)size*(sizeof(P)));
}

P YPmake_object_values (P size) {
  int i;
  VALUES vs
    = (VALUES)allocate(VALUES_SIZE(size));
  for (i = 0; i < (int)size; i++)
    vs->values[i] = Ynul_slot;
  vs->size
    = (PINT)size;
  return vs;
}

INLINE P YPinstall_object_values (P dst, P size) {
  VALUES vs = YPmake_object_values(size);
  YPobject_values_setter(vs, dst);
  return PNUL;
}

P YPadjust_object_values_size (P dst, P new_size, P src) {
  int i;
  VALUES ovs = YPobject_values(src);
  VALUES nvs = YPmake_object_values(new_size);
  YPobject_values_setter(nvs, dst);
  if (ovs != PNUL && (PINT)new_size > 0) {
    for (i = 0; i < (PINT)YPobject_values_size(ovs); i++)
      nvs->values[i] = ovs->values[i];
  }
  return PNUL;
}

P YPclone (P x) {
  P y = YPmake_object();
  YPobject_traits_setter(YPobject_traits(x), y);
  YPadjust_object_values_size(y, (P)YPobject_values_size(YPobject_values(x)), x);
  return y;
}

INLINE P YPelt (P v, P i) {
  return ((P*)v)[(int)i];
}

INLINE P YPelt_setter (P x, P v, P i) {
  return ((P*)v)[(int)i] = x;
}

/*
P YPobject_traits(P x) {
  return (((OBJECT)(x))->traits);
}
P YPobject_traits_setter(P z, P x) {
  return ((OBJECT)(x))->traits = (z);
}
P YPobject_values(P x) {
  return (((OBJECT)(x))->values);
}
P YPobject_values_setter(P z, P x) {
  return (((OBJECT)(x))->values = ((VALUES)(z)));
}
P YPobject_values_size(P x) {
  return (P)(((VALUES)(x))->size);
}
*/

/* ARITHMETIC */

INLINE P YPfE(P x, P y) {
  INTFLO ix, iy; ix.i = (PINT)x; iy.i = (PINT)y;
  return (P)(ix.f == iy.f);
}
INLINE P YPfL(P x, P y) {
  INTFLO ix, iy, iz; ix.i = (PINT)x; iy.i = (PINT)y;
  return (P)(ix.f < iy.f);
}
INLINE P YPfA(P x, P y) {
  INTFLO ix, iy, iz; ix.i = (PINT)x; iy.i = (PINT)y;
  iz.f = ix.f + iy.f;
  return (P)iz.i;
}
INLINE P YPf_(P x, P y) {
  INTFLO ix, iy, iz; ix.i = (PINT)x; iy.i = (PINT)y;
  iz.f = ix.f - iy.f;
  return (P)iz.i;
}
INLINE P YPfT(P x, P y) {
  INTFLO ix, iy, iz; ix.i = (PINT)x; iy.i = (PINT)y;
  iz.f = ix.f * iy.f;
  return (P)iz.i;
}
INLINE P YPfS(P x, P y) {
  INTFLO ix, iy, iz; ix.i = (PINT)x; iy.i = (PINT)y;
  iz.f = ix.f / iy.f;
  return (P)iz.i;
}
INLINE P YPfi2f(P x) {
  INTFLO ix; 
  ix.f = (float)(PINT)x;
  return (P)ix.i;
}
INLINE P YPft(P x) {
  PINT z; INTFLO ix; ix.i = (PINT)x; 
  z = (PINT)ix.f;
  return (P)z;
}

/*
INLINE P YPflo (PFLO dat) {
  P p = YPobject_of(YLfloG, (P)1);
  INTFLO ix; 
  ix.f = dat;
  YPslot_elt_setter((P)ix.i, p, (P)0);
  return p;
}

INLINE P YPfb (P x) {
  INTFLO ix; ix.i = (PINT)x;
  return YPflo(ix.f);
}

INLINE P YPfu (P x) {
  return YPslot_elt((P)x, (P)0);
}
*/

INLINE P FLOINT (PFLO x) {
  INTFLO ix; ix.f = x;
  return (P)ix.i;
}

INLINE P YPflo_bits (P x) {
  return x;
}

/* DEBUG */

P YPSLOT_ELT (P x, P i) {
  return ((VALUES)(YPobject_values(x)))->values[(PINT)i];
}

P YPSLOT_ELT_SETTER (P z, P x, P i) {
  return ((VALUES)(YPobject_values(x)))->values[(PINT)i] = z;
}

/* VEC */

P YPPvfab (P size, P fill) {
  int i;
  PVEC v = (PVEC)allocate(sizeof(PVEC_DATA) + ((PINT)size - 1)*sizeof(P));
  v->size = (PINT)size;
  for (i = 0; i < (PINT)size; i++)
    v->values[i] = fill;
  return v;
}
  
/* VEC */

P YPPsfab (P size, P fill) {
  int i;
  PSTR s = (PSTR)allocate(((PINT)size + 1)*sizeof(PCHR));
  for (i = 0; i < (PINT)size; i++)
    s[i] = (PCHR)(int)fill;
  return s;
}
  
/* IO */

P YPopen_input_file (P name) { 
  FILE* fd = fopen((PSTR)name, "r"); 
  if (fd == NULL)
    CALL1(Yfile_opening_error, YPsb((PSTR)name));
  return (P)fd;
}

P YPopen_output_file (P name) { 
  FILE* fd = fopen((PSTR)name, "w"); 
  if (fd == NULL)
    CALL1(Yfile_opening_error, YPsb((PSTR)name));
  return (P)fd;
}

INLINE P YPclose_input_port (P s) { 
  fclose((FILE*)s); return YPfalse; 
}

INLINE P YPclose_output_port (P s) { 
  fclose((FILE*)s); return YPfalse; 
}

INLINE P YPnewline (P s) { 
  fputc('\n', (FILE*)s); return YPfalse; 
}

INLINE P YPforce_output (P s) { 
  fflush((FILE*)s); return YPfalse; 
}

INLINE P YPwrite_char (P s, P x) { 
  fputc((PCHR)(int)x, (FILE*)s); return YPfalse; 
}

INLINE P YPwrite_string (P s, P x) { 
  fputs((PSTR)x, (FILE*)s); return YPfalse; 
}

INLINE P YPread_char (P s) { 
  return (P)fgetc((FILE*)s); 
}

INLINE P YPpeek_char (P s) { 
  PCHR c = fgetc((FILE*)s); ungetc((int)c, (FILE*)s); return (P)(PINT)c; 
}

INLINE P YPchar_readyQ (P s) { 
  return YPtrue; /* TODO: NYI */
} 

#define MAXSTRSIZ 1000
char strbuf[MAXSTRSIZ];

PSTR YPread_string (FILE* s) { 
  char *str;
  fgets(strbuf, MAXSTRSIZ, s); 
  str = (char*)allocate(strlen(strbuf) + 1);
  strcpy(str, strbuf);
  return str;
}

INLINE P YPeof_objectQ (P x) { return (P)((PCHR)(PINT)x == EOF); }

INLINE P YPeof_object () { return (P)EOF; }

INLINE PPORT YPcurrent_input_port (void) { return stdin; }

INLINE PPORT YPcurrent_output_port (void) { return stdout; }

/* OS */

P YPos_name () {
#if defined(_WIN32) || defined(WIN32) || defined(WINNT)
  return (P)"win32";
#else
#ifdef linux
  return (P)"linux";
#else
  return (P)"unix";
#endif
#endif
}

P YPos_binding_value (P name) {
  PSTR value = getenv((PSTR)name);
  if (value == NULL)
    return "";
  else
    return (P)value;
}

P YPos_binding_value_setter (P value, P name) {
  setenv((PSTR)name, (PSTR)value, 1);
  return (P)value;
}

/* CLOSURES */

ENV envnul = (ENV)PNUL;

INLINE P* FUNENV (P fun) {
  return (P*)YPslot_elt(fun, (P)FUNENVOFFSET);
}

INLINE P* FUNENVSETTER (P* env, P fun) {
  return (P*)YPslot_elt_setter(env, fun, (P)FUNENVOFFSET);
}

INLINE P ENVFAB (int n) {
  ENV env = allocate(sizeof(ENV_DATA) + ((n - 1) * sizeof(P)));
  env->mark = 0x0f0f0f0f;
  env->size = n;
  return env;
}

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

INLINE P FUNSHELL (P x, int n) {
  P fun = YPclone(x);
  FUNENVSETTER(ENVFAB(n), fun);
  return fun;
}

P FUNFAB (P x, int n, ...) {
  int i;
  va_list ap; 
  P fun = YPclone(x);
  FUNENVSETTER(ENVFAB(n), fun);
  va_start(ap, n);
  for (i = 0; i < n; i++)
    FUNENVGET(fun, i) = va_arg(ap, P);
  va_end(ap);
  return fun;
}

/* CALLS */

/*
int inited_fun_traitsp = 0;
P YLmetG_traits = PNUL;
P YLgenG_traits = PNUL;
*/

extern P YLmetG_traits;
extern P YLgenG_traits;
extern P YLlstG_traits;

#define STACK_PAIR_SET(l,h,t) \
  OBJECT pair     = (OBJECT)alloca(OBJECT_DATA_SIZE); \
  VALUES data     = (VALUES)alloca(VALUES_SIZE(2)); \
  pair->traits    = YLlstG_traits; \
  pair->values    = data; \
  data->size      = 2; \
  data->values[0] = (h); \
  data->values[1] = (t); \
  l = pair

#define CHECK_ARITY(naryp,n,arity) \
  if (naryp) { \
    if (n < arity) \
      CALL2(Ywrong_number_arguments_error, fun, YPib((P)n)); \
  } else { \
    if (n != arity) \
      CALL2(Ywrong_number_arguments_error, fun, YPib((P)n)); \
  } 
  
#define CHECK_TYPE(a,t) \
  if (YPcheck_typesQ == YPtrue && YPisaQ(a, t) == YPfalse) \
    CALL2(Ytype_error, a, t);

P   Pfunction_;
int Pargument_count_;
P   Pnext_methods_;

#define MAX_ARGUMENTS 256

#define MAX_STACK_SIZE 100000

P arguments[MAX_ARGUMENTS];
P new_arguments[MAX_ARGUMENTS];
P a[MAX_ARGUMENTS];

P* stack_;
int sp = 0;
int fp = 0;

/*
void PUSH(P x) { 
  if (sp >= MAX_STACK_SIZE)
    YPbreak("CALL: STACK OVERFLOW");
  (stack_[sp++] = (x));
}
P POP() {
  return (stack_[--sp]);
}
*/

extern P YPpair (P, P);
extern P Yunknown_function_error;

P YPdo_stack_frames (P fun) {
  int xsp = sp;
  while (xsp > 0) {
    P   args   = Ynil;
    P   f      = stack_[--xsp];
    P   traits = YPobject_traits(f);
    if (traits == YLmetG_traits) {
      int i;
      int arity = FUNARITY(f);
      int naryp = FUNNARYP(f);
      for (i = 0; i < arity; i++)
        args = YPpair(stack_[--xsp], args);
      if (naryp)
        args = YPpair(stack_[--xsp], args);
    } else if (traits == YLgenG_traits) {
      args = stack_[--xsp];
    } else {
      return CALL1(Yunknown_function_error, f);
    }
    args = YPpair(f, args);
    YPPapply(fun, args);
  }
  return YPfalse;
}

extern P YLmetG;
extern P YLgenG;
extern P YPtraits_owner(P);
extern P Ywrong_number_arguments_error;
extern P YPib(P);
extern P Ytype_error;
extern P YPisaQ(P,P);
extern P YPcheck_typesQ;

P CALL0 (P fun) {
  int ssp    = sp;
  P   res    = YPfalse;
  P   traits = YPobject_traits(fun);
  if (traits == YLmetG_traits) {
    int arity = FUNARITY(fun);
    int naryp = FUNNARYP(fun);
    if (naryp)
      PUSH(Ynil);
    CHECK_ARITY(naryp,0,arity);
    PUSH(fun); 
    res = (FUNCODE(fun))(fun);
  } else if (traits == YLgenG_traits) {
    int arity = FUNARITY(fun);
    int naryp = FUNNARYP(fun);
    PUSH(Ynil);
    CHECK_ARITY(naryp,0,arity);
    PUSH(fun); 
    res = (FUNCODE(fun))(fun);
  } else {
    res = CALL1(Yunknown_function_error, fun);
  }
  sp = ssp;
  return res;
}

P CALL1 (P fun, P a1) {
  int ssp    = sp;
  P   res    = YPfalse;
  P   traits = YPobject_traits(fun);
  if (traits == YLmetG_traits) {
    int arity = FUNARITY(fun);
    P   specs = FUNSPECS(fun);
    int naryp = FUNNARYP(fun);
    if (arity > 0) {
      CHECK_TYPE(a1, Phead(specs));
      PUSH(a1);
    }
    if (naryp) {
      P opts = Ynil;
      if (arity == 0) opts = YPpair(a1, opts);
      PUSH(opts);
    }
    CHECK_ARITY(naryp,1,arity);
    PUSH(fun); 
    res = (FUNCODE(fun))(fun);
  } else if (traits == YLgenG_traits) {
    int arity = FUNARITY(fun);
    int naryp = FUNNARYP(fun);
    P arg     = Ynil;
    { STACK_PAIR_SET(arg, a1, arg); }
    PUSH(arg);
    CHECK_ARITY(naryp,1,arity);
    PUSH(fun); 
    res = (FUNCODE(fun))(fun);
  } else {
    res = CALL1(Yunknown_function_error, fun);
  }
  sp = ssp;
  return res;
}

P CALL2 (P fun, P a1, P a2) {
  int ssp    = sp;
  P   res    = YPfalse;
  P   traits = YPobject_traits(fun);
  if (traits == YLmetG_traits) {
    int arity = FUNARITY(fun);
    P   specs = FUNSPECS(fun);
    int naryp = FUNNARYP(fun);
    if (arity > 0) {
      CHECK_TYPE(a1, Phead(specs)); 
      specs = Ptail(specs);
      PUSH(a1);
    }
    if (arity > 1) {
      CHECK_TYPE(a2, Phead(specs)); 
      PUSH(a2);
    }
    if (naryp) {
      P opts = Ynil;
      if (arity < 2) opts = YPpair(a2, opts);
      if (arity < 1) opts = YPpair(a1, opts);
      PUSH(opts);
    }
    CHECK_ARITY(naryp,2,arity);
    PUSH(fun); 
    res = (FUNCODE(fun))(fun);
  } else if (traits == YLgenG_traits) {
    int arity = FUNARITY(fun);
    int naryp = FUNNARYP(fun);
    P arg     = Ynil;
    { STACK_PAIR_SET(arg, a2, arg); }
    { STACK_PAIR_SET(arg, a1, arg); }
    PUSH(arg);
    CHECK_ARITY(naryp,2,arity);
    PUSH(fun); 
    res = (FUNCODE(fun))(fun);
  } else {
    res = CALL1(Yunknown_function_error, fun);
  }
  sp = ssp;
  return res;
}

P CALL3 (P fun, P a1, P a2, P a3) {
  int ssp    = sp;
  P   res    = YPfalse;
  P   traits = YPobject_traits(fun);
  if (traits == YLmetG_traits) {
    int arity = FUNARITY(fun);
    P   specs = FUNSPECS(fun);
    int naryp = FUNNARYP(fun);
    if (arity > 0) {
      CHECK_TYPE(a1, Phead(specs)); 
      specs = Ptail(specs);
      PUSH(a1);
    }
    if (arity > 1) {
      CHECK_TYPE(a2, Phead(specs)); 
      specs = Ptail(specs);
      PUSH(a2);
    }
    if (arity > 2) {
      CHECK_TYPE(a3, Phead(specs)); 
      PUSH(a3);
    }
    if (naryp) {
      P opts = Ynil;
      if (arity < 3) opts = YPpair(a3, opts);
      if (arity < 2) opts = YPpair(a2, opts);
      if (arity < 1) opts = YPpair(a1, opts);
      PUSH(opts);
    }
    CHECK_ARITY(naryp,3,arity);
    PUSH(fun); 
    res = (FUNCODE(fun))(fun);
  } else if (traits == YLgenG_traits) {
    int arity = FUNARITY(fun);
    int naryp = FUNNARYP(fun);
    P arg     = Ynil;
    { STACK_PAIR_SET(arg, a3, arg); }
    { STACK_PAIR_SET(arg, a2, arg); }
    { STACK_PAIR_SET(arg, a1, arg); }
    PUSH(arg);
    CHECK_ARITY(naryp,3,arity);
    PUSH(fun); 
    res = (FUNCODE(fun))(fun);
  } else {
    res = CALL1(Yunknown_function_error, fun);
  }
  sp = ssp;
  return res;
}

P CALLN (P fun, int n, ...) {
  int i, j;
  int ssp    = sp;
  P   res    = YPfalse;
  P   traits = YPobject_traits(fun);
  if (traits == YLmetG_traits) {
    int arity = FUNARITY(fun);
    P   specs = FUNSPECS(fun);
    int naryp = FUNNARYP(fun);
    va_list ap; va_start(ap, n);
    for (i = 0; i < arity; i++) {
      P arg = va_arg(ap, P);
      CHECK_TYPE(arg, Phead(specs)); 
      specs = Ptail(specs);
      PUSH(arg);
    }
    if (naryp) {
      int nopts = n - arity;
      P opts = Ynil;
      for (i = 0; i < nopts; i++)
	a[i] = va_arg(ap, P);
      for (i = nopts - 1; i >= 0; i--)
	opts = YPpair(a[i], opts);
      PUSH(opts);
    }
    CHECK_ARITY(naryp,n,arity);
    va_end(ap);
    PUSH(fun); 
    res = (FUNCODE(fun))(fun);
  } else if (traits == YLgenG_traits) {
    int arity = FUNARITY(fun);
    int naryp = FUNNARYP(fun);
    P arg     = Ynil;
    va_list ap; va_start(ap, n);
    for (i = 0; i < n; i++)
      a[i] = va_arg(ap, P);
    va_end(ap);
    for (j = i - 1; j >= 0; j--) {
      STACK_PAIR_SET(arg, a[j], arg);
    }
    PUSH(arg);
    CHECK_ARITY(naryp,n,arity);
    PUSH(fun); 
    res = (FUNCODE(fun))(fun);
  } else {
    res = CALL1(Yunknown_function_error, fun);
  }
  sp = ssp;
  return res;
}

/* APPLIES FUN TO ARGS AS LIST BEFORE RESTIFYING 
   JUST LIKE CALL EXCEPT ARGS ARE IN LIST */

extern P YPPlen(P);

P YPPapply (P fun, P args) {
  int i, j;
  int n      = (int)YPPlen(args);
  int ssp    = sp;
  P   res    = YPfalse;
  P   traits = YPobject_traits(fun);
  if (traits == YLmetG_traits) {
    int arity = FUNARITY(fun);
    P   specs = FUNSPECS(fun);
    int naryp = FUNNARYP(fun);
    P   ap    = args;
    for (i = 0; i < arity; i++) {
      P head = Phead(ap);
      CHECK_TYPE(head, Phead(specs)); 
      specs = Ptail(specs);
      PUSH(head);
      ap = Ptail(ap);
    }
    if (naryp) {
      P opts = Ynil;
      for (i = 0; ap != Ynil; i++) {
	a[i] = Phead(ap);
	ap   = Ptail(ap);
      }
      for (j = i - 1; j >= 0; j--)
	opts = YPpair(a[j], opts);
      PUSH(opts);
    } 
    PUSH(fun); 
    res = (FUNCODE(fun))(fun);
  } else if (traits == YLgenG_traits) {
    int arity = FUNARITY(fun);
    int naryp = FUNNARYP(fun);
    if (naryp) {
      if (n < arity)
	CALL2(Ywrong_number_arguments_error, fun, YPib((P)n));
    } else {
      if (n != arity)
	CALL2(Ywrong_number_arguments_error, fun, YPib((P)n));
    }
    PUSH(args);
    PUSH(fun); 
    res = (FUNCODE(fun))(fun);
  } else {
    res = CALL1(Yunknown_function_error, fun);
  }
  sp = ssp;
  return res;
}

P YPPmep_apply (P fun, P args) {
  int i, j;
  int arity = FUNARITY(fun);
  P   specs = FUNSPECS(fun);
  int naryp = FUNNARYP(fun);
  P   ap    = args;
  int ssp   = sp;
  P   res   = YPfalse;
  for (i = 0; i < arity; i++) {
    PUSH(Phead(ap));
    ap = Ptail(ap);
  }
  if (naryp) {
    P opts = Ynil;
    for (i = 0; ap != Ynil; i++) {
      a[i] = Phead(ap);
      ap   = Ptail(ap);
    }
    for (j = i - 1; j >= 0; j--)
      opts = YPpair(a[j], opts);
    PUSH(opts);
  } 
  PUSH(fun); 
  res = (FUNCODE(fun))(fun);
  sp  = ssp;
  return res;
}

P YPfapply (P fproc, P args) {
}

/* NLX */

typedef struct _bind_exit_frame {
  jmp_buf		        destination;
  int                           sp;
  P			        value;
  struct _unwind_protect_frame* present_unwind_protect_frame;
} *BIND_EXIT_FRAME, BIND_EXIT_FRAME_DATA;

typedef struct _unwind_protect_frame {
  jmp_buf                       destination;
  int                           sp;
  P	                        value;
  struct _bind_exit_frame*      ultimate_destination;
  struct _unwind_protect_frame* previous_unwind_protect_frame;
} *UNWIND_PROTECT_FRAME, UNWIND_PROTECT_FRAME_DATA;

UNWIND_PROTECT_FRAME_DATA Ptop_unwind_protect_frame_data;
UNWIND_PROTECT_FRAME Ptop_unwind_protect_frame 
  = &Ptop_unwind_protect_frame_data;
UNWIND_PROTECT_FRAME Pcurrent_unwind_protect_frame;

void nlx_step (BIND_EXIT_FRAME ultimate_destination) {
  /* handled all unwind protect frames presently in force? */
  if (Pcurrent_unwind_protect_frame == 
      ultimate_destination->present_unwind_protect_frame) {
    /* invalidate current frame */
    Pcurrent_unwind_protect_frame->ultimate_destination = NULL;
    sp = ultimate_destination->sp;    
    longjmp(ultimate_destination->destination, 1);
  } else {
    UNWIND_PROTECT_FRAME next_frame = Pcurrent_unwind_protect_frame;
    /* pop current unwind protect frame */
    Pcurrent_unwind_protect_frame = next_frame->previous_unwind_protect_frame;
    /* register ultimate destination of non-local exit in cupf */
    Pcurrent_unwind_protect_frame->ultimate_destination = ultimate_destination;
    sp = ultimate_destination->sp;    
    /* do cleanup step in next unwind protect frame */
    longjmp(next_frame->destination, 1);
  }
}

P FALL_THROUGH_UNWIND (P argument) {
  Pcurrent_unwind_protect_frame->value = argument;
  Pcurrent_unwind_protect_frame->ultimate_destination = NULL;
  return(PNUL);			/* Keeps some compilers happy */
}

P CONTINUE_UNWIND () {
  if (Pcurrent_unwind_protect_frame->ultimate_destination) { /* nlx? */
    nlx_step(Pcurrent_unwind_protect_frame->ultimate_destination);
    return(YPfalse);     /* Keeps some compilers happy */
  } else {
    P value = Pcurrent_unwind_protect_frame->value;
    /* pop current unwind protect frame */
    Pcurrent_unwind_protect_frame
      = Pcurrent_unwind_protect_frame->previous_unwind_protect_frame;
    return(value);
  }
}

void print_frame_count () {
  int i;
  UNWIND_PROTECT_FRAME ptr = Pcurrent_unwind_protect_frame;
  for (i = 0; ptr != Ptop_unwind_protect_frame; i++)
    ptr = ptr->previous_unwind_protect_frame;
  printf("FRAME COUNT = %d\n", i);
}

P NLX (BIND_EXIT_FRAME target, P argument) {
  target->value = argument;
  nlx_step(target);
  return(PNUL);	/* Keeps some compilers happy -- Won't actually get here */
}

P MAKE_BIND_EXIT_FRAME () {
  BIND_EXIT_FRAME frame 
    = (BIND_EXIT_FRAME)allocate(sizeof(BIND_EXIT_FRAME_DATA));
  frame->present_unwind_protect_frame = Pcurrent_unwind_protect_frame;
  return((P)frame);
}

P MAKE_UNWIND_FRAME () {
  UNWIND_PROTECT_FRAME frame 
    = (UNWIND_PROTECT_FRAME)allocate(sizeof(UNWIND_PROTECT_FRAME_DATA));
  /* print_frame_count(); */
  frame->previous_unwind_protect_frame = Pcurrent_unwind_protect_frame;
  Pcurrent_unwind_protect_frame = frame;
  frame->ultimate_destination = (BIND_EXIT_FRAME)0;
  return((P)frame);
}

P FRAME_DEST (P frame)
  { return((P)(((BIND_EXIT_FRAME)frame)->destination)); }
  
P FRAME_RETVAL (P frame)
  { return (((BIND_EXIT_FRAME) frame)->value); }

extern P YPmet (P, P, P, P, P);

P do_exit (P fun) {
  ARG(value, 0);

  P frame = FUNENVGET(fun, 0);
  NLX(frame, value);  
  return(PNUL); /* NEVER RETURNS BUT KEEPS COMPILER HAPPY */
}

extern P YLanyG;

P with_exit (P fun) {
  BIND_EXIT_FRAME frame = MAKE_BIND_EXIT_FRAME();
  P exit = YPmet(&do_exit, YPpair(YLanyG, Ynil), YPfalse, YPib((P)1), FABENV(1, frame));
  if (!setjmp(frame->destination))
    return CALL1(fun, exit);
  else
    return frame->value;
}

P with_cleanup (P body_fun, P cleanup_fun) {
  UNWIND_PROTECT_FRAME frame = MAKE_UNWIND_FRAME();
  P value = YPfalse;
  if (!setjmp(frame->destination)) {
    value = CALL0(body_fun);
    FALL_THROUGH_UNWIND(value);
  }
  CALL0(cleanup_fun);
  CONTINUE_UNWIND();
  return value;
}

/* BOXES */

INLINE P BOXFAB(P x) {  
  P* box = (P*)allocate(sizeof(P));
  BOXVAL(box) = x;
  return box;
}

/* LOCATIVES */

INLINE P YPlocative_value (P loc) {
  /* P* ptr = YPslot_elt(loc, 0); */
  P* ptr = (P*)((PADR)loc & ~tag_mask);
  return *ptr;
}

INLINE P YPlocative_value_setter (P val, P loc) {
  /* P* ptr = YPslot_elt(loc, 0); */
  P* ptr = (P*)((PADR)loc & ~tag_mask);
  return *ptr = val;
}

/* SYMBOL TABLE */

P**    symadrs;
char** symstrs;
int    nsyms = 0;

#define MAX_SYMS 10000

int symoff (P adr) {
  int i;
  for (i = 0; i < nsyms; i++)
    if (*symadrs[i] == adr)
      return i;
  return -1;
}

char* sym (P adr) {
  int i = symoff(adr);
  if (i > 0)
    return symstrs[i];
  else
    return (char*)0;
}

extern P Yfab_sym;

P YPbinding_name (P adr) {
  char* s = sym(adr);
  if (s == (char*)0)
    return YPfalse;
  else
    return CALL1(Yfab_sym, YPsb(s));
}

char* type (P adr) {
  if (adr == PNUL)
    return "UNBOUND";
  else {
    int tag = tag_bits(adr);
    P traits;
    switch (tag) {
    case adr_tag:
      traits = YPobject_traits(adr);
      if (traits == PNUL)
	return "UNBOUND";
      else {
	char* owner_name = sym(YPtraits_owner(traits));
	if (owner_name == NULL)
	  return "DYN";
	else
	  return owner_name;
      }
    case int_tag:
      return "<int>";
    case chr_tag:
      return "<chr>";
    case loc_tag:
      return "<loc>";
    }
  }
}

int is_class (P adr) {
  if (adr == PNUL)
    return 0;
  else {
    int tag = tag_bits(adr);
    if (tag != adr_tag)
      return 0;
    else {
      P traits = YPobject_traits(adr);
      if (traits == PNUL)
	return 0;
      else 
	return YPtraits_owner(traits) == adr;
    }
  }
}

#define MIN(x,y) ((x)<(y) ? (x) : (y))

void prtsym (P adr) {
  char* name = sym(adr);
  
  if (name == 0)
    printf("0x%lx", adr);
  else
    printf("%s", name);
}

void prtobj (P adr) {
  if (adr == 0)
    printf("NUL");
  else {
    char* typename = type(adr);
    prtsym(adr);
    if (typename) 
      printf(" ISA %s", typename);
  }
}

extern void print_kind(P, int);

void print (P adr) {
  print_kind(adr, 0);
}

void print_kind (P adr, int prettyp) {
  char* typename = type(adr);
  char* name     = sym(adr);
  int   classp   = is_class(adr);
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
  if (name) {
    printf("%s", name);
    if (!classp || prettyp)
      printf("=");
  } 
  switch (t) {
  case int_tag:
    printf("%d", untag(adr)); return;
  case chr_tag:
    printf("%c", untag(adr)); return;
  case loc_tag:
    printf("&0x%lx", tag((P)untag(adr), 0)); return;
  default:
  }
  if (classp) {
    if (prettyp)
      print(YPobject_traits(adr));
    /* DO NOTHING FOR NOW */
  } else if (strcmp(typename, "<int>") == 0) {
    printf("%d", (int)YPslot_elt(adr, (P)0));
  } else if (strcmp(typename, "<chr>") == 0) {
    printf("%c", (int)YPslot_elt(adr, (P)0));
  } else if (strcmp(typename, "<loc>") == 0) {
    printf("&0x%lx", YPslot_elt(adr, (P)0));
  } else if (strcmp(typename, "<flo>") == 0) {
    INTFLO x;
    x.i = (PINT)YPslot_elt(adr, (P)0);
    printf("%f", x.f);
  } else if (strcmp(typename, "<sym>") == 0) {
    printf("%s", YPslot_elt(YPslot_elt(adr, (P)0), (P)0));
  } else if (strcmp(typename, "<str>") == 0) {
    printf("\""); printf("%s", YPslot_elt(adr, (P)0)); printf("\"");
  } else if (strcmp(typename, "<lst>") == 0) {
    P ptr; int j;
    printf("("); 
    for (ptr = adr, j = 0; ptr != Ynil; ptr = YPslot_elt(ptr, (P)1), j++) {
      if (j != 0) printf(" ");
      print(YPslot_elt(ptr, (P)0)); 
    }
    printf(")");
  } else if (strcmp(typename, "<vec>") == 0) {
    int j, n;
    PVEC v = (PVEC)YPslot_elt(adr, (P)0);
    n = (PINT)YPPvlen(v);
    printf("#("); 
    for (j = 0; j < n; j++) {
      if (j != 0) printf(" ");
      print(YPPvelt(v, j)); 
    }
    printf(")");
  } else if (strcmp(typename, "<met>") == 0) {
    ENV env; int j, n; 
    printf("(MET ");
    print(YPslot_elt(adr, (P)FUNSPECSOFFSET));
    env = (ENV)YPslot_elt(adr, (P)FUNENVOFFSET);
    n   = env->size;
    if (n > 0) {
      printf(" [");
      for (j = 0; j < n; j++) {
	P val = ENVGET(env, j);
	if (j != 0) printf(" ");
	if (val == adr)
	  printf("SELF");
	else
	  print(val);
      }
      printf("]");
    }
    printf(" 0x%lx)", adr);
  } else if (strcmp(typename, "<gen>") == 0) {
    printf("(GEN ");
    print(YPslot_elt(adr, (P)FUNSPECSOFFSET));
    printf(" 0x%lx)", adr);
  } else if (strcmp(typename, "<file-output-port>") == 0) {
    printf("(OUT-PORT 0x%lx)", adr);
  } else if (strcmp(typename, "<file-input-port>") == 0) {
    printf("(IN-PORT 0x%lx)", adr);
  } else {
    int i;
    P values  = YPobject_values(adr);
    int size  = (int)YPobject_values_size(values);
    int below = MIN(size, 10);
    printf("(%s", typename);
    for (i = 0; i < below; i++) {
      printf(" "); print(YPslot_elt(adr, (P)i));
    }
    printf(" 0x%lx)", adr);
  }
}

void println (P adr) {
  print_kind(adr, 1); printf("\n");
}

void desslot (int i, P adr) {
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
    if ((strcmp(typename, "<int>") == 0)|
	(strcmp(typename, "<chr>") == 0)|
	(strcmp(typename, "<loc>") == 0)|
	(strcmp(typename, "<flo>") == 0)|
	(strcmp(typename, "<str>") == 0)|
	(strcmp(typename, "<file-input-port>") == 0)|
	(strcmp(typename, "<file-output-port>") == 0)) {
      printf("1: "); print(adr); printf("\n");
    } else {
      int metp  = strcmp(typename, "<met>") == 0;
      int genp  = strcmp(typename, "<gen>") == 0;
      int funp  = metp | genp;
      P values  = YPobject_values(adr);
      int size  = (int)YPobject_values_size(values);
      int from  = funp ? 1 : 0;
      int below = MIN(metp ? size - 1 : size, 10);
      for (i = from; i < below; i++)
	desslot(i, YPslot_elt(adr, (P)i));
      if (metp) {
	int j;
	ENV env = (ENV)YPslot_elt(adr, (P)FUNENVOFFSET);
	printf("ENV MARK %lx\n", env->mark);
	printf("ENV SIZE %d\n", env->size);
	for (j = 0; j < env->size; j++, i++)
	  desslot(i, ENVGET(env, j));
      }
    }
  }
}

void des (P adr) {
  int tag  = tag_bits(adr);
  if (tag == adr_tag) {
    P traits = YPobject_traits(adr);
    printf("TRAITS:\n");
    desobj(traits);
    printf("OBJECT: ");
    if (sym(adr))
      printf("%s", sym(adr));
    printf("\n");
    desobj(adr);
  } else
    desobj(adr);
}

void regsym (P* adr, char *str) {
  int i = symoff(*adr);
  if (i == -1 || (strcmp(symstrs[i],str) != 0)) 
    i = nsyms++;
  if (nsyms > MAX_SYMS)
    YPbreak("REGSYM: SYM OVERFLOW");
  symstrs[i] = str;
  symadrs[i] = adr;
}

extern P YPlocative;
extern P YPlb(P);

P YPdo_runtime_bindings (P fun) {
  int i, formatp = 0, evalp = 0;
  for (i = 0; i < nsyms; i++) {
    char* n = symstrs[i];
    /*
    if (strcmp(n, "sexpr-self-evaluating?") == 0)
      formatp = 1;
    if (strcmp(n, "os-name") == 0)
      evalp = 1;
    */
    if (!formatp || evalp) {
      P name     = YPsb((P)n);
      P locative = YPlb((P)untag((P)symadrs[i]));
      /* printf("RTB %s\n", n); */
      CALL2(fun, name, locative);
    }
  }
  return YPfalse;
}

/* KEYBOARD INTERRUPT HANDLING */

#include <signal.h>

extern P Ykeyboard_interrupt;
void setup_keyboard_interrupts (void);

void keyboard_interrupt (int value) {
  CALL0(Ykeyboard_interrupt);
  setup_keyboard_interrupts();
}

void setup_keyboard_interrupts (void) {
  signal(SIGINT, keyboard_interrupt);
}

int    Pargc;
char** Pargv;

P YPapp_filename () {
  char* filename = Pargv[0];
  if (strcmp(YPos_name(), "win32") == 0) {
    int i;
    for (i = 0; i < strlen(filename); i++) 
      if (filename[i] == '/')
	filename[i] = '\\';
  }
  return YPsb(filename);
}

P YPapp_args () {
  int i;
  P   args = Ynil;
  for (i = 1; i < Pargc; i++) 
    args = YPpair(YPsb(Pargv[i]), args);
  return args;
}

/* OVERALL INITIALIZATION */

void YPinit_world(int argc, char* argv[]) {
  Pargc   = argc;
  Pargv   = argv;
  stack_  = (P*)allocate(MAX_STACK_SIZE * sizeof(P));
  symstrs = (char**)allocate(MAX_SYMS * sizeof(char*));
  symadrs = (P**)allocate(MAX_SYMS * sizeof(P));
  envnul  = ENVFAB(0);
  Pcurrent_unwind_protect_frame = Ptop_unwind_protect_frame;
  Ptop_unwind_protect_frame->ultimate_destination = (BIND_EXIT_FRAME)0;
  setup_keyboard_interrupts();
}
