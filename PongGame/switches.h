#ifndef switches_included
#define switches_included

#define SW1 BIT0
#define SW2 BIT1
#define SW3 BIT2
#define SW4 BIT3

#define SWITCHES (SW1 | SW2 | SW3 | SW4) // switches from 1-4

int switches;

void switch_init(void); // setup switch
void wdt_c_handler(void);

#endif
