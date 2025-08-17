#include<reg51.h>
#define LED P2
void delay();

int main()
{
	LED  =0x00;
	while(1)
	{
		LED = 0XFF;
		delay();
		
		LED = 0X00;
		delay();
	}
}

void delay()
{
	int i;   //50 milli seconds
	for(i=0;i<10;i++)
	{
	 TMOD = 0x10;
	
	 TH1 = 0xEE;
	 TL1 = 0x00;
	
	 TR1 = 1;
	 while(TF1 == 0);
	 TR1 = 0;
	
	 TF1 = 0;
	}
}
	
