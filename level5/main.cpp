#define F_CPU 16000000UL
#define MAX_TIMER 65535

#include <avr/interrupt.h>

ISR (TIMER1_OVF_vect) {
    // toggeling the LED
    PORTB ^= _BV(PB5);
    // Reseting the timer
    TCNT1 = MAX_TIMER - (F_CPU / 1024);
}

int main() {

    // output data direction for pin 13
    DDRB |= _BV(DDB5);

    // Initializing the timer
    TCNT1 = MAX_TIMER - (F_CPU/1024);

    //Sets the prescaler to 1024
    // 16M/1024 = 15625Hz
    TCCR1B = _BV(CS10) | _BV(CS12);

    // Disabling all other features of the timer
    TCCR1A = 0x00;

    // Enable timer overflow interrupt
    TIMSK1 = _BV(TOIE1);
    
    // Set global interrupt enable
    SREG |= _BV(SREG_I); // or sei();

    while (true)
    {
        ;
        ;
    }
    
}