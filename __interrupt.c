#include "constants.h"
void __interrupt() isr(void)
{
    if(PIR1bits.TMR1IF == HI)
    {
        LATAbits.LATA4 = ~LATAbits.LATA4;
    }
    TMR1H = 0x80;
    TMR1L = 0x00;
    PIR1bits.TMR1IF = LO;
}
