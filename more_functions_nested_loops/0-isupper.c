#include "main.h"
/**
* int _isupper - check upper character
* @c: is a character
*
* Return: 1 or 0
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (0);
}
