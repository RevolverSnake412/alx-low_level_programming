#include <stdio.h>
/**
 * main - main
 *
 * Return: 0 on success
*/
int main(void)
{unsigned long int a0 = 1, a1, a2, b0 = 2, b1, b2;
int i;
printf("%lu", a0);
for (i = 1; i < 91; i++)
{printf(", %lu", b0);
b0 += a0;
a0 = b0 - a0;
}
a1 = (a0 / 1000000000);
a2 = (a0 % 1000000000);
b1 = (b0 / 1000000000);
b2 = (b0 % 1000000000);
for (i = 92; i < 99; i++)
{
putchar(44);
putchar(32);
printf("%lu", b1 + (b2 / 1000000000));
printf("%lu", b2 % 1000000000);
b1 = b1 + a1;
a1 = b1 - a1;
b2 = b2 + a2;
a2 = b2 - a2;
}
putchar('\n');
return (0);
}
