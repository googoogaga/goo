//// Copyright 2002, Jonathan Bachrach.  See file TERMS.

#include "grt.h"
#include <time.h>

#ifdef HAVE_POSIX_THREAD

P YtimeSeventYPevent_create (P name) {
  pthread_cond_t *cond = (pthread_cond_t *)allocate(sizeof(pthread_cond_t));
  pthread_cond_init(cond, NULL);
  return (P)cond;
}

P YtimeSeventYPevent_reset (P handle) {
  return (P)pthread_cond_init((pthread_cond_t *)handle, NULL); // TODO: ????
}

P YtimeSeventYPevent_pulse (P handle) {
  // return (P)PulseEvent((HANDLE)handle);
}

P YtimeSeventYPevent_signal (P handle) {
  return (P)pthread_cond_signal((pthread_cond_t *)handle);
}

P YtimeSeventYPevent_broadcast (P handle) {
  return (P)pthread_cond_broadcast((pthread_cond_t *)handle);
}

P YtimeSeventYPevent_destroy (P handle) {
  return (P)pthread_cond_destroy((pthread_cond_t *)handle);
}

P YtimeSeventYPevent_wait (P event, P lock) {
  return (P)pthread_cond_wait
    ((pthread_cond_t *)event, (pthread_mutex_t *)lock);
}

P YtimeSeventYPevent_wait_timed (P event, P lock, P timeout) {
  INTFLO x;
  struct timespec time;
  x.i = (PINT)timeout;
  time.tv_sec  = (time_t)truncf(x.f);
  time.tv_nsec = (long)((x.f - time.tv_sec) * 1000000000.0);
  return (P)pthread_cond_timedwait
    ((pthread_cond_t *)event, (pthread_mutex_t *)lock, &time);
}

#else

P YtimeSeventYPevent_create (P name) { return PNUL; }

P YtimeSeventYPevent_reset (P handle) { return PNUL; }

P YtimeSeventYPevent_pulse (P handle) { return PNUL; }

P YtimeSeventYPevent_signal (P handle) { return PNUL; }

P YtimeSeventYPevent_broadcast (P handle) { return PNUL; }

P YtimeSeventYPevent_destroy (P handle) { return PNUL; }

P YtimeSeventYPevent_wait (P event, P lock) { return PNUL; }

P YtimeSeventYPevent_wait_timed (P event, P lock, P timeout) { return PNUL; }

#endif
