#include <stdio.h>
#include <stdlib.h>
/**
 * main - main
 *
 * @argc: index
 * @argv: args' array
 *
 * Return: 1 if money less than a Penny, 0 on success
*/
int main(int argc __attribute__((unused)), char *argv[])
{	int Quarter = 25, Dime = 10, Nickel = 5, Pair = 2, Penny = 1, Cents, S = 0;

	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	else if (atoi(argv[1]) < 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (Cents = 0; S != atoi(argv[1]); Cents++)
		{
			if (Quarter <= atoi(argv[1]) - S)
			{
				S += Quarter;
			}
			else if (Dime <= atoi(argv[1]) - S)
			{
				S += Dime;
			}
			else if (Nickel <= atoi(argv[1]) - S)
			{
				S += Nickel;
			}
			else if (Pair <= atoi(argv[1]) - S)
			{
				S += Pair;
			}
			else if (Penny == atoi(argv[1]) - S)
			{
				S += Penny;
			}
		}
	}
		printf("%d\n", Cents);
		return (0);
}
