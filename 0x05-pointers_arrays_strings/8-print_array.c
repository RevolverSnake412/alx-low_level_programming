#include <stdio.h>
#include "main.h"
/**
 * print_array - prints all arrays
 *
 * @a: int
 *
 * @n: int
*/
void print_array(int *a, int n)
{	int i = 0, lastind = n - 1;
	for (; i <= lastind; i++)
	{
		printf("%d", a[i]);
		if (i != lastind)
		{
			_putchar(44);
			_putchar(32);
		}
	}
	_putchar('\n');
}
