#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: 0 on successful execution
 */
int main(void)
{int digit = 48;
while (digit <= 57)
{putchar(digit);
if (digit != 57)
{putchar(',');
putchar(32);
}
digit++;
}
putchar('\n');
return (0);
}
