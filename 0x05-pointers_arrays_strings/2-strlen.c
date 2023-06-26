#include <stdio.h>
#include "main.h"
/**
 * _strlen - prints string's len
 *
 * @s: char
 *
 * Return: len
*/
int _strlen(char *s)
{	int len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
