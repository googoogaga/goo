//// Copyright 2002, Jonathan Bachrach.  See file TERMS.

#include "grt.h"

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

