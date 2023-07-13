#include <stdlib.h>
#include "main.h"

/**
 * realloc - realloc
 *
 * @ptr: void
 * @old_size: uns int
 * @new_size: uns int
 *
 * Return: ptr
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *temp_ptr;
	char *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	temp_ptr = malloc(new_size);

	if (!temp_ptr)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			temp_ptr[i] = old_ptr[i];
	}
	else
	{
		for (i = 0; i < old_size; i++)
			temp_ptr[i] = old_ptr[i];
	}

	free(ptr);
	return (temp_ptr);
}
