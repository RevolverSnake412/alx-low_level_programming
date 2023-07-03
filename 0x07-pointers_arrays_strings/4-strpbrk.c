#include "main.h"
/**
 *
*/
char *_strpbrk(char *s, char *accept)
{	int i = 0;

	while (*s)
	{
		while (accept[i])
		{
			if (*s == accept[i])
			{
				return (s);
			}
			i++
		}
	s++;
	}
	return ('\0');
}
