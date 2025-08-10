#include <reg51.h>

#define LED1 P0
#define LED2 P1

sbit LED1_EN = P2^0;
sbit LED2_EN = P2^1;

void short_delay()
{
	int i;
	for(i = 0; i < 100; i++);
}

void delay()
{
	int i, j;
	for(i = 0; i < 100; i++)
		for(j = 0; j < 1000; j++);
}

int main()
{
	int numbers[] = {0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07, 0xff, 0x67};

	while(1)
	{
		int i;
		for(i = 0; i < 100; i++)
		{
			int u = i % 10;
			int t = i / 10;

			LED1 = numbers[u];
			LED1_EN = 1;
			LED2_EN = 0;
			short_delay();

			LED2 = numbers[t];
			LED1_EN = 0;
			LED2_EN = 1;
			short_delay();

			LED1_EN = 0;
			LED2_EN = 0;

			delay();  // Keeps the number visible long enough for the eye
		}
	}
}