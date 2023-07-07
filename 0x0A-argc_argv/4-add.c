#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - main
 *
 * @argc: index
 * @argv: args' array
 *
 * Return: 0 on success
*/
int main(int argc, char *argv[])
{
	int i, j, S = 0;

	if (argc == 1)
	{
		putchar(48);
		putchar('\n');
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (isalpha(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			S += atoi(argv[i]);
		}
		printf("%d\n", S);
	}
	return (0);
}
