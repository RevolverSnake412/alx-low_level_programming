#include "main.h"
/**
 * leet - leet
 *
 * @str: char
 *
 * Return: str
*/
char *leet(char *str)
{	int i = 0, j;
	while (str[i] != '\0')
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		if (str[j] == 'a' || str[j] == 'a' - 32)
		{
			str[j] = '4';
		}
		else if (str[j] == 'e' || str[j] == 'e' - 32)
                {
                        str[j] = '3';
        	}
		else if (str[j] == 'o' || str[j] == 'o' - 32)
                {
                        str[j] = '0';
                }
		else if (str[j] == 't' || str[j] == 't' - 32)
                {
                        str[j] = '7';
                }
		else if (str[j] == 'l' || str[j] == 'l' - 32)
                {
                        str[j] = '1';
                }
	}
	return (str);
}
