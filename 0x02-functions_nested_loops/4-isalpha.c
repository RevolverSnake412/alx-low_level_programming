#include "main.h"
/**
 * _isalpha - check if character is a letter or no
 *
 *
 * @c: int
 *
 * Return: 0 if not a letter, 1 if letter
*/
int _isalpha(int c)
{
if (c >= 65 && c <= 90) || (c >= 97 && c <= 122)
{return (1);
}
else
{return (0);
}
}
