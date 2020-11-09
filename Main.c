#include <LPC214x.H> /* LPC214x definitions */
#include "lcd.h"
int main (void)
{
init_lcd(); // Initialize LCD
while(1)
{
lcd_putstring(LINE1," TESTING");
}
}