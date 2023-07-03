#include "main.h"
#include <unistd.h>
/**
 * _putchar - displays 1 char
 *
 * @c: char
 *
 * Return: character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

