#ifndef switches_included
#define switches_included

#define SWITCHES 15	// All switches from 0-3

void switch_init(void);
void switch_interrupt_handler(void);

extern unsigned short n_switch_down;

#endif // included
