//// Copyright 2002, Jonathan Bachrach.  See file TERMS.

#include "grt.h"

#if defined(HAVE_POSIX_THREAD)

P YtimeSlockYPlock_create (P name) {
  pthread_mutex_t *mutex = (pthread_mutex_t *)allocate(sizeof(pthread_mutex_t));
  pthread_mutex_init(mutex, NULL);
  return (P)mutex;
}

P YtimeSlockYPlock_lock (P handle) {
  return (P)pthread_mutex_lock((pthread_mutex_t *)handle);
}

P YtimeSlockYPlock_try_lock (P handle) {
  return (P)pthread_mutex_trylock((pthread_mutex_t *)handle);
}

P YtimeSlockYPlock_unlock (P handle) {
  return (P)pthread_mutex_unlock((pthread_mutex_t *)handle);
}

P YtimeSlockYPlock_destroy (P handle) {
  return (P)pthread_mutex_destroy((pthread_mutex_t *)handle);
}

#elif defined(MSVC_THREAD)
#undef PINT
#include <windows.h>
#undef PINT
#define PINT long

P YtimeSlockYPlock_create (P name) {
  CRITICAL_SECTION* cs = (CRITICAL_SECTION*)allocate(sizeof(CRITICAL_SECTION));
  InitializeCriticalSection(cs);
  return (P)cs;
}

P YtimeSlockYPlock_lock (P handle) {
  EnterCriticalSection((CRITICAL_SECTION*)handle);
  return YPtrue;
}

P YtimeSlockYPlock_try_lock (P handle) {
  // Not yet implemented
  return (P)0;
}

P YtimeSlockYPlock_unlock (P handle) {
  LeaveCriticalSection((CRITICAL_SECTION*)handle);
  return YPtrue;
}

P YtimeSlockYPlock_destroy (P handle) {
  DeleteCriticalSection((CRITICAL_SECTION*)handle);
  return YPtrue;
}

#else

P YtimeSlockYPlock_create (P name) { return PNUL; }

P YtimeSlockYPlock_lock (P handle) { return PNUL; }

P YtimeSlockYPlock_try_lock (P handle) { return PNUL; }

P YtimeSlockYPlock_unlock (P handle) { return PNUL; }

P YtimeSlockYPlock_destroy (P handle) { return PNUL; }

#endif
