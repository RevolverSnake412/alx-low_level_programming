#include "main.h"
/**
 * print_number - just prints number provided
 *
 * @n: the number provided by the user
*/
void print_number(int n)
{
	unsigned int number;
	int zero = 1;
	int i = 0;

	if (n < 0)
	{
		_putchar(45);
		number = -n;
	}
	else
	{
		number = n
	}

	while ((number / zero) >= 10)
	{
		zero *= 10;
		i++;
	}
	for (; i != 0; i--)
	{
		_putchar(((number / zero) % 10) + 48);
		zero /= 10;
	}
	_putchar((number % 10) + 48);
}
