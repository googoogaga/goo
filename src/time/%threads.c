//// Copyright 2002, Jonathan Bachrach.  See file TERMS.

#include <pthread.h>
#include <signal.h>
#include "grt.h"

#ifdef HAVE_POSIX_THREAD

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
