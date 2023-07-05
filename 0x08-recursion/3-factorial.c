#include "main.h"
/**
 * factorial - factorial :3
 *
 * @n: int
 *
 * Result: -1 if under zero, 1 if n equals one, result if greater than one
*/
int factorial(int n)
{
	int result;

	if (n < 0)
	{
		return(-1);
	}

	if (n == 1)
	{
		return (1);
	}

	result = n * factorial(n - 1);
	return (result);
}
