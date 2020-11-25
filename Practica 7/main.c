//LIBRARIES
#include "device_config.h"
//DIRECTIVEs SECTION
#define _XTAL_FREQ 1000000
#define DELAY_SWEEP 300 
//DATA TYPEs SECTION
enum port_dir{output, input};
enum port_DCAC{digital, analog};
enum led_state{led_OFF, led_ON};
enum button_state{pushed, no_pushed};
enum exponent{bbase=2, limit=8};
//ISRs SECTION
__interrupt(high_priority) void high_isr (void){
    Nop(); //Consume one Instruction Cycle 
}
__interrupt(low_priority) void low_isr (void){
    Nop();//Consume one Instruction Cycle
}
//FUNCTIONs DECLARATION
void portsInit(void);//
int count = 0;
//MAIN
void main(void) {
    portsInit();
    LATB = 0;
    int f = 0x00;
    int i = 0x00;
    int d = 0x00;
    while(1){
        LATB = 0xE0; //1110 
        if(PORTBbits.RB7 == pushed) {
         i = f<<4;
         f = 0x0D;
         d = i|f;
         LATD = d;
        }
         else if (PORTBbits.RB6 == pushed){
         i = f<<4;
         f = 0x0C;
         d = i|f;
         LATD = d;   
         }
         else if (PORTBbits.RB5 == pushed){
         i = f<<4;
         f = 0x0B;
         d = i|f;
         LATD = d;   
         }
         else if (PORTBbits.RB4 == pushed){
         i = f<<4;
         f = 0x0A;
         d = i|f;
         LATD = d;   
         }             
    }
}
//FUNCTIONs
void portsInit( void ){
ANSELD = digital;
TRISD = output;
ANSELB = digital;
TRISB = 0b00001111;
LATD = 0x00;
}

