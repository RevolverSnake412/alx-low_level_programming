#include "main.h"

/**
 * leet - encodes a string to 1337
 * @str: char
 *
 * Return: Pointer to the encoded string
 */
char *leet(char *str)
{
	int i, j;
	char lets[] = "aAeEoOtTlL";
	char nums[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == lets[j])
			{
				str[i] = nums[j];
				break;
			}
		}
	}

	return (str);
}
