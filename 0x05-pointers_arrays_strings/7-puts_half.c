#include "main.h"
/**
 * puts_half - half the string
 *
 * @str: char
*/
void puts_half(char *str)
{
	while (*str != '\0')
	{
		str++;
		counter++;
	}
	if (counter % 2 == 0)
	{
		counter /= 2;
	}
	for (; counter > 0; counter--)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
