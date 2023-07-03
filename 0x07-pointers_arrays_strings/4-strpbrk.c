#include "main.h"
/**
 * _strpbrk - strpbrk
 *
 * @s: char
 *
 * @accept: char
 *
 * Return: s
*/
char *_strpbrk(char *s, char *accept)
{	int i;

	while (*s)
	{
		i = 0;
		while (accept[i])
		{
			if (*s == accept[i])
			{
				return (s);
			}
			i++;
		}
	s++;
	}
	return ('\0');
}
