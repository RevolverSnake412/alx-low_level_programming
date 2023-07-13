#include <stdlib.h>
#include "main.h"
/**
 *
*/
void *malloc_checked(unsigned int b)
{
	int *pb = malloc(b);

	if (pb == NULL)
	{
		return NULL;
	}
	return (pb);
}
