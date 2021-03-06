// This file will be regenerated, do not edit

#include <sb_TempControl_i.h>
#include <sb_queue_TemperatureControl__FanAck_1.h>
#include <sb_event_counter.h>
#include <sb_queue_TemperatureControl__FanCmd_1.h>
#include <sb_event_counter.h>
#include <string.h>
#include <camkes.h>

seqNum_t sb_currentTemp_seqNum;

/*****************************************************************
 * sb_currentTemp_is_empty:
 *
 * Helper method to determine if the data infrastructure port has
 * received data
 *
 ****************************************************************/
bool sb_currentTemp_is_empty() {
  return is_empty_sp_TemperatureControl__Temperature_i(sb_currentTemp);
}

bool sb_currentTemp_read(TemperatureControl__Temperature_i * value) {
  seqNum_t new_seqNum;
  if ( read_sp_TemperatureControl__Temperature_i(sb_currentTemp, value, &new_seqNum) ) {
    sb_currentTemp_seqNum = new_seqNum;
    return true;
  } else {
    return false;
  } 
}

sb_queue_TemperatureControl__FanAck_1_Recv_t sb_fanAck_recv_queue;

/************************************************************************
 * sb_fanAck_dequeue_poll:
 ************************************************************************/
bool sb_fanAck_dequeue_poll(sb_event_counter_t *numDropped, TemperatureControl__FanAck *data) {
  return sb_queue_TemperatureControl__FanAck_1_dequeue(&sb_fanAck_recv_queue, numDropped, data);
}

/************************************************************************
 * sb_fanAck_dequeue:
 ************************************************************************/
bool sb_fanAck_dequeue(TemperatureControl__FanAck *data) {
  sb_event_counter_t numDropped;
  return sb_fanAck_dequeue_poll(&numDropped, data);
}

/************************************************************************
 * sb_fanAck_is_empty:
 *
 * Helper method to determine if infrastructure port has received new
 * events
 ************************************************************************/
bool sb_fanAck_is_empty(){
  return sb_queue_TemperatureControl__FanAck_1_is_empty(&sb_fanAck_recv_queue);
}

/************************************************************************
 * sb_fanAck_notification_handler:
 * Invoked by: seL4 notification callback
 *
 * This is the function invoked by an seL4 notification callback to 
 * dispatch the component due to the arrival of an event on port
 * sb_fanAck
 *
 ************************************************************************/
static void sb_fanAck_notification_handler(void * unused) {
  MUTEXOP(sb_dispatch_sem_post())
  CALLBACKOP(sb_fanAck_notification_reg_callback(sb_fanAck_notification_handler, NULL));
}

/************************************************************************
 * sb_entrypoint_TempControl_i_fanAck:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_TempControl_i_fanAck(const TemperatureControl__FanAck * in_arg) {
  handle_fanAck((TemperatureControl__FanAck *) in_arg);
}


bool sb_fanCmd_enqueue(const TemperatureControl__FanCmd *data) {
  sb_queue_TemperatureControl__FanCmd_1_enqueue(sb_fanCmd_queue_1, (TemperatureControl__FanCmd*) data);
  sb_fanCmd_1_notification_emit();

  return true;
}

/************************************************************************
 *
 * Static variables and queue management functions for event port:
 *     tempChanged
 *
 ************************************************************************/
static sb_event_counter_t sb_tempChanged_received_events = 0;
static sb_event_counter_t sb_tempChanged_last_counter = 0;

/************************************************************************
 * sb_tempChanged_dequeue:
 * Invoked from local active thread.
 *
 * This is the function invoked by the active thread to decrement the
 * input event index.
 *
 ************************************************************************/
bool sb_tempChanged_dequeue() {
  if(sb_tempChanged_received_events > 0) {
    sb_tempChanged_received_events--;
    return true;
  } else {
    return false;
  }
}

/************************************************************************
 * sb_tempChanged_is_empty;
 *
 * Helper method to determine if infrastructure port has not received
 * any new events since the last dispatch
 *
 ************************************************************************/
bool sb_tempChanged_is_empty() {
  return sb_tempChanged_received_events == 0;
}

void sb_freeze_event_port_tempChanged() {
  sb_event_counter_t current_sb_tempChanged_counter;

  sb_tempChanged_received_events = 0; // drop any events not handled during last dispatch

  // get current shared counter value
  current_sb_tempChanged_counter = *sb_tempChanged_counter;

  // Acquire memory fence - ensure preceding read occurs before any subsequent read or write
  sb_tempChanged_counter_acquire();

  // NOTE: Counters can wrap, so we must use != below instead of >
  while(current_sb_tempChanged_counter != sb_tempChanged_last_counter){
    sb_tempChanged_last_counter++;
    sb_tempChanged_received_events++;
  }

  if(sb_tempChanged_received_events > 0) {

    // tempChanged's queue size is 1
    if(sb_tempChanged_received_events > 1) {
      //printf("TempControl_i: dropping %i event(s) from incoming event port tempChanged\n", (sb_tempChanged_received_events - 1));

      // drop events
      sb_tempChanged_received_events = 1;
    }
  }
}

/************************************************************************
 * sb_tempChanged_handler:
 * Invoked by: seL4 notification callback
 *
 * This is the function invoked by an seL4 notification callback to 
 * dispatch the component due to the arrival of an event on port
 * tempChanged
 *
 ************************************************************************/
static void sb_tempChanged_handler(void * unused) {
  MUTEXOP(sb_dispatch_sem_post())
  CALLBACKOP(sb_tempChanged_reg_callback(sb_tempChanged_handler, NULL));
}


/************************************************************************
 *  sb_entrypoint_TempControl_i_tempChanged
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_TempControl_i_tempChanged(void){
  handle_tempChanged();
}

/************************************************************************
 *  sb_entrypoint_TempControl_i_tcp_tempControl_initializer:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_TempControl_i_tcp_tempControl_initializer(const int64_t * in_arg) {
  temp_control_init_entrypoint((int64_t *) in_arg);
}

void pre_init(void) {
  // initialise data structure for incoming event data port fanAck
  sb_queue_TemperatureControl__FanAck_1_Recv_init(&sb_fanAck_recv_queue, sb_fanAck_queue);

  // initialise data structure for outgoing event data port fanCmd
  sb_queue_TemperatureControl__FanCmd_1_init(sb_fanCmd_queue_1);
}

void post_init(void) {
  // register callback for EventDataPort port fanAck
  CALLBACKOP(sb_fanAck_notification_reg_callback(sb_fanAck_notification_handler, NULL));

  // register callback for EventPort port tempChanged
  CALLBACKOP(sb_tempChanged_reg_callback(sb_tempChanged_handler, NULL));
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {


  {
    int64_t sb_dummy;
    sb_entrypoint_TempControl_i_tcp_tempControl_initializer(&sb_dummy);
  }
  MUTEXOP(sb_dispatch_sem_wait())
  for(;;) {
    MUTEXOP(sb_dispatch_sem_wait())
    {
      TemperatureControl__FanAck sb_fanAck;
      while (sb_fanAck_dequeue((TemperatureControl__FanAck *) &sb_fanAck)) {
        sb_entrypoint_TempControl_i_fanAck(&sb_fanAck);
      }
    }
    sb_freeze_event_port_tempChanged();

    {
      if(sb_tempChanged_received_events > 0) {
        // dequeue one event and call the event handler
        sb_tempChanged_dequeue();
        sb_entrypoint_TempControl_i_tempChanged();
      }
    }
  }
  return 0;
}
