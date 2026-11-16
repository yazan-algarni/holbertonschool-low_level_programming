#include "main.h"
/**
* print_line - print "_"
*
*
* Return: void
*/
void print_line(int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		if (n != 0)
			_putchar('_');
		i++;
	}

	_putchar('\n');
}
