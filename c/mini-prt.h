typedef void*          P;
#define PNUL (P)0
extern P Yerror;
extern P CALL2(P, P, P);
extern P CALL0(P);
extern P YPsb(P);
extern P YPib(P);
typedef P (*Thunk)();
extern int GC_process_hook(unsigned long);
