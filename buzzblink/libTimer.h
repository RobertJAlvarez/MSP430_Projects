#ifndef libTimer_included
#define libTimer_included

void configureClocks(void);
void enableWDTInterrupts(void);
void timerAUpmode(void);

unsigned char gert_sr(void);
void set_sr(int sr_val);
int get_sr(void);
void or_sr(int or_val);
void and_sr(int and_val);

#endif // included
