#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - diagsums
 *
 * @a: int
 *
 * @size: int
*/
void print_diagsums(int *a, int size)
{	int s0 = 0, s1 = 0, i = 0;

	while (i < size)
	{
		s0 += a[i * size + y];
		y++;
	}
	i = size;

	while (i >= 0)
	{
		s1 += a[i * size + (size - i - 1)];
		i--;
	}
	printf("%d, %d\n", s0, s1);
}
