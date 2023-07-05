#include "main.h"
/**
 * _strlen_recursion - strlen
 *
 * @s: char
 *
 * Return: len
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
/**
 * checker - checker
 *
 * @s: char
 *
 * @i: int
 *
 * @len: int
 *
 * Return: 1 if string is palindrome, else returns 0
 */
int checker(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
	{
		return (0);
	}
	if (i >= len)
	{
		return (1);
	}
	return (checker(s, i + 1, len - 1));
}
/**
 * is_palindrome - is palindrome
 *
 * @s: char
 *
 * Return: 1 if palindrome, else returns 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (checker(s, 0, _strlen_recursion(s)));
}
