#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: 0 on successful execution
 */
int main(void)
{int comb1 = 0;
int comb2;
while (comb1 <= 99)
{comb2 = comb1;
while (comb2 <= 99)
{
if (comb1 != comb2)
{putchar(comb1 / 10 + 48);
putchar(comb1 % 10 + 48);
putchar(32);
putchar(comb2 / 10 + 48);
putchar(comb2 % 10 + 48);
if (comb1 != 98 || comb2 != 99)
{putchar(',');
putchar(32);
}
}
comb2++;
}
comb1++;
}
putchar('\n');
return (0);
}

