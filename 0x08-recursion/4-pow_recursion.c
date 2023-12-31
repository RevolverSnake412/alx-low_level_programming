#include "main.h"
/**
 * _pow_recursion - pow
 *
 * @x: int
 *
 * @y: int
 *
 * Return: -1 if y less than zero, 1 if y equals to 1, results
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
