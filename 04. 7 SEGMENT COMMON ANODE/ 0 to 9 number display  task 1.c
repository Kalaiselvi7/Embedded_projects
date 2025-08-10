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
	int a[] = {0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x10};
	while(1)
	{
		int i;
		for(i=0;i<10;i++)
		{
			delay();
			LED = a[i];
		}
	}

}
