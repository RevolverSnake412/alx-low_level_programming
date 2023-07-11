#include "main.h"
#include <stdlib.h>
/**
 * argstostr - argstostr
 *
 * @ac: int
 *
 * @av: char
 *
 * Return: 0
*/
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, h = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			k++;
	}
	k += ac;
	str = malloc(sizeof(char) * k + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[h] = av[i][j];
			h++;
		}
		if (str[h] == '\0')
		{
			str[h++] = '\n';
		}
	}
	return (str);
}
