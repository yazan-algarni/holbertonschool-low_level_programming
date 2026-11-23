#include "main.h"
/**
* _strcat - concattenates 2 two string
* @dest: frist string
* @src: second string
*
* Return:
*/
char *_strcat(char *dest, char *src)
{
int i, j;
i = 0;
j = 0;
while (dest != '\0')
i++;

while (src != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
