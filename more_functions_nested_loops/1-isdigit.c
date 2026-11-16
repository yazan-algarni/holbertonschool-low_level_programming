#include "main.h"
/**
* _isdigit - check the number
* @c: the number
*
* Return: 1 or 0
*/
int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
		return (1);

	return (0);
}
