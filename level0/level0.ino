#include <Arduino.h>
#include <avr/io.h>
#include <pins_arduino.h>
void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
}
void loop() {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000);
}