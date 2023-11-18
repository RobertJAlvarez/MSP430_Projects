#ifndef led_included
#define led_included
#include <msp430.h>

#define LED_GREEN BIT0      // P1.0
#define LED_RED BIT6        // P1.6
#define LEDS (BIT0 | BIT6)

extern unsigned char red_on, green_on;
extern unsigned char led_changed;

void led_init(void);        //Initialize LEDs
void led_update(void);      //Update LEDs
void greenControl(int on);  //Turn on/off green light
void change_red(void);      //Change red led
void led_off(void);

// These are boolean flags
extern unsigned char leds_changed, gree_led_state, red_led_state;

#endif // included
