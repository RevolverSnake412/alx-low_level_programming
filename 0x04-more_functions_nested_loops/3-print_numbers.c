#include "main.h"
/**
 * print_numbers - from 0 to 9
 *
 * Return: 0 on success
*/
void print_numbers(void)
{	int i = 0;
	for (; i <= 9; i++)
	{_putchar(i + 48);
	}
	_putchar('\n');
	return (0);
}
