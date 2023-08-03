#include "main.h"
/**
 * binary_to_uint - convert binary to decimal
 * @b: provided binary
 *
 * Return: decimal
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int i, bit = 0;

	while (b[bit])
		bit++;

	for (i = 0; i < bit; i++)
	{
		if (b[i] < 48 || b[i] > 49 || !b)
			return (0);

		decimal = (2 * decimal) + (b[i] - 48);
	}
	return (decimal);
}
