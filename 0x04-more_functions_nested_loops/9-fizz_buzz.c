#include <stdio.h>
/**
 * main - main
 *
 * Return: 0 on success
*/
int main(void)
{	int i = 1;
	for (; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
