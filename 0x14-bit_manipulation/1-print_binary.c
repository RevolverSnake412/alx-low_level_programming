#include "main.h"
/**
 * print_binary - convert decimal to binary
 * @n: UL
*/
void print_binary(unsigned long int n)
{
	int fl = 0, i, size = sizeof(unsigned long int) * 8 - 1;
	unsigned long int mask;

	for (i = size; i >= 0; i--)
	{
		if (n == 0)
		{
			_putchar(48);
			break;
		}

		mask = 1UL << i;

		if (n & mask)
		{
			fl = 1;
			_putchar(49);
		}
		else
			if (fl == 1)
				_putchar(48);
	}
}
