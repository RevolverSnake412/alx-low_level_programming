#include <stdio.h>
#include "main.h"
/**
 * _puts = prints text
 *
 * @str: char
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
