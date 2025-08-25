#include <reg51.h>                           
sbit LED1 = P2^0;      
sbit LED2 = P2^1;   
sbit LED3 = P2^2;        
sbit LED4 = P2^3;      
sbit LED5 = P2^4;        

void delay();

void ISR() interrupt 1   
{

	LED1 = ~LED1;  
	LED2 = ~LED2;  
	LED3 = ~LED3;  
	LED4 = ~LED4;  
  LED5 = ~LED5;   
}

int main()  //when user clear the flag bit then only main code will execute
{
	  delay();
    while(1);
}

void delay()
{
	  IE = 0x82;  
    TMOD = 0x01; 
    TH0 = 0xEE;  
    TL0 = 0x00; 
    TR0 = 1;  
}


