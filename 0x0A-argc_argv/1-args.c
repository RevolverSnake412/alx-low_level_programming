#include <stdio.h>
/**
 * main - main
 *
 * @argc: index
 * @argv: arguments' array
 *
 * Return: 0 on success
*/
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return(0);
}
