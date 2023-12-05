#include <msp430.h>
#include "led.h"

unsigned char red_on = 0;

static char redVal[] = {0, LED};


void led_init()
{
  P1DIR |= LED;		// bits attached to leds are output
  led_update();
}

void led_update()
{
  char ledFlags = redVal[red_on];
  
  P1OUT &= (0xff^LED) | ledFlags; // clear bit for off leds
  P1OUT |= ledFlags;		     // set bit for on leds
}

