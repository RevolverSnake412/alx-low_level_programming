#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - sum
 *
 * @a: int
 * @b: int
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	int sum = a + b;

	return (sum);
}
/**
 * op_sub - sub
 *
 * @a: int
 * @b: int
 *
 * Return: sub
 */
int op_sub(int a, int b)
{
	int sub = a - b;

	return (sub);
}
/**
 * op_mul - mul
 *
 * @a: int
 * @b: int.
 *
 * Return: mul
 */
int op_mul(int a, int b)
{
	int mul = a * b;

	return (mul);
}
/**
 * op_div - div
 *
 * @a: int
 * @b: int
 *
 * Return: div
 */
int op_div(int a, int b)
{
	int div = a / b;

	return (div);
}
/**
 * op_mod - mod
 *
 * @a: int
 * @b: int
 *
 * Return: mod
 */
int op_mod(int a, int b)
{
	int mod = a % b;

	return (mod);
}
