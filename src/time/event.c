//// Copyright 2002, Jonathan Bachrach.  See file TERMS.

#include "mini-prt.h"
#include <w32api/windows.h>

P YeventYPevent_create (P name) {
  HANDLE handle;
  handle = CreateEvent(NULL, FALSE, FALSE, (char*)name);
  return (P)handle;
}

P YeventYPevent_reset (P handle) {
  return (P)ResetEvent((HANDLE)handle);
}

P YeventYPevent_pulse (P handle) {
  return (P)PulseEvent((HANDLE)handle);
}

P YeventYPevent_signal (P handle) {
  return (P)SetEvent((HANDLE)handle);
}

P YeventYPevent_destroy (P handle) {
  return (P)CloseHandle((HANDLE)handle);
}

P YeventYPevent_wait (P handle, P timeout) {
  DWORD res = WaitForSingleObject((HANDLE)handle, (DWORD)timeout);
  if (res == WAIT_OBJECT_0)
    return (P)1;
  else
    return (P)0;
}

