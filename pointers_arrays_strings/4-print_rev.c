#include "main.h"
/**
* print_rev - revers print
* @s: string
*
* Return: void
*/
void print_rev(char *s)
{

	int i;

	i = 0;

	while (s[i] != '\0')
		i++;

	while (i > 0)
	{
		i--;
		_putchar(s[i]);
	}
	_putchar('\n');
}
