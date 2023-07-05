#include "main.h"
/**
 * square - square
 *
 * @n: int
 *
 * @num: int
 *
 * Return: the resulting square root
 */
int square(int n, int num)
{
	if (num * num > n)
		return (-1);
	if (num * num == n)
		return (num);
	return (square(n, num + 1));
}
/**
 * _sqrt_recursion - sqrt
 *
 * @n: int
 *
 * Return: result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (square(n, 0));
}
