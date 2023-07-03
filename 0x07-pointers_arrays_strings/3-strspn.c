#include "main.c"
/**
 * _strspn - strspn
 *
 * @s: char
 *
 * @accept: char
 *
 * Return: n
*/
unsigned int _strspn(char *s, char *accept)
{	int i = 0, n = 0;
	while (s[i] >= '\0')
	{
		if (s[i] == accept[i])
		{
			n++;
		}
		i++;
	}
	return (n);
}
