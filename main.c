/*
 * File:   main.c
 * Author: User
 *
 * Created on 17 January 2025, 17:30
 */


#include "constants.h"
#include "configOsc.h"
#include "configPins.h"
#include "configEUSART.h"
#include "configTMR1.h"

void main(void) 
{
    configOsc();
    configPins();
    configEUSART();
    configTMR1();
    
    printf("RC5\n");
    
    while(1)
    {
        /*
        LATAbits.LATA4 = HI;
        __delay_ms(1000);
        LATAbits.LATA4 = LO;
        __delay_ms(1000);
         */
    }
    
    return;
}
