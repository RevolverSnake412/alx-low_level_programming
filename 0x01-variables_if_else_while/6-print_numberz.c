#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: 0 on successful execution
 */
int main(void)
{char numberz[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int index;
for (index = 0; index <= 9; index++)
{putchar(numberz[index]);
}
putchar('\n');
return (0);
}
