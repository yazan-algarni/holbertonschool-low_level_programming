#include "main.h"
/**
* print_array - print array with ","
* @a: the array
* @n: lingeth of array
* Return: void
*/
void print_array(int *a, int n)
{
    int i;

    for (i = 0; i < n; i++){
        _putchar(a[i]);
        _putchar(',');
        _putchar(' ');
    }
    _putchar('\n');
}