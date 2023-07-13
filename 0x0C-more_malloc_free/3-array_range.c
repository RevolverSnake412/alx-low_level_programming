#include "main.h"
#include <stdlib.h>
/**
 * array_range - arr range
 *
 * @min: int
 * @max: int
 *
 * Return: int_arr on success
*/
int *array_range(int min, int max)
{
	int *int_arr, i;

	if (min > max)
	{
		return (NULL);
	}

	int_arr = malloc(sizeof(int) * (max - min + 1));

	if (int_arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++)
	{
		int_arr[i] = min++;
	}
	return (int_arr);
}
