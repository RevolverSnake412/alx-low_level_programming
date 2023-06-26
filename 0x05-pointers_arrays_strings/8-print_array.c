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
{	int i = 0;
	for (; i <= n - 1; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			_putchar(44);
			_putchar(32);
		}
	}
	_putchar('\n');
}
