#include "main.h"
/**
 * _isupper - I am case sensitive, I HATE BIG LETTERS >:c
 *
 * @c: int
 *
 * Return: 0 if cute letter, 1 if ugly letter
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{return (1);
	}
	else
	{return (0);
	}
}
