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
	halfcounter = (counter - 1) / 2;
	for (halfcounter + 1; halfcounter < counter; halfcounter++)
	{
		_putchar(str[halfcounter]);
	}
	_putchar('\n');
}
