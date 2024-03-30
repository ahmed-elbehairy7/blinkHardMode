#include <cores/arduino/Arduino.h>
#include <variants/standard/pins_arduino.h>

int main() {

    /* 
        Same logic like void setup()
    */
    pinMode(LED_BUILTIN, OUTPUT);

    /*
        a forever loop that include void loop()
    */
    while (true) {
        digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));
        delay(1000);
    }
}