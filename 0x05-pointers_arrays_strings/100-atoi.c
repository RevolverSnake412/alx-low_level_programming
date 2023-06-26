#include "main.h"
/**
 * _atoi - atoi
 *
 * @s: string
 *
 * Return: results
*/
int _atoi(char *s)
{
	int sign = 1;
	int r = 0;
	int i = 0;

	while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
	{
	i++;
	}
	if (s[i] == '-' || s[i] == '+')
	{
	sign = (s[i] == '-') ? -1 : 1;
	i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		if (r > (INT_MAX / 10) || (r == INT_MAX / 10 && (s[i] - '0') > INT_MAX % 10))
		{
			return ((sign == 1) ? INT_MAX : INT_MIN);
		}
		r = r * 10 + (s[i] - '0');
		i++;
	}
	int rst = r * sign;

	return (rst);
}
