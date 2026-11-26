#include <stdio.h>
#include "main.h"
/**
* malloc_checked - allocation memory
* @b: number of bytes
*
* Return: void
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit (98);

	return (0);
{
