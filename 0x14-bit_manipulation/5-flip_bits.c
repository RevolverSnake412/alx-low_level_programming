#include "main.h"
/**
 * flip_bits - flip+bits
 * @n: number provided
 * @m: second number provided
 *
 * Return: number of bits to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	int bit = 0;

	while (diff)
	{
		if ((diff & 1) == 1)
			bit++;

		diff = diff >> 1;
	}

	return (bit);
}
/* OwO */
