#include "main.h"
/**
 * puts_half - half the string
 *
 * @str: char
*/
void puts_half(char *str)
{	int counter = 0;
	while (str[counter] != '\0')
	{
		str++;
		counter++;
	}
	counter /= 2;
	for (; counter > 0; counter--)
	{
		_putchar(str[counter]);
	}
	_putchar('\n');
}
