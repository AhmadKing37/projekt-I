#ifndef HEADER_H_
#define HEADER_H_

#define F_CPU 16000000UL 

#include <avr/io.h> 
#include <util/delay.h> 


/*
Definerar vilken port som lysdioden/knappen �r kopplad till
*/
#define LED1 6 // Led 1 kopplad till PORTD6
#define LED2 7 // Led 2 kopplad till PORTD7
#define LED3 0 // Led 3 kopplad till PORTB0

#define BUTTON1 4 // Knapp 1 kopplad till PORTB4
#define BUTTON2 5 // Knapp 2 kopplad till PORTB5

#define LED1_ON PORTD |= (1<<LED1) // T�nder dioden
#define LED2_ON PORTD |= (1<<LED2) // T�nder dioden
#define LED3_ON PORTB |= (1<<LED3) // T�nder dioden

#define LED1_OFF PORTD &= ~(1 << LED1) // Sl�cker dioden
#define LED2_OFF PORTD &= ~(1 << LED2) // Sl�cker dioden
#define LED3_OFF PORTB &= ~(1 << LED3) // Sl�cker dioden

void leds_on(void);  // T�nder alla leds
void leds_off(void); // Sl�cker alla leds

#define BUTTON1_IS_PRESSED (PINB & (1 << BUTTON1)) // Indikerar vad knappen 1 g�r nertryckt
#define BUTTON2_IS_PRESSED (PINB & (1 << BUTTON2)) // Indikerar vad knappen 2 g�r nertryckt

/*
Initierar I/O-portar.
*/
void setup(void);

/*
Delayfunktionen i mikrosekunder
*/
void delay_ms(const uint16_t delay_time);

/*
Ledblinksekvens om knapp 1 �r nedtryckt
*/
void leds_blink1(const uint16_t blink_speed);

/*
Ledblinksekvens om knapp 2 �r nedtryckt
*/
void leds_blink2(const uint16_t blink_speed);


#endif