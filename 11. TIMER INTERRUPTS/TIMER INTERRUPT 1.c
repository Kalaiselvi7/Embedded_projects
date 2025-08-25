#include<reg51.h>
#define led P2
void delay();

void ISR()interrupt 1
{
	led = ~led;
	//TF0=0;
}

int main()
{
	
	delay();
	while(1);	
	}
void delay()
{
	IE=0X82;
	TMOD=0X01;
	TR0=1;
	TH0=0XEE;
	TL0=0X00;//MAX 65536 TF0=1
}