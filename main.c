/* port_test.c
 * The following program just  keeps toggling pin 0 of port B
 */

#include <avr/io.h> //standard include for ATMega16
#include "bitop.h"
#include "lcd.h"

int main(int argc, char* argv[])
{
	DDRB=0xff; //PORTB as OUTPUT
	PORTB=0x00; //All pins of PORTB LOW

	DDRD=0xff; //PORTB as OUTPUT
	PORTD=0x00; //All pins of PORTB LOW

	lcd_init();

	lcd_printf("123456789ABCDEFGHIJKLMNOPQRSTU");
	
	unsigned int i;
	while(1) //Infinite loop
	{
		for(i=0;i<65535;i++); //delay
		tbi(PORTB, PB7);
		for(i=0;i<65535;i++); //delay
		tbi(PORTB, PB6);
		for(i=0;i<65535;i++); //delay
		tbi(PORTB, PB5);
		for(i=0;i<65535;i++); //delay
		tbi(PORTB, PB4);
	}
}
