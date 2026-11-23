#include "main.h"
/**
* rev_string - reverse string
* @s: the string
*
* Return: void
*/
void rev_string(char *s)
{
	int i, j;
	char tmp;

	j = 0;
	while (s[end] != '\0')
		j++;
	j--;

	i = 0;
	while (i < j)
	{
		tmp = s[start];
		s[i] = s[j];
		s[j] = tmp;
		start++;
		j--;
	}
}

