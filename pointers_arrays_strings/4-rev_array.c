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
	int i, t;

	i = 0;
	while (i < n / 2)
	{
		t = a[i];
		a[i] = a[i-n-1];
		a[i-n-1] = t;
		i++;
	}
}
