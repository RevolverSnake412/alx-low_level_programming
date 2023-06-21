#include <stdio.h>
/**
 * main - main
 *
 * Return: 0 on success
*/
int main(void)
{int i, s = 0;
for (i = 1024; i != 1; i--)
{
if ((i % 3) == 0 || (i % 5) == 0)
{
s += i;
}
else
{continue;
}
}
putchar((s / 100000) + 48);
putchar(((s / 10000) % 10) + 48);
putchar(((s / 1000) % 10) + 48);
putchar(((s / 100) % 10) + 48);
putchar(((s / 10) % 10) + 48);
putchar((s % 10) + 48);
putchar('\n');
return (0);
}
