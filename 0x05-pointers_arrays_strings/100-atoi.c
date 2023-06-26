#include "main.h"
/**
 * _atoi - atoi
 *
 * @s: string
 *
 * Return: num if success, 0 if else
*/
int _atoi(char *s)
{	int sign = 0, num = 0, i = 0, length = 0, flag = 0, digit = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	while (i < length && flag == 0)
	{
		if (s[i] == '-')
		{
			sign++;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (sign % 2)
			{
				digit *= -1;
			}
			num = num * 10 + digit;
			flag = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			}
			flag = 0;
		}
		i++;
	}
	if (flag == 0)
	{
		return (0);
	}
	return (num);
}
