#include "function_pointers.h"
/**
 * array_iterator - array iteratir
 *
 * @array: int
 * @size: size_t
 * @action: pointer
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL)
	{
		return;
	}

	for (i = 0; i <= size - 1; i++)
	{
		action(array[i]);
	}
}
