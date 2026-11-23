#include "main.h"
/**
* _strcat - concattenates 2 two string
* @dest: frist string
* @src: second string
*
* Return: 1 string
*/
char *_strcat(char *dest, char *src)
{
int i, j;

i = 0;
j = 0;
while (dest[i] != '\0')
i++;

while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
