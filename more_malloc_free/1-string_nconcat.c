#include <stdio.h>
#include "main.h"
/**
* string_nconcat - merge 2 arrayes
*
*
* Return: pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	unsigned int i, j, le1, le2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (le1 = 0; s1[le1] != '\0'; le1++)
	;

	for (le2 = 0; s2[le2] != '\0'; le2++)
	;

	if (n > le2)
		n = le2;


	res = malloc(sizeof(char) * (le1 + n + 1));

	if (res == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		res[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
		res[i+j] = s2[j];

	res[i+j] = '\0';
	return (res);

}
