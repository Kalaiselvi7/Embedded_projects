#include<reg51.h>
#define LED P0
sbit RS = P2^0;
sbit RW = P2^1;
sbit EN = P2^2;
sbit SW = P2^5;
void delay(int ms);
void lcd_init();
void send_cmd(char a);
void send_data(char b);
void display_data(char *s);
int main()
{
	LED = 0x00;
	lcd_init();
	while(1)
	{
		if(SW == 0)
		{
			send_cmd(0x01);
			send_cmd(0x80);
			display_data("tambaram,egnore,guindy");
			delay(50);
			send_cmd(0xc0);
			display_data("Chennai");
			send_data(0x01);
			delay(100);
		}
		else
		{
		 send_cmd(0x01);
		 send_cmd(0x80);
		 send_cmd(0x06);
		 display_data("Trichy");
		 send_cmd(0x01);
		 delay(100);
		}
	}
}
void lcd_init()
{
	 send_cmd(0x38);
	 send_cmd(0x0e);
	 send_cmd(0x01);
	 send_cmd(0x06);
}
void send_cmd(char a)
{
	LED = a;
	RS = 0;
	RW = 0;
	EN = 1;
	delay(10);
	EN =0 ;
}
void send_data(char b)
{
	LED = b;
	RS= 1 ;
	RW = 0 ;
	EN = 1 ;
	delay(10); 
	EN = 0 ;
}	
void display_data(char *s)
{
	while(*s)
	{
		send_data(*s++);
	}
}
void delay( int ms)
{
	int i,j;
	for(i=0;i<ms;i++)
	for(j=0;j<1000;j++);
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
		
		
