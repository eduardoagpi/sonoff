/*
 * Simple test program for Sonoff Basic.
 * Allows to turn on the integrated led whenever the user press
 * the integrated button
*/

const byte OUTPUT_LED = 13;
const byte RELAY_1 = 12;

void setup() {
    pinMode(OUTPUT_LED, OUTPUT);
    pinMode(RELAY_1, OUTPUT);
}

void loop() {
  digitalWrite(OUTPUT_LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(RELAY_1, HIGH);
  delay(1000);                       // wait for a second
  digitalWrite(OUTPUT_LED, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(RELAY_1, LOW);
  delay(1000);                       // wait for a second
}
