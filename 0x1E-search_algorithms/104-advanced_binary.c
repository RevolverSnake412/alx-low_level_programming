#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
  * advanced_binary_recursive - advanced binary recursive.
  * @array: points to the first element of an array.
  * @right: the right of the array.
  * @left: the left of the array.
  * @value: the value to find.
  *
  * Return: index if value found, otherwise -1
*/
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recursive(array, left, i, value));
	return (advanced_binary_recursive(array, i + 1, right, value));
}

/**
  * advanced_binary - advanced binary
  * @array: points to the first element of an array.
  * @size: the size of the array.
  * @value: the value to find.
  *
  * Return: index if value found, otherwise -1
*/
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
