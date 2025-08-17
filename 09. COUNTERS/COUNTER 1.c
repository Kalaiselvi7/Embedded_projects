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
	TMOD = 0x50;
	TH1 = 0xFF;
	TL1 = 0xFA;
	
	TR1 = 1;
	while(TF1 == 0);
	TF1 = 0;
	
	TR1 = 0;
}
	