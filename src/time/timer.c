#include <stdio.h>
#include "mini-prt.h"
#include <w32api/windows.h>
#include <w32api/mmsystem.h>
// link with -lwinmm

void CALLBACK timer_callback 
    (UINT uTimerId,UINT uMsg, DWORD_PTR dwUser, DWORD_PTR dw1, DWORD_PTR dw2) {
  // printf("--> TIMER START\n"); fflush(stdout);
  GC_process_hook(DLL_THREAD_ATTACH);
  CALL0((P)dwUser);
  GC_process_hook(DLL_THREAD_DETACH);
  // printf("<-- TIMER END\n"); fflush(stdout);
}

P YPtimer_create (P delay, P fun) {
  Thunk thunk = (Thunk)fun;
  MMRESULT tid
    = timeSetEvent
       ((int)delay, 0, 
        (LPTIMECALLBACK)timer_callback, (DWORD_PTR)fun, 
	TIME_CALLBACK_FUNCTION | TIME_PERIODIC);
  if (tid == 0)
    CALL1(Yerror, YPsb("Unable to create timer"));
  return((P)tid);
}

P YtimerYPtimer_event_create (P delay, P event) {
  HANDLE hevent = (HANDLE)event;
  MMRESULT tid
    = timeSetEvent
       ((int)delay, 0, 
        (LPTIMECALLBACK)hevent, (DWORD_PTR)0, 
	TIME_CALLBACK_EVENT_PULSE | TIME_PERIODIC);
  if (tid == 0)
    CALL1(Yerror, YPsb("Unable to create timer"));
  return((P)tid);
}

P YPtimer_kill (P tid) {
  MMRESULT res = timeKillEvent((int)tid);
  if (tid == NULL)
    CALL1(Yerror, YPsb("Unable to kill timer %d"), YPib(tid));
  return PNUL;
}

P YPtimer_system_time () {
  return (P)timeGetTime();
}
