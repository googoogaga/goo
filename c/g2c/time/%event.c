//// Copyright 2002, Jonathan Bachrach.  See file TERMS.

#include "grt.h"

#if defined(HAVE_POSIX_THREAD)
#include <time.h>

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

#elif defined(MSVC_THREAD)
#undef PINT
#include <windows.h>
#undef PINT
#define PINT long

P YtimeSeventYPevent_create (P name) {
  HANDLE handle;
  handle = CreateEvent(NULL, FALSE, FALSE, (char*)name);
  return (P)handle;
}

P YtimeSeventYPevent_reset (P handle) {
  return (P)ResetEvent((HANDLE)handle);
}

P YtimeSeventYPevent_pulse (P handle) {
  return (P)PulseEvent((HANDLE)handle);
}

P YtimeSeventYPevent_signal (P handle) {
  return (P)SetEvent((HANDLE)handle);
}

P YtimeSeventYPevent_broadcast (P handle) {
  return (P)SetEvent((HANDLE)handle);
}

P YtimeSeventYPevent_destroy (P handle) {
  return (P)CloseHandle((HANDLE)handle);
}

P YtimeSeventYPevent_wait (P event, P lock) {
  P result;
  DWORD wait = 0;
  LeaveCriticalSection((CRITICAL_SECTION*)lock);
  wait = WaitForSingleObject((HANDLE)event, INFINITE);
  if (wait == WAIT_OBJECT_0)
    result = (P)1;
  else
    result = (P)0;
  
  EnterCriticalSection((CRITICAL_SECTION*)lock);
  return result;
}

P YtimeSeventYPevent_wait_timed (P event, P lock, P timeout) {
  P result;
  DWORD wait = 0;
  INTFLO x;
  x.i = (PINT)timeout;

  LeaveCriticalSection((CRITICAL_SECTION*)lock);
  wait = WaitForSingleObject((HANDLE)event, (long)(x.f * 1000));
  if (wait == WAIT_OBJECT_0)
    result = (P)1;
  else
    result = (P)0;
  
  EnterCriticalSection((CRITICAL_SECTION*)lock);
  return result;
}

P YeventYPevent_wait (P handle, P timeout) {
  DWORD res = WaitForSingleObject((HANDLE)handle, (DWORD)timeout);
  if (res == WAIT_OBJECT_0)
    return (P)1;
  else
    return (P)0;
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
