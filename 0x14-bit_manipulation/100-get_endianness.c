#include "main.h"
/**
 * get_endianness - get_endianness
 *
 * Return: 0 if big Endian, 1 if small Endian
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *endian = (char *)&num;

	return (*endian == 1);
}
