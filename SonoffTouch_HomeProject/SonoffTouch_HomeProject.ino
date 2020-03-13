/**
 * The problem this code solves:
 * The tipical functionality of sonoff touch is, when a user clicks at sonff touch button,
 * then the relay asociated to the button is activated/desactivated.
 * 
 * We want to change that functionality, so that when we touch a sonoff button, we will change
 * the relay status of a remote sonoff (not the one been touched). Ofcourse, there must be 
 * a network of sonoff devices that can speak each other (via MQTT)
 * 
 * */

#include <PubSubClient.h>

#define INTERRUPTOR_ID 1

#define INPUT_CHANNEL_1 "/interruptor/INTERRUPTOR_ID/1"
#define INPUT_CHANNEL_2 "/interruptor/INTERRUPTOR_ID/2"
#define INPUT_CHANNEL_3 "/interruptor/INTERRUPTOR_ID/3"

#define OUTPUT_CHANNEL_1 "/interruptor/2/1"
#define OUTPUT_CHANNEL_2 ""
#define OUTPUT_CHANNEL_3 ""


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
