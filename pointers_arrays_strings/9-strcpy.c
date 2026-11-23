#include "main.h"
/**
* _strcpy - copy the array
* @dest: pointer
* @src: array
*
* Return: dest
*/
char *_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        dest[i] = str[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}