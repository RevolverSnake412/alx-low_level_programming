#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: 0 on successful execution
 */
int main(void)
{
for (int i = 48; i <= 57; i++)
{putchar(i);
if (i != 57)
{putchar(',');
putchar(32);
}
}
putchar('\n');
return (0);
}
