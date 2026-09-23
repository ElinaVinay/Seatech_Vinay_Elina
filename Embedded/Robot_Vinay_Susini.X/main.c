/* 
 * File:   main.c
 * Author: E306-PC6
 *
 * Created on September 23, 2026, 2:34 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <xc.h>
#include "ChipConfig.h"
#include "IO.h"
#include "timer.h"
#include "PWM.h"
int main (void){

 //Initialisation oscillateur

InitOscillator();
InitIO();
InitTimer23();
InitTimer1();
InitPWM();
PWMSetSpeed(20);
 
// Configuration des input et output (IO)

LED_BLANCHE_1 = 1;
LED_BLEUE_1 = 1;
LED_ORANGE_1 = 1;
LED_ROUGE_1 = 1;
LED_VERTE_1 = 1;
LED_BLANCHE_2 = 1;
LED_BLEUE_2 = 1;
LED_ORANGE_2 = 1;
LED_ROUGE_2 = 1;
LED_VERTE_2 = 1;
// Boucle Principale

while(1)
{
  //LED_BLANCHE_1 = !LED_BLANCHE_1 ;
} // fin main
}

