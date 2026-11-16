#include "main.h"
/**
* print_triangle - print triangle
* @size: size of triangle
*
* Return: Always 0.
*/
void print_triangle(int size)
{
	int x,y,z;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}


	for (x = 0; x < size; x++)
	{
		for (y = size; y > x; y--)
			_putchar(' ');

		for (z = 0; z <= x; z++)
			_putchar('#');

		_putchar('\n');
	}
}
