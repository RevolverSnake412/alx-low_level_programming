#include "main.h"
/**
 * print_square - draws a nice square (or rectangles :skull:)
 *
 * @size: int
*/
void print_square(int size)
{	int i, j;
	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar(35);
			}
			if (i != size)
			{
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
