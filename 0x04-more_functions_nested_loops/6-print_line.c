#include "main.h"
/**
 * print_line - print lines n time
 *
 * @n: int
*/
void print_line(int n)
{	int i = 1;
	if (n > 0)
	{
		for (; i <= n; i++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
