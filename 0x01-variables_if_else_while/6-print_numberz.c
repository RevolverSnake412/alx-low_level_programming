#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: 0 on successful execution
 */
int main(void)
{int number = 0;
while (number <= 9)
{putchar(number + 48);
number++;
}
putchar('\n');
return (0);
}
