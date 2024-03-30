#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>

int main() {
    // setting pin 5 to output
    DDRB = _BV(DDB5);

    while (true)
    {   
        // toggling the led pin
        PORTB ^= _BV(PB5);

        //delay
        _delay_ms(1000);
    }
    
}