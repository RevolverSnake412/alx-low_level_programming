#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concat
 *
 * @s1: char
 * @s2: char
 * @n: unsigned int
 *
 * Return: concat on success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i, j, size1, size2;

	i = j = size1 = size2 = 0;
	while (s1[size1] != '\0')
		size1++;

	while (s2[size2] != '\0')
		size2++;

	if (n < size2)
	{
		concat = malloc(sizeof(char) * (size1 + n + 1));
	}
	else
	{
		concat = malloc(sizeof(char) * (size1 + size2 + 1));
	}

	if (!concat)
		return (NULL);

	while (i < size1)
	{
		concat[i] = s1[i];
		i++;
	}

	while (n < size2 && i < (size1 + n))
		concat[i++] = s2[j++];

	while (n >= size2 && i < (size1 + size2))
		concat[i++] = s2[j++];

	concat[i] = '\0';

	return (concat);
}
