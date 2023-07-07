#include <stdio.h>
#include <stdlib.h>
/**
 * main - main
 *
 * @argc: index
 * @argv: args' array
 *
 * Return: 1 fail, 0 on success
 */
int main(int argc, char *argv[])
{
	int money, i, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]);
	result = 0;

	if (money < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && money >= 0; i++)
	{
		while (money >= coins[i])
		{
			result++;
			money -= coins[i];
		}
	}

	printf("%d\n", result);
	return (0);
}

