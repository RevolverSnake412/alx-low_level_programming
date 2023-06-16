#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: 0 on successful execution
 */
int main(void)
{int counter = 49;
int comb1 = 48;
int comb2;
while (comb1 <= 57)
{comb2 = counter;
while (comb2 <= 57)
{putchar(comb1);
putchar(comb2);
if (counter != 57)
{putchar(',');
putchar(32);
}
comb2++;
}
counter++;
comb1++;
}
putchar('\n');
return (0);
}
