#include "main.h"
/**
 * print_number - just prints number provided
 *
 * @n: the number provided by the user
*/
void print_number(int n)
{	int zero = 1;
	int temp = n;

	if (n == 0)
	{
	_putchar(48);
	return;
	}
	if (n < 0)
	{
		_putchar(45);
		n *= -1;
	}
	while (temp != 0)
	{
	zero *= 10;
	temp /= 10;
	}
	zero /= 10;
	while (zero != 0)
	{
	int digit = n / zero;

	_putchar('0' + digit);
	n %= zero;
	zero /= 10;
	}
}

