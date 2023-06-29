#include "main.h"

/**
 * leet - leet
 *
 * @str: char
 *
 * Return: returns str
*/
char *leet(char *str)
{	int i, j;
	char lets[] = "aAeEoOtTlL";
	char nums[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == lets[j])
			{
				str[i] = nums[j];
			}
                }
        }
        return (str);
}
