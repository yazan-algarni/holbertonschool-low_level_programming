#include "main.h"
/**
 * _isalpha - Checks if a character
 * @c: The character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _isalpha(int c)
{
	if (c > 64 && c < 91 || c > 96 && c < 123)
		return (1);
	else
		return (0);
}
