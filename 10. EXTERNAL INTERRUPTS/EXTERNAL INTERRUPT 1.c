#include<reg51.h>
sbit led1=P0^0;
sbit led2=P0^1;
void delay();



void ISR() interrupt 2// BIT POSITION OF EX0 in IE reg
{
    led2=1;
    delay();
    led2=0;
    delay();
    led2=1;
    delay();
    led2=0;
    delay();
}
int main()
{
    led1=led2=0;
    
    IE=0x84; //1000 0001
    // level trigger IT0 = 0;
    // Edge trigger IT0 = 1;
    IT0=1;
    while(1)
    {
        led1=~led1; 
        delay();

    }
}
void delay()
{
    int i,j;
    for(i=0; i<1000; i++)
    for(j=0; j<100; j++);
}