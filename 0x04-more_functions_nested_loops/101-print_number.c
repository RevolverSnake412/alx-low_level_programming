#include "main.h"
/**
 * print_number - just prints number provided
 *
 * @n: the number provided by the user
*/
void print_number(int n)
{	unsigned int number;
	if (n < 0)
	{number = -n;
		_putchar(45);
	} else
	{number = n;
	}

	if (number / 10)
	{print_number(number / 10);
	}
	_putchar((number % 10) + 48);
}
