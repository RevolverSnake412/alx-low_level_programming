#include <stdio.h>
#include <math.h>
/**
 * is_prime - is_prime
 *
 * @num: long long
 *
 * Return: 0 on success, 1 when fail
*/
int is_prime(long long num)
{
	if (num < 2)
	{
	return (0);
	}
	for (long long i = 2; i <= sqrt(num); i++)
	{
	if (num % i == 0)
	{
	return (0);
	}
	}
	return (1);
}
/**
 * largest_prime_factor - largest_prime_factor
 *
 * @num: long long
 *
 * Return: The largest prime factor.
*/
long long largest_prime_factor(long long num)
	{
	long long largest_factor = 1;

	for (long long i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0)
		{
			if (is_prime(i))
			{
			largest_factor = i;
			}
			if (is_prime(num / i))
			{
			largest_factor = num / i;
			}
		}
	}
	return (largest_factor);
}
/**
 * main - main
 *
 * Return: 0 on success
*/
int main(void)
{
	long long number = 612852475143;
	long long largest_factor = largest_prime_factor(number);

printf("%lld\n", largest_factor);
return (0);
}
