#include "main.h"
/**
 * prime - prime
 *
 * @n: int
 *
 * @i: int
 *
 * Return: 1 if n is prime, else 0
 */
int prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (prime(n, i - 1));
}
/**
 * is_prime_number - prime numbers
 *
 * @n: int
 *
 * Return: 1 if n is prime number, else returns 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime(n, n - 1));
}
