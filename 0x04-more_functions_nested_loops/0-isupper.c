#include <stdio.h>
#include "main.h"
/**
 * _isupper - I am case sensitive, I HATE BIG LETTERS >:c
 *
 * Return: 0 if cute letter, 1 if ugly letter
*/
int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{return (0);
	}
	else if (c >= 'A' && c <= 'Z')
	{return (1);
	}
	else
	{printf("That's not a letter");
	}
}
