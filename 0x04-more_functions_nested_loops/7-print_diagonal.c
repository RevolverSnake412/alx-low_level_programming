#include "main.h"
/**
 * print_diagonal - it draws a diagonal line
 *
 * @n: int
*/
void print_diagonal(int n)
{int i = 1, j, count = -1;
	if (n > 0)
	{
		while (i <= n)
		{
			if (i != 1)
			{
				_putchar('\n');
			}
			for (j = 0; j <= count; j++)
			{
				_putchar(32);
			}
			_putchar(92);
			i++;
			count++;
		}
	}
	_putchar('\n');
}
