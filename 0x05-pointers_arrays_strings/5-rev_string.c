#include "main.h"
/**
 * rev_string - reverses string
 *
 * @s: char
*/
void rev_string(char *s)
{
	int index = 0;
	while (s[index] != '\0')
	{
		index++;
	}
	char text = s[0];
	int i = 0;
	for (; i < index; i++)
	{
		index--;
		text = s[i];
		s[i] = s[index];
		s[index] = text;
	}
}
