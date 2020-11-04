#include "device_config.h"
#include "practice6.h"
#include <math.h>

enum port_dir{ output, input };
enum port_DCAC{ digital, analog };
enum led_state{ led_OFF, led_ON };
enum button_state{ pushed, no_pushed };
enum exponent { bbase=2, limit=8};

//Definition of priorities
__interrupt( high_priority ) void high_isr ( void ){
    Nop( ); // Function to consume one Instruction Cycle 
}
//ISR for low-priority
__interrupt( low_priority ) void low_isr ( void ){
    Nop( );//Funciton to consume one Instruction Cycle
}
void portsInit(void);
void Larson_Display(void); 
//Definition of the LED time activation
void Larson_Display(void){
      int i=0;
      while (i<7){
          LATA = pow(2,i);
          __delay_ms (DELAY_SWEEP);
          i++;
      }
      i=7;
      while (i>=0){
          LATA = pow(2,i);
          __delay_ms(DELAY_SWEEP);
          i--;
      }
      return; 
}

void main( void ) {
    int random;
    int led;
    portsInit( );
    LATA = 0 ; 
    char inverse; 
    //Definition of infinite cycle for LED's activation
    while(1){
       random = rand()%8; 
       led = pow(2,random);
       LATA = led;
       //Activate randomly a LED
       __delay_ms(DELAY_500);
       inverse = LATA^0xFF;
       
       if (inverse == PORTB){
           Larson_Display(); 
    }
       else{ 
           
           if (inverse == PORTB){
               //Activate Knight Rider or Larson Display
               __delay_ms(DELAY_250);
               Larson_Display();
           }
       }              
       }
}
//Initialization of ports A and B
void portsInit( void ){
    ANSELB = digital;
    TRISB = 0b11111111;
    ANSELA = digital; 
    TRISA = 0b00000000;
}