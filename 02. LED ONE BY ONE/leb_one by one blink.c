#include<reg51.h>
#define led P0
void delay()
{
	int i,j;
	for(i=0;i<100;i++)
	for(j=0;j<1000;j++);
}
int main()
{
	P0 = 0x00;
	while(1)
	{
		P0 = 0x01;
		delay();
		P0 = 0x02;
		delay();
		P0 = 0x04;
		delay();
		P0 = 0x08;
		delay();
		P0 = 0x10;
		delay();
		P0 = 0x20;
		delay();
		P0 = 0x40;
		delay();
		P0 = 0x80;
		delay();
		
	}
}