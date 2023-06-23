#include <stdio.h>
#include <math.h>
/**
 * main - main
 *
 * Return: 0 when success
 */
int main(void)
{	long int i, max = -1, number = 612852475143;
	while (number % 2 == 0)
	{
		max = 2;
		number /= 2;
	}
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (number % i == 0)
		{
			max = i;
			number /= i;
		}
	}
	if (number > 2)
	{
		max = number;
	}
	printf("%ld\n", max);
	return (0);
}
