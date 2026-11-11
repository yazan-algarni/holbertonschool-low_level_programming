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
		return (1);
	else if (n == 0)
		return (0);
	else
		return (-1);

}
