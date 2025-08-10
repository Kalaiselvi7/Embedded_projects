#include<reg51.h>
#define LED P2
sbit SW1 = P1^1 ;
sbit SW2 = P1^2 ;
sbit SW3 = P1^3 ;
sbit SW4 = P1^4 ;
void delay()
{
	int i,j;
	for(i=0;i<100;i++)
	for(j=0;j<1000;j++);
}
int main()
{
	//P1 = 0xff;
	P2 = 0x00;
	while(1)
	{
	if(SW1 == 0)
	{
	
		{
		P2 = 0xff;
		}
	}
	else if(SW2 == 0)
	{
	
		{
		P2 = 0x01;
		delay();
		P2 = 0x02;
		delay();
		P2 = 0x04;
		delay();
		P2 = 0x08;
    delay();
    P2 = 0x10;
    delay();
    P2 = 0x20;
    delay();
    P2 = 0x40;
    delay();
    P2 = 0x80;
    delay();
		}
	}
	else if(SW3 ==0)
	{
		
		{
		P2 = 0x80;
		delay();
		P2 = 0x40;
		delay();
		P2 = 0x20;
		delay();
		P2 = 0x10;
		delay();
		P2 = 0x08;
		delay();
		P2 = 0x04;
		delay();
		P2 = 0x02;
		delay();
		P2 = 0x01;
		delay();
		}
	}
	else if(SW4 == 0)
	{
	
		{
			P2 = 0x03;
			delay();
			P2 = 0x0C;
			delay();
			P2 = 0x30;
			delay();
			P2 = 0xC0;
			delay();
		}
	}
	else
	{
		P2 = 0x00;
	}
}
			
		}
		









