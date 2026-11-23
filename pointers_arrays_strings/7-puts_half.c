#include "main.h"
/**
* puts_half - print second half of string
* @str: the string
*
* Return: void
*/
void puts_half(char *str)
{
	int len, i;

	len = 0;
    
	while (str[len] != '\0')
		len++;
	for (i = (len + 1) / 2; i < len; i++)
		_putchar(str[i]);

    _putchar('\n');
}
