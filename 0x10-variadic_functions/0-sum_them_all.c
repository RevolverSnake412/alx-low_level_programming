#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums
 *
 * @n: const unsigned int
 *
 * Return: S
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int S = 0, num;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		S += num;
	}

	va_end(args);
	return (S);
}
