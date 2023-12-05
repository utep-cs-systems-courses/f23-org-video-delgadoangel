#ifndef switches_included
#define switches_included

#define LED BIT6		/* note that bit zero req'd for display */

#define SW1 1
#define SW2 2
#define SW3 4
#define SW4 8

#define SWITCHES 15

void switch_init();
void switch_interrupt_handler();

extern char switch_state_down, switch_state_changed; /* effectively boolean */
extern int switches;

#endif // included
