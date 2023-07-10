#include <stdlib.h>
#include "main.h"
/**
 * _strdup - strdup
 *
 * @str: char
 *
 * Return: text on success, NULL if fail
 */
char *_strdup(char *str)
{
	char *text;
	int i = 0, j;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	text = malloc(sizeof(char) * (i + 1));
	if (text == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j]; j++)
	{
		text[j] = str[j];
	}
	return (text);
}
