#include "main.h"
/**
 * _strstr - strstr
 *
 * @haystack: char
 *
 * @needle: char
 *
 * Return: haystack
*/
char *_strstr(char *haystack, char *needle)
{
	while (*haystack >= '\0')
	{
		char *a = needle;
		char *b = haystack;

		haystack++;

		while (*a == *b && *a != '\0')
		{
			a++;
			b++;
		}
		if (*a == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
