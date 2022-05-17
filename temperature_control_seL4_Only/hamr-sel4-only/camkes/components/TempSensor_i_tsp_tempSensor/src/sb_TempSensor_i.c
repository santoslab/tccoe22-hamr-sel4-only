// This file will be regenerated, do not edit

#include <sb_TempSensor_i.h>
#include <sb_event_counter.h>
#include <string.h>
#include <camkes.h>

void sb_entrypoint_period_TempSensor_i(int64_t *in_arg) {
  temp_sensor_compute_entrypoint((int64_t *) in_arg);
}

seqNum_t sb_currentTemp_seqNum;

bool sb_currentTemp_write(const TemperatureControl__Temperature_i * value) {
  return write_sp_TemperatureControl__Temperature_i(sb_currentTemp, value, &sb_currentTemp_seqNum);
}

/************************************************************************
 * sb_tempChanged_enqueue
 * Invoked from user code in the local thread.
 *
 * This is the function invoked by the local thread to make a
 * call to send to a remote event port.
 *
 ************************************************************************/
bool sb_tempChanged_enqueue(void) {
  // sb_tempChanged_counter is a dataport (shared memory) that is written by the sender
  // and read by the receiver(s). This counter is monotonicly increasing,
  // but can wrap.
  (*sb_tempChanged_counter)++;

  // Release memory fence - ensure subsequent write occurs after any preceeding read or write
  sb_tempChanged_counter_release();

  sb_tempChanged_emit();

  return true;
}


/************************************************************************
 *  sb_entrypoint_TempSensor_i_tsp_tempSensor_initializer:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_TempSensor_i_tsp_tempSensor_initializer(const int64_t * in_arg) {
  temp_sensor_init_entrypoint((int64_t *) in_arg);
}

void pre_init(void) {
  // initialise data structure for data port currentTemp
  init_sp_TemperatureControl__Temperature_i(sb_currentTemp, &sb_currentTemp_seqNum);

  // initialise shared counter for event port tempChanged
  *sb_tempChanged_counter = 0;
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {

  {
    int64_t sb_dummy;
    sb_entrypoint_TempSensor_i_tsp_tempSensor_initializer(&sb_dummy);
  }
  sb_self_pacer_tick_emit();
  for(;;) {
    sb_self_pacer_tock_wait();

    {
      int64_t sb_dummy = 0;
      sb_entrypoint_period_TempSensor_i(&sb_dummy);
    }
    sb_self_pacer_tick_emit();
  }
  return 0;
}
