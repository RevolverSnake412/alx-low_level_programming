#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - Searches in sorted arrays.
 *
 * @array: points to the first element of an array.
 * @size: the size of the array.
 * @value: the value to find.
 *
 * Return: index if value found, otherwise -1
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (!array)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
