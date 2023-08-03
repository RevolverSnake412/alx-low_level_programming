#include "main.h"
/**
 * set_bit - set_bit
 * @n: provided number
 * @index: the index
 *
 * Return: 1 on success, -1 on failure
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = ((1UL << index) | *n);

	return (1);
}

/* OwO */
