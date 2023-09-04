#include <16F877A.h>
#fuses XT, NOWDT
#use delay (clock=4M)
#byte TRISB=0x86
#byte PORTB=0x06

void main(){
   // Set all pins of Port B as outputs
   TRISB = 0x00;
   // Initialize PORTB to 0x00 (all LEDs off)
   PORTB = 0x00;
   
   while(true) {
      // Turn on all LEDs
      PORTB = 0xFF;
      delay_ms(1000);
      
      // Turn off all LEDs
      PORTB = 0x00;
      delay_ms(1000);
   }
}

