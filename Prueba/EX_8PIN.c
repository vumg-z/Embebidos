#include <16F877A.h>
#fuses XT, NOWDT
#use delay (clock=4M)
#byte TRISB=0x86
#byte PORTB=0x06

void main(){
   output_b(0x00);
   
   while(true) {
      output_high(PIN_B0);
      output_low(PIN_B1);
      
      delay_ms(1000);
      
      output_low(PIN_B0);
      output_high(PIN_B1);
      
      delay_ms(1000);
   }
   
}

