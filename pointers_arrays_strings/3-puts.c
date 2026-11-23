#include "main.h"
/**
* _puts - print string
* @str: the string
*
* Return: void
*/
void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(str[i]);
		str++;
	}

	_putchar('\n');

}
