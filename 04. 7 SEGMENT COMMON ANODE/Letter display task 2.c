#include<reg51.h>
#define LED P0
void delay()
{
	int i,j;
	for(i=0;i<100;i++)
	for(j=0;j<1000;j++);
}
int main()
{
	int letters[] = {0x88,0x80,0xc6,0xc0,0x86,0x8e,0x8c};
	while(1)
	{
		int i;
		for(i=0;i<7;i++)
		{
			delay();
			LED = letters[i];
		}
	}
}
			
