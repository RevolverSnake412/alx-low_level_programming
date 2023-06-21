#include "main.h"
/**
 * print_to_98 - from n to 98
 *
 * @n: int
 *
 * Return: 0 when success
*/
int print_to_98(int n)
{int i = n, j = n;
if (n >= 98)
{
for (i; i >= 98; i--)
{
if (i >= 100)
{_putchar((i / 100) + 48);
_putchar(((i / 10) % 10) + 48);
_putchar((i % 10) + 48);
}
else
{
_putchar((i / 10) + 48);
_putchar((i % 10) + 48);
}
if (i != 98)
{_putchar(44);
_putchar(32);
}
}
}
else if (n <= 98)
{
for (j; j <= 98; j++)
{
if (j < 0)
{int neg = j * -1;
_putchar(45);
if (neg >= 100)
{
_putchar((neg / 100) + 48);
_putchar(((neg / 10) % 10) + 48);
_putchar((neg % 10) + 48);
}
else
{
_putchar((neg / 10) + 48);
_putchar((neg % 10) + 48);
}
}
else if (j <= 9)
{
_putchar(j + 48);
}
else if (j >= 10)
{
_putchar((j / 10) + 48);
_putchar((j % 10) + 48);
}
if (j != 98)
{
_putchar(44);
_putchar(32);
}
}
}
return (0);
}
