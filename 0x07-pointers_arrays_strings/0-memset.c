#include "main.h"
/**
 * _memset - memset
 *
 * @s: char
 *
 * @b: char
 *
 * @n: unsigned int
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{	int i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}

