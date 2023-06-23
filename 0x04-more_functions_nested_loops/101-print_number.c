#include "main.h"
/**
 * print_number - just prints number provided
 *
 * @n: the number provided by the user
*/
void print_number(int n)
{
	if (n <= -1)
	{
		n *= -1;
		_putchar(45);
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + 48);
}

