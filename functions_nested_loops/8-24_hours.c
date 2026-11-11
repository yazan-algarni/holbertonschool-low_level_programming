#include "main.h"
/**
* jack_bauer - print all minute of the day of Jack Bauer
*
*
* Return: alweys 0
*/
void jack_bauer(void)
{
	int hour,minute;

	for (hour = 0; hour < 24; hour++)
		for(minute = 0; minute < 60; minute++)
		{
			_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
			_putchar(':');
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			_putchar('\n');
		}

}
