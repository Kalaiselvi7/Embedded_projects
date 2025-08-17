#include<reg51.h>
#define LED P2
void delay();

int main()
{
	LED = 0x00;
	while(1)
	{
		LED = 0xFF;
		delay();
		
		LED = 0x00;
		delay();
	}
}

void delay()
{
	TMOD = 0x05;
	TR0 =1;
	
	TH0 =0xff;
	TL0 = 0xf9;
	
	while(TF0 == 0);
	TF0 = 0;
	TR0 = 0;
}