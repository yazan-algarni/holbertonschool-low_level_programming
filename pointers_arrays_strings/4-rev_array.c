#include "main.h"
/**
* reverse_array - revers 2 arrays
* @a: the array
* @n: long of array
*
* Return: void
*/
void reverse_array(int *a, int n)
{
	int i;
	int r[] = r[n];

	i = 0;
	while (i < n)
	{
		r[i] = a[n-1-i];
		i++;
	}
	while (i < n)
	{
		a[i] = r[i];
		i++;
	}
}
