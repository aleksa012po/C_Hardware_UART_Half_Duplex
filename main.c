/*
 * C_UART.c
 *
 * Created: 5.12.2022. 14:15:23
 * Author : Aleksandar Bogdanovic
 */ 

#include <avr/io.h>
#include "Defines.h"

void transmitInit() {
	
	UBRR0H = 0;
	UBRR0L = UBRRN;									// LOW byte, setujemo Baud rate preko definicije
	
	UCSR0A = 0;
	UCSR0B |= (1 << TXEN0)  | (1 << RXEN0);			// Ukljucujemo RxB i TxB
	UCSR0C |= (1 << UCSZ01) | (1 << UCSZ00);		// Asynch mode, 8 bit, no parity
	
}

int main(void)
{
    transmitInit();
	
while(1) {
	
	uint8_t data = 0;
	
	if (UCSR0A & (1 << RXC0)) {
		
		data = UDR0;
		UDR0 = data;
		
		} 
	   else {	
			__asm("nop");							// NOP - do nothing
		}
	}
}

