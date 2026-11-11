#include "main.h"
/**
* times_table - prints the 9 times table
*/
void times_table(void)
{
	int i, j;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
			_putchar(i * j);

		_putchar('\n');
	}
}
