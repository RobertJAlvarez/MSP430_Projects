#ifndef libTimer_included
#define libTimer_included

void configureClocks(void);
void enableWDTInterrupts(void);
void timerAUpmode(void);

unsigned char gert_sr(void);
void set_sr(void), or_sr(void), and_sr(void);

#endif // included
