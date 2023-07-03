#include "main.h"
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
{	int i = 0, count = 0, flag = 0;
	while (s[i] != '\0')
	{
	found = 0;
	for (int j = 0; accept[j] != '\0'; j++)
	{
		if (s[i] == accept[j])
		{
			found = 1;
			break;
		}
	}
	if (!found)
	{
	break;
	}
	n++;
	i++;
	}
	return (n);
}
