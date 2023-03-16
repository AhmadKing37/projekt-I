#include "header.h"


int main(void)
{
	setup();
	
	while (1)
	{
		
		if (BUTTON1_IS_PRESSED && !BUTTON2_IS_PRESSED)
		{
			leds_blink1(100);
		}
		
		else if (!BUTTON1_IS_PRESSED && BUTTON2_IS_PRESSED)
		{
			leds_blink2(100);
		}
		
		else if(BUTTON1_IS_PRESSED && BUTTON2_IS_PRESSED)
		{
			leds_on();
		}
		
		else
		{
			leds_off();
		}
		
		
	}
}
