#include "main.h"
/**
 * puts_half - half the string
 *
 * @str: char
*/
void puts_half(char *str)
{	int counter = 0, halfcounter, index;
	while (str[counter] != '\0')
	{
		counter++;
	}
	halfcounter = (counter - 1) / 2;
	for (index = halfcounter + 1; index < counter; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
