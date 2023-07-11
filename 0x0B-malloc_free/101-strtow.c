#include <stdlib.h>
#include "main.h"
/**
 * count_word - count words
 * @s: char
 * Return: wr
*/
int count_word(char *s)
{
	int check = 0, i, wr = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
		{
			check = 0;
		}
		else if (check == 0)
		{
			check = 1;
			wr++;
		}
	}
return (wr);
}
/**
 * strtow - strtow
 * @str: char
 * Return: matrix
*/
char **strtow(char *str)
{	char **matrix, *tmp;
	int i, j = 0, k = 0, len = 0, words, flag0, flag1;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);
	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (j)
			{
				flag1 = i;
				tmp = (char *) malloc(sizeof(char) * (j + 1));
				if (tmp == NULL)
				{
					return (NULL);
				}
				while (flag0 < flag1)
				{
					*tmp++ = str[flag0++];
				}
				*tmp = '\0';
				matrix[k] = tmp - j;
				k++;
				j = 0;
			}
		}
		else if (j++ == 0)
			flag0 = i;
	}
	matrix[k] = NULL;
	return (matrix);
}
