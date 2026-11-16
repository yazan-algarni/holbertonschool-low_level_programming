#include "main.h"

/**
 * print_triangle - Prints a triangle using the character #
 * @size: The size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (x = 0; x < size; x++)
	{
		for (y = size - 1; y > x; y--)
			_putchar(' ');

		for (z = 0; z <= x; z++)
			_putchar('#');

		_putchar('\n');
	}
}
