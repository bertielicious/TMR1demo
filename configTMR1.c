#include "constants.h"
void configTMR1(void)
{
    //Set the internal system clock Fosc eg 16MHz, 1us for each increment of TMR1
    T1CONbits.TMR1CS1 = LO;
    T1CONbits.TMR1CS0 = HI;
    
    // set prescaler to 1:1
    T1CONbits.T1CKPS1 = LO;
    T1CONbits.T1CKPS0 = LO;
    
    //clear contents of TMR1H and TMR1L before enabling interrupts
    TMR1H = 0x80;
    TMR1L = 0x00;
    
    //enable TMR1 interrupts
    INTCONbits.GIE = HI;// enables all active interrupts
    INTCONbits.PEIE = HI;// enables all active peripheral interrupts
    PIE1bits.TMR1IE = HI;// enables the TMR1 overflow interrupt
    PIR1bits.TMR1IF = LO;// clear TMR1 interrupt flag
    T1CONbits.TMR1ON = HI;// enables TMR1
}
