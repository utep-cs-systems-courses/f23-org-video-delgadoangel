#ifndef led_included
#define led_included

#define LED BIT6               // P1.6

extern unsigned char red_on;

void led_init();
void led_update();

#endif // included
