//// Copyright 2002, Jonathan Bachrach.  See file TERMS.

#include "mini-prt.h"
#include <w32api/windows.h>
#include <w32api/mmsystem.h>
#include <stdio.h>
// link with -lwinmm

HMIDIOUT mapper_handle = NULL;

P YPmidi_out_open (P id) {
  HMIDIOUT handle;
  MMRESULT code;
  code = midiOutOpen(&handle, (UINT)id, (DWORD)0, (DWORD)0, (DWORD)0);
  if (id == (P)-1) mapper_handle = handle;
  if (code != 0) {
    CALL2(Yerror, YPsb("Midi open failed with %d"), YPib((P)code));
  }
  return (P)handle;
}

P YPmidi_out_close (P handle) {
  MMRESULT code;
  code = midiOutClose(handle);
  if (code != 0) {
    CALL2(Yerror, YPsb("Midi close failed with %d"), YPib((P)code));
  }
  return PNUL;
}

P YPmidi_out_send (P handle, P status, P channel, P x, P y) {
  MMRESULT code;
  DWORD    msg = (UINT)status | (UINT) channel | ((UINT)x)<<8 | ((UINT)y)<<16;
  // printf("MSG %lx stat %d chan %d x %d y %d\n", msg, status, channel, x, y);
  fflush(stdout);
  code = midiOutShortMsg(handle, msg);
  if (code != 0) {
    CALL2(Yerror, YPsb("Midi send failed with %d"), YPib((P)code));
  }
  return PNUL;
}

P YPmidi_out_reset (P handle) {
  return PNUL;
}

P YPmidi_error_text () {
  return (P)"";
}

static P inCallback = PNUL;

P YPmidi_in_register_callback (P callback) {
  inCallback = callback;
  return PNUL;
}

extern P CALLN (P cb, int n, P id, P chan, P wMsg, P time, P stat, P d1, P d2);

#define MAX_MIDI_IN_KINDS 6
#define MAX_MIDI_IN_TYPES 6
P midi_in_kinds[MAX_MIDI_IN_KINDS];
P midi_in_types[MAX_MIDI_IN_TYPES];
P midi_unknown;

#define MIM_BASE 0x3C1

void CALLBACK stdInCallback
    (HMIDIIN h, DWORD wMsg, DWORD id, DWORD p1, DWORD p2) {
  unsigned int chan, stat, d1, d2, time, msg, type_id, kind_id;
  P midi_kind, midi_type;
  msg  = (unsigned int)p1;
  chan = (msg >> 0)  & 0x0f;
  stat = (msg >> 4)  & 0x0f;
  d1   = (msg >> 8)  & 0xff;
  d2   = (msg >> 16) & 0xff;
  time = (unsigned int)p2;
  // printf("ID %d CHAN %d WMSG %d TIME %d STAT %d D1 %d D2 %d\n",
  // 	    id, chan, wMsg, time, stat, d1, d2);
  // fflush(stdout);
  type_id = wMsg - MIM_BASE;
  if (type_id < 0 || type_id > MAX_MIDI_IN_TYPES)
    midi_type = midi_unknown;
  else
    midi_type = midi_in_types[type_id];
  kind_id = stat - 8;
  if (kind_id < 0 || kind_id > MAX_MIDI_IN_KINDS)
    midi_kind = midi_unknown;
  else
    midi_kind = midi_in_kinds[kind_id];
  // YPmidi_out_send ((P)mapper_handle, (P)0x90, (P)0, (P)d1, (P)127);
  // YPmidi_out_send ((P)mapper_handle, (P)0x80, (P)0, (P)d1, (P)127);
  CALLN((P)inCallback, 7,
	YPib((P)id), YPib((P)chan), midi_type, midi_kind,
	YPib((P)time), YPib((P)d1), YPib((P)d2));
}

extern P YPPsym(char*);

P YPmidi_in_open (P id) {
  HMIDIIN  handle;
  MMRESULT code;
  midi_in_types[0] = YPPsym("open");
  midi_in_types[1] = YPPsym("close");
  midi_in_types[2] = YPPsym("data");
  midi_in_types[3] = YPPsym("long-data");
  midi_in_types[4] = YPPsym("error");
  midi_in_types[5] = YPPsym("long-error");
  midi_in_kinds[0] = YPPsym("note-on");
  midi_in_kinds[1] = YPPsym("long-note-on");
  midi_in_kinds[2] = YPPsym("poly-after-touch");
  midi_in_kinds[3] = YPPsym("control-change");
  midi_in_kinds[4] = YPPsym("after-touch");
  midi_in_kinds[5] = YPPsym("pitch-bend");
  midi_unknown     = YPPsym("unknown");

  code = midiInOpen
    (&handle, (UINT)id, (DWORD)stdInCallback, (DWORD)id, CALLBACK_FUNCTION);
  if (code != 0) {
    CALL2(Yerror, YPsb("Midi in open failed with %d"), YPib((P)code));
  }
  return (P)handle;
}

P YPmidi_in_find_max_device_id () {
  // int num_devices = midiInGetNumDevs();
  // return (P)num_devices;
  return (P)0;
}

P YPmidi_in_start (P handle) {
  midiInStart((HMIDIIN)handle);
}

P YPmidi_in_stop (P handle) {
  midiInStop((HMIDIIN)handle);
}

P YPmidi_in_reset (P handle) {
  midiInReset((HMIDIIN)handle);
}

P YPmidi_in_close (P handle) {
  MMRESULT code;
  midiInStop(handle);
  midiInReset(handle);
  code = midiInClose(handle);
  if (code != 0) {
    CALL2(Yerror, YPsb("Midi in close failed with %d"), YPib((P)code));
  }
  return PNUL;
}


