#include "main.h"
/**
 * create_array - create array
 *
 * @size: uns int
 *
 * @c: char
 *
 * Return: str on success, NULL if size equals zero
*/
char *create_array(unsigned int size, char c)
{
	char *str;
	int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
