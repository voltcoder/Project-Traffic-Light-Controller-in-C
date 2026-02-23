#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    // Set PD0, PD1, PD2 as output
    DDRD |= (1 << PD0) | (1 << PD1) | (1 << PD2);

    while (1)
    {
        // RED ON
        PORTD = (1 << PD0);
        _delay_ms(5000);

        // YELLOW ON
        PORTD = (1 << PD1);
        _delay_ms(2000);

        // GREEN ON
        PORTD = (1 << PD2);
        _delay_ms(5000);
    }

    return 0;
}
