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
int main (int argc __attribute__((unused)), char *argv[])
{
	int Quarter, Dime, Nickel, Pair, Penny;
	int Cents, S = 0;
	int money = atoi(argv[1]);

	Quarter = 25;
	Dime = 10;
	Nickel = 5;
	Pair = 2;
	Penny = 1;

	if (money < 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (Cents = 0; S != money; Cents++)
		{
			if (money - S >= Quarter)
			{
				S += Quarter;
			}
			else if (money - S >= Dime)
			{
				S += Dime;
			}
			else if (money - S >= Nickel)
			{
				S += Nickel;
			}
			else if (money - S >= Pair)
			{
				S += Pair;
			}
			else if (money - S == Penny)
			{
				S += Penny;
			}
		}
	}
		printf("%d\n", Cents);
		return (0);
}
