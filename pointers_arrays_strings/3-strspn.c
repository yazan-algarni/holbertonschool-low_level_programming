#include "main.h"
/**
* _strspn - check the character
* @s: the string
* @accept: the characters to check
*
* Return: num of baytes
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
		}

		if (accept[j] == '\0')
			break;

		count++;
	}

	return (count);
}
