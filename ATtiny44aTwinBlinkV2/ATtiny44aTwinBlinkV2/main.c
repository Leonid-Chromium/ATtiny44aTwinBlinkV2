/*
 * ATtiny44aTwinBlinkV2.c
 *
 * Created: 16.07.2021 3:09:09
 * Author : Leo
 */ 

#include <avr/io.h>
#include <avr/delay.h>
#define  F_CPU 1000000 UL

int stime = 1000;
int stt = 0;

void blink()
{
	PORTA=1;
	_delay_ms(stime);
	PORTA=2;
	_delay_ms(stime);
	blink();
}

int main(void)
{
	DDRA=255;
	blink();
}

