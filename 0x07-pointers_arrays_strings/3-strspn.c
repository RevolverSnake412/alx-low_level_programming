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
{	int i = 0, j, flag;
	unsigned int count = 0;

	while (s[i] != '\0')
	{
	flag = 0;
	for (j = 0; accept[j] != '\0'; j++)
	{
		if (s[i] == accept[j])
		{
			flag = 1;
			break;
		}
	}
	if (!flag)
	{
	break;
	}
	count++;
	i++;
	}
	return (count);
}
