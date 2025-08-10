#include<reg51.h>
#define LED P0
sbit RS = P2^0;
sbit RW = P2^1;
sbit EN = P2^2;
void delay(int ms);
void send_cmd(char a);
void send_data(char b);
void display_data(char *s);
void lcd_init();
int main()
{
	LED = 0x00;
	lcd_init();
	while(1)
	{
		send_cmd(0x80);
		send_data('k');
		send_cmd(0xc0);
		display_data("kalai selvi");
		delay(1000);
		send_cmd(0x01);
		delay(100);
	}
}
void lcd_init()
{
	
	send_cmd(0x38);
	send_cmd(0x0E);
	send_cmd(0x01);// clear display screen
	send_cmd(0x06);
	//send_cmd(0x04); left side cursor move
}
void send_cmd(char a)
{
	LED = a;
	RS = 0;
	RW = 0;
	EN = 1;
	delay(100);
	EN =0;
}
void send_data(char b)
{
	LED = b;
	RS = 1;
	RW = 0;
	EN =1;
	delay(100);
	EN = 0;
}
void display_data(char *s)
{
	while(*s)
	{
		send_data(*s++);
	}
}
void delay(int ms)
{
	int i,j;
	for(i=0;i<ms;i++)
	for(j=0;j<1000;j++);
}

	
