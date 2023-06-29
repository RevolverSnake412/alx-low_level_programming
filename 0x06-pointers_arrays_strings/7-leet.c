#include "main.h"
/**
 * leet - leet
 *
 * @str: char
 *
 * Return: str
*/
char *leet(char *str)
{	int i = 0, j = 0;
	char lets[] = "aAeEoOtTlL";
	char nums[] = "4433007711";

	for (; str[i] != '\0'; i++)
	{
		for (; j < 10; j++)
		{
			if (str[i] == lets[j])
			{
				str[i] = nums[j];
			}
                }
        }
        return (str);
}
