#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - returns memory address
 *
 * @b: unsigned int input
 *
 * Return: pb on success
*/
void *malloc_checked(unsigned int b)
{
	int *pb = malloc(b);

	if (pb != NULL)
	{
		return (pb);
	}
	else
	{
		exit(98);
	}
}
