#include "grt.h"

#include <alsa/asoundlib.h>

#define my_package YdemosSelectrobeepSmusicSalsamidiYP

#define GOOFUNC(name)    P YdemosSelectrobeepSmusicSalsamidiYP ## name

#define APPNAME "goo-midi"

#define hUnwrap(x) ((snd_seq_t *)YPlu(x))
#define hWrap(x) YPlb((P)x)

#define qUnwrap(x) ((int)YPiu(x))
#define qWrap(x) YPib((P)x)

// KLUDGE
// KLUDGE
// KLUDGE!!!!!!!!!
int port_out_id, port_in_id;

GOOFUNC(midi_open_seq) ()
{
  snd_seq_t *seq_handle;

  if (snd_seq_open(&seq_handle, "default", SND_SEQ_OPEN_DUPLEX, 0) < 0) {
    fprintf(stderr, "Error opening ALSA sequencer.\n");
    exit(1);
  }

  snd_seq_set_client_name(seq_handle, APPNAME);
  if ((port_out_id = snd_seq_create_simple_port(seq_handle, APPNAME,
						SND_SEQ_PORT_CAP_READ|SND_SEQ_PORT_CAP_SUBS_READ,
						SND_SEQ_PORT_TYPE_APPLICATION)) < 0)
    {
      fprintf(stderr, "Error creating sequencer port.\n");
    }
  
  if ((port_in_id = snd_seq_create_simple_port(seq_handle, APPNAME,
					       SND_SEQ_PORT_CAP_WRITE|SND_SEQ_PORT_CAP_SUBS_WRITE,
					       SND_SEQ_PORT_TYPE_APPLICATION)) < 0)
    {
      fprintf(stderr, "Error creating sequencer port.\n");
      exit(1);
    }
  
  return(hWrap(seq_handle));
}

GOOFUNC(midi_get_tick) (P hSeq, P queue)
{
  snd_seq_queue_status_t *status;
  snd_seq_tick_time_t current_tick;
  
  snd_seq_queue_status_malloc(&status);
  snd_seq_get_queue_status(hUnwrap(hSeq), qUnwrap(queue), status);
  current_tick = snd_seq_queue_status_get_tick_time(status);
  snd_seq_queue_status_free(status);
  return(YPib((P)current_tick));
}

GOOFUNC(midi_init_queue) (P hSeq)
{
  return qWrap((P)snd_seq_alloc_queue(hUnwrap(hSeq)));
}

GOOFUNC(midi_clear_queue) (P hSeq, P queue)
{
  snd_seq_remove_events_t *remove_ev;

  snd_seq_remove_events_malloc(&remove_ev);
  snd_seq_remove_events_set_queue(remove_ev, qUnwrap(queue));
  snd_seq_remove_events_set_condition(remove_ev, SND_SEQ_REMOVE_OUTPUT | SND_SEQ_REMOVE_IGNORE_OFF);
  snd_seq_remove_events(hUnwrap(hSeq), remove_ev);
  snd_seq_remove_events_free(remove_ev);

  return YPfalse;
}

GOOFUNC(midi_send_note) (P hSeq, P queue, P channel, P note, P velocity, P duration, P tick)
{
  snd_seq_event_t ev;

  snd_seq_ev_clear(&ev);
  snd_seq_ev_set_note(&ev, YPiu(channel), YPiu(note), YPiu(velocity), YPiu(duration));
  snd_seq_ev_schedule_tick(&ev, qUnwrap(queue), 0, YPiu(tick));
  snd_seq_ev_set_source(&ev, port_out_id);
  snd_seq_ev_set_subs(&ev);
  snd_seq_event_output_direct(hUnwrap(hSeq), &ev);

  return YPfalse;
}

GOOFUNC(midi_start_queue) (P hSeq, P queue)
{
  snd_seq_start_queue(hUnwrap(hSeq), qUnwrap(queue), NULL);

  return YPfalse;
}

GOOFUNC(midi_drain_output) (P hSeq)
{
  snd_seq_drain_output(hUnwrap(hSeq));

  return YPfalse;
}

GOOFUNC(midi_send_program_change) (P hSeq, P queue, P channel, P newpgm, P tick)
{
  snd_seq_event_t ev;

  snd_seq_ev_clear(&ev);
  snd_seq_ev_set_pgmchange(&ev, YPiu(channel), YPiu(newpgm));
  snd_seq_ev_schedule_tick(&ev, qUnwrap(queue), 0, YPiu(tick));
  snd_seq_ev_set_source(&ev, port_out_id);
  snd_seq_ev_set_subs(&ev);
  snd_seq_event_output_direct(hUnwrap(hSeq), &ev);

  return YPfalse;
}
