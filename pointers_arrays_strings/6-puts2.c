#include "main.h"
/**
* puts2 - print new line after 2 charecter
* @str: the charecter
*
* Return: void
*/
void puts2(char *str)
{
    int i;

    for (i = 0; i < 2; i++)
    {
        if (str != '\0' && i == 2)
            {
                i = 0;
                _putchar('\n');
            }
        _putchar(str);
    }
}