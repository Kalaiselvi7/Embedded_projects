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
	int numbers[] = {0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0xff,0x67};
	while(1)
	{
		int i;
		for(i=0;i<10;i++)
		{
			delay();
			LED = numbers[i];
		}
	}
}