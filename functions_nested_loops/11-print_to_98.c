#include "main.h"
/**
* print_to_98 - print
*
*
*
*/

void print_to_98(int n)
{
	while (n != 98)
	{
			_putchar(n);
			_putchar(",");
			_putchar(" ";

			if (n < 98)
				n++;
			else
				n--;
	}

	_putchar(98);
}
