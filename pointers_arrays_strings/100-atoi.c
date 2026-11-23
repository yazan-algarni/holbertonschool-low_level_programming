#include "main.h"
/**
* _atoi - convert the number in string to integer number
* @s: string
*
* Return: integer number
*/
int _atoi(char *s)
{
int sign, result;

	sign = 1;
	result = 0;

	while (*s != '\0' && (*s < '0' || *s > '9'))
	{
		if (*s == '-')
			sign = -sign;
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 - (*s - '0');
		s++;
	}

	if (sign > 0)
		result = -result;

	return (result);
}
