#include "main.h"
/**
 * binary_to_uint - convert binary to decimal
 * @b: provided binary
 *
 * Return: decimal
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal, y = 1;
	int bit = 0;

	if (!b)
		return (0);

	while (b[bit])
	{
		if (b[bit] < 48 || b[bit] > 49)
			return (0);
		bit++;
	}

	bit--;

	while (b[bit])
	{
		if (b[bit] == 49)
			decimal += y;
		bit--;
		y *= 2;
	}

	return (decimal);
}
