#include "main.h"
/**
 * get_bit - get_bit
 * @n: provided number
 * @index: index
 *
 * Return: -1 if fails, bit on success
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return (n & mask ? 1 : 0);
/* OwO */
}
