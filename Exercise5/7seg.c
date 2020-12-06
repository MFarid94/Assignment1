/*
 * 7seg.c
 *
 *  Created on: Aug 23, 2020
 *      Author: mfari
 */
#include <avr/io.h>
#include <util/delay.h>


int main(){
	unsigned char count =0;
	DDRA &=~ (1<<4);
	DDRC |= 0x0F;
	PORTC &= 0xF0;

	while(1){
		if(PIND & (1<<4)){
			_delay_ms(30);
			if(PIND & (1<<4)){
				if(count == 9){
					count = 0;
					PORTC &= 0xF0;
				}
				else{
					count++;
					PORTC = (PORTC & 0xF0)|(count & 0x0F);
				}
			}
			while(PIND & (1<<4)){}
		}
	}
}
