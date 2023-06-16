#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: 0 on successful execution
 */
int main(void)
{int comb1 = 48;
int comb2;
int comb3;
int mastercounter = 0;
int counter2 = 0;
int counter3 = 0;
while (comb1 <= 55)
{mastercounter++;
comb2 = 49 + counter2;
while (comb2 <= 56)
{comb3 = 50 + counter3;
while (comb3 <= 57)
{putchar(comb1);
putchar(comb2);
putchar(comb3);
if (mastercounter != 8)
{putchar(',');
putchar(32);
}
comb3++;
}
comb2++;
counter3++;
}
counter3 = mastercounter;
counter2++;
comb1++;
}
putchar('\n');
return (0);
}
