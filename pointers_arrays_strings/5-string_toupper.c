#include "main.h"
/**
* string_toupper - lower to upper
* @a: the string
*
* Return: upper charecter
*/
char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
		if (a > 96 && a < 123)
			a[i] = a[i] - 32;

	return (a);
}
