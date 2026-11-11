#include "main.h"
/**
* print_sign - to check from the sighn of number
* @n: the number we want know its sign
*
* Return: 1 or -1
*/

int print_sign(int n)
{

	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}

}
