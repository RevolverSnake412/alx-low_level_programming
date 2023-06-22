#include "main.h"
/**
 * print_triangle - right angle triangle
 *
 * @size: int provided by user
*/
void print_triangle(int size)
{	int i, j, hash = 1, spaces;
	for (i = 1; i <= size; i++)
	{
		spaces = size;
		spaces -= i;
		for (; spaces > 0; spaces--)
		{
			_putchar(32);
		}

		for (j = 0; j != hash; j++)
		{
			_putchar(35);
		}
		hash++;
		_putchar('\n');
	}
}
