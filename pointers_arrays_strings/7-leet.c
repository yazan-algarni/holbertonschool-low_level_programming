#include "main.h"
/**
* leet - encode
* @a: the string
*
* Return: encode sting
*/
char *leet(char *a)
{
	char s[] = "aAeEoOtTlL";
	char e[] = "4433007711";
	int i,j;

	for (i = 0; a[i] != '\0'; i++)
		for (j = 0; s[j] != '\0'; j++)
			if (s[j] == a[i])
				a[i] = e[j];

	return (a);
}
