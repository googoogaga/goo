//// Copyright 2002, Jonathan Bachrach.  See file TERMS.

#include "grt.h"

#if defined(HAVE_POSIX_THREAD)

#include <pthread.h>
#include <signal.h>

void* do_thread (P info) {
  sigset_t  new;
  REGS regs; 
  sigaddset(&new, SIGINT);
  pthread_sigmask(SIG_BLOCK, &new, NULL);
  regs = YPfab_regs();
  TSET(goo_thread, YPtelt(info, 1));
  REGSSET(regs);
  return CALL0(1, YPtelt(info, 0));
}

P YtimeSthreadsYPthread_goo_thread () {
  return TREF(goo_thread);
}

P YtimeSthreadsYPthread_goo_thread_setter (P value) {
  TSET(goo_thread, value);
  return value;
}

P YtimeSthreadsYPthread_create (P function) {
  pthread_t thread;
  GC_pthread_create(&thread, NULL, do_thread, function);
  return (P)thread;
}

P YtimeSthreadsYPthread_yield () {
  return (P)pthread_yield();
}

P YtimeSthreadsYPthread_join (P thread) {
  return (P)GC_pthread_join(thread);
}

P YtimeSthreadsYPthread_priority (P thread) {
  return PNUL;
}

P YtimeSthreadsYPthread_current () {
  return (P)pthread_self();
}

extern float truncf(float);

P YtimeSthreadsYPthread_sleep (P secs) {  
  INTFLO x;
  int res;
  // struct timespec time, rem;
  x.i = (PINT)secs;
  // time.tv_sec  = (time_t)truncf(x.f);
  // time.tv_nsec = (long)((x.f - time.tv_sec) * 1000000000.0);
  // res = nanosleep(&time, &rem);
  res = usleep((unsigned long)(x.f * 1000000.0));
  return (P)res;
}

P YtimeSthreadsYPthread_priority_setter (P x, P thread) {
  return PNUL;
}

P YtimeSthreadsYPthread_detach () {
  return (P)pthread_detach(pthread_self());
}

#elif defined(MSVC_THREAD)

#undef PINT
#include <windows.h>
#undef PINT
#define PINT long

DWORD WINAPI do_thread (void* xinfo) {
  /*
  sigset_t  new;
  sigaddset(&new, SIGINT);
  pthread_sigmask(SIG_BLOCK, &new, NULL);
  */
  P info = (P)xinfo;
  REGS regs; 
  regs = YPfab_regs();
  TSET(goo_thread, YPtelt(info, 1));
  REGSSET(regs);
  return CALL0(1, YPtelt(info, 0));
}

P YtimeSthreadsYPthread_goo_thread () {
  return TREF(goo_thread);
}

P YtimeSthreadsYPthread_goo_thread_setter( P value) {
  TSET(goo_thread, value);
  return value;
}

P YtimeSthreadsYPthread_create (P function) {
  long threadId = 0;
  long h = CreateThread(0, 0, do_thread, function, 0, &threadId);
  return (P)h;
}

P YtimeSthreadsYPthread_yield () {
  Sleep(0);
  return YPfalse;
}

P YtimeSthreadsYPthread_join (P thread) {
  WaitForSingleObject(thread, INFINITE);
  return YPfalse;
}

P YtimeSthreadsYPthread_priority (P thread) {
  return PNUL;
}

P YtimeSthreadsYPthread_current () {
  return (P)GetCurrentThread();
}

extern float truncf(float);

P YtimeSthreadsYPthread_sleep (P secs) {  
  INTFLO x;
  // struct timespec time, rem;
  x.i = (PINT)secs;
  Sleep((unsigned long)(x.f * 1000));
  return YPfalse;
}

P YtimeSthreadsYPthread_priority_setter (P thread) {
  return PNUL;
}

P YtimeSthreadsYPthread_detach () {
  return (P)0;
  //  return (P)pthread_detach(pthread_self());
}

#else

/* STUBS */

P YtimeSthreadsYPthread_goo_thread () { return YPfalse; }

P YtimeSthreadsYPthread_create (P function) { return PNUL; }

P YtimeSthreadsYPthread_yield () { return PNUL; }

P YtimeSthreadsYPthread_join (P thread) { return PNUL; }

P YtimeSthreadsYPthread_priority (P thread) { return PNUL; }

P YtimeSthreadsYPthread_current () { return PNUL; }

P YtimeSthreadsYPthread_sleep (P secs) { return PNUL; }

P YtimeSthreadsYPthread_priority_setter (P x, P thread) { return PNUL; }

P YtimeSthreadsYPthread_detach () { return PNUL; }

#endif
