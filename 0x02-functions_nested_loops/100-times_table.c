#include "main.h"
/**
 * print_times_table - multip table x and y axis n time
 *
 * @n: int
 *
 * Return: 0 on success
*/
int print_times_table(int n)
{int i = 0, j;
if (n >= 0 && n <= 15)
{
for (; i <= n; i++)
{
j = 0;
for (; j <= n; j++)
{
if (j == 0)
{
_putchar((i * j)+48);
}
else if ((i * j) < 10 && j != 0)
{
_putchar(44);
_putchar(32);
_putchar(32);
_putchar(32);
_putchar((i * j)+48);
}
else if ((i * j) >= 10 && (i * j) < 100)
{
_putchar(44);
_putchar(32);
_putchar(32);
_putchar(((i * j) / 10) + 48);
_putchar(((i * j) % 10) + 48);
}
else if ((i * j) >= 100)
{
_putchar(44);
_putchar(32);
_putchar(((i * j) / 100) + 48);
_putchar((((i * j) / 10) % 10) + 48);
_putchar(((i * j) % 10) + 48);
}
}
_putchar('\n');
}
}
return (0);
}
