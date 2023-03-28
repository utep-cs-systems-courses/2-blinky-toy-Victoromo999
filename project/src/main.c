#include <msp430.h>
#include "libtimer.h"
#include "switch.h"
#include "led.h"
#include "buzzer.h"
#include "stateMachines.h"

int main(void){
  configureClocks();
  switch_init();
  led_init();
  buzzer_init();
  enableWDTInterrupts();

  or_sr(0x18);
}
