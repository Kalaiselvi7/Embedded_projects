#include<reg51.h>
#define led P0
void delay();
int main()
{
	P0 = 0x00; // initially 0000 0000 everything.
  while(1)
	{
    P0 = 0xff;  //1111 1111 ON of every LED light
    delay();
		P0 = 0x00;
		delay();
	}
}
void delay()
{
	int i,j;
	for(i=0;i<1000;i++)
	for(j=0;j<100;j++);
}

	
