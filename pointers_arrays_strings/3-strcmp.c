#include "main.h"
/**
* _strcmp - comper betwen 2 string
* @s1: firist string
* @s2: second string
*
* Return: the comper betwen s1 & s2
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;

	return (s1[i] - s2[i]);
}
