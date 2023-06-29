#include "main.h"
/**
 * _strncpy - strncpy
 *
 * @dest: char
 *
 * @src: char
 *
 * @n: int
 *
 * Return: dest on success
*/
char *_strncpy(char *dest, char *src, int n)
{	int i = 0, j = 0;

	while (j < n && src[j] != '\0')
        {
                dest[j] = src[j];
                j++;
        }
        while (j < n)
        {
                dest[j] = '\0';
                j++;
        }
        return (dest);
}
