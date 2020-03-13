/*
 * Simple test program for Sonoff Basic.
 * Allows to turn on the integrated led whenever the user press
 * the integrated button
*/

const byte OUTPUT_LED = 13;
const byte OUTPUT_RELE=12;
const byte INPUT_BUTTON = 0;

void setup() {
    pinMode(OUTPUT_LED, OUTPUT);
    pinMode(OUTPUT_RELE, OUTPUT);
    pinMode(INPUT_BUTTON, INPUT);
}

void loop() {
  digitalWrite(OUTPUT_LED, digitalRead(INPUT_BUTTON));
  digitalWrite(OUTPUT_RELE, !digitalRead(INPUT_BUTTON));
}
