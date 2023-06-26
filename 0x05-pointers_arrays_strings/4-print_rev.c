#include "main.h"
/**
 * print_rev - reverse texting
 *
 * @s: char
*/
void print_rev(char *s)
{	int count = 0;
	while (*s != '\0')
	{
		s++;
		count++;
	}
	s--;
	for (; count > 0; count--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
