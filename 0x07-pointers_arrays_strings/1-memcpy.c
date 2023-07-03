#include "main.h"
/**
 * _memcpy - memcpy
 *
 * @dest: char
 *
 * @src: char
 *
 * @n: int
 *
 * Return: str
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{	int i;
	while (n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	return (src);
}
