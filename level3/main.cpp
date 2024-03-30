#define F_CPU 16000000UL


#include <avr/io.h>
#include <util/delay.h>

int main() {
    // setting pin 5 to output
    // 32 = 0001 0000 in binary
    DDRB = 32;

    while (true)
    {   
        // turning on the led pin
        PORTB = 32;

        //delay
        _delay_ms(1000);

        // turning off the led pin
        // 0 is just 0
        PORTB = 0;

        //delay
        _delay_ms(1000);
    }
    
}