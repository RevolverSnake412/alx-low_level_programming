#include "main.h"
/**
 * print_number - just prints number provided
 *
 * @n: the number provided by the user
*/
void print_number(int n)
{
	int zero = 1;
	int i = 0;

	if (n < 0)
	{
		putchar(45);
		n *= -1;
	}

	while ((n / zero) > 10)
	{
		zero *= 10;
		i++;
	}
	for (; i != 0; i--)
	{
		putchar(((n / zero) % 10) + 48);
		zero /= 10;
	}
	putchar((n % 10) + 48);
}
