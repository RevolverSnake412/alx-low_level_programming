#include <stdio.h>
#include <stdlib.h>
/**
 * main - main
 *
 * @argc: index
 * @argv: args' array
 *
 * Return: 1 if fails, 0 on success
 */
int main(int argc, char *argv[])
{
	int Cents, S = 0;
	int coins[] = {25, 10, 5, 2, 1};
	int Money = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (Money < 0)
	{
		printf("0\n");
		return (0);
	}

	for (Cents = 0; Cents < 5 && Money >= 0; Cents++)
	{
		while (Money >= coins[Cents])
		{
			S++;
			Money -= coins[Cents];
		}
	}

	printf("%d\n", S);
	return (0);
}
