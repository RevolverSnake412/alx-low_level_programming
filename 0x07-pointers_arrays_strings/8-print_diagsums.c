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
{	int s0 = 0, s1 = 0, y = 0;

	while (y < size)
	{
		s0 += a[(y * size) + y];
		y++;
	}
	y = size;

	while (y > -1)
	{
		s1 += a[(y * size) + (size - y - 1)];
		y--;
	}
	printf("%d, %d\n", s0, s1);
}
