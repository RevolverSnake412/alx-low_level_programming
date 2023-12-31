#include <stdlib.h>
#include "main.h"
/**
 * *_memset - memset
 *
 * @s: char
 * @b: char
 * @n: uns int
 *
 * Return: s on success
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
/**
 * *_calloc - calloc()
 *
 * @nmemb: uns int
 * @size: uns int
 *
 * Return: ptr
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
	{
		return (NULL);
	}

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
