#include "main.h"
/**
 * puts_half - half the string
 *
 * @str: char
*/
void puts_half(char *str)
{	int counter = 0, halfcounter;
	while (str[counter] != '\0')
	{
		counter++;
	}
	halfcounter = counter / 2;
	for (; counter != halfcounter; counter--)
	{
		_putchar(str[counter]);
	}
	_putchar('\n');
}
