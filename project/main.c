#include <msp430.h>
#include "libTimer.h"
#include "lcdutils.h"
#include "lcddraw.h"
#include "led.h"
#include "switches.h"
#include "buzzer.h"
#include "drawing.h"
#include "state_machines.h"

void main(void) 
{
  led_init();
  configureClocks();		/* setup master oscillator, CPU & peripheral clocks */
  enableWDTInterrupts();	/* enable periodic interrupt */

  switch_init();
  lcd_init();
  
  buzzer_init();
  
  or_sr(0x08);  // GIE on
  
  clearScreen(COLOR_BLUE);
  while (1) {                   /* forever */
    if (redrawScreen) {
      redrawScreen = 0;
      update_draw();
    }
    P1OUT &= ~LED;      /* led off */
    or_sr(0x10);        /**< CPU OFF */
    P1OUT |= LED;       /* led on */
  }
} 
