#include<reg51.h>
#define LED P2
void delay();

int main()
{
	LED = 0x00; 
	while(1)
	{
		LED = 0xff;
		delay();
		
		LED = 0x00;
		delay();
	}
}

void delay()
{
	TMOD = 0x01;
	
	TH0	= 0xDC;
	TL0 = 0x00;
	
	TR0 = 1;
	while(TF0 == 0);
	TF0 = 0;
	TR0 = 0;
	
}
	