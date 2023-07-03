#include "main.h"
/**
 * _strchr - strchr
 *
 * @s: char
 *
 * @c: char
 *
 * Return: s
*/
char *_strchr(char *s, char c)
{	int i = 0;

	while (s[i] != c)
	{
		i++;
	}
	while (s[i] != '\0')
	{
		return (&s[i]);
	}
	return (0);
}
