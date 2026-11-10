#include "main.h"

/**
 * islower - Write a function that checks for lowercase character.
 *
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (c < 96 && c > 123)
		return (1);
	else
		return (0);
}
