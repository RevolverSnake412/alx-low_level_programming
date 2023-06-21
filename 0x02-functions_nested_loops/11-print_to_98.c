#include "main.h"
/**
 * print_to_98 - from n to 98
 *
 * @n: int
 *
 * Return: 0 when success
*/
int print_to_98(int n)
{
if (n >= 98)
{
for (; n >= 98; n--)
{
if (n >= 100)
{_putchar((n / 100) + 48);
_putchar(((n / 10) % 10) + 48);
_putchar((n % 10) + 48);
}
else
{
_putchar((n / 10) + 48);
_putchar((n % 10) + 48);
}
if (n != 98)
{_putchar(44);
_putchar(32);
}
else
{_putchar('\n');
}
}
}
else if (n <= 98)
{
for (; n <= 98; n++)
{
if (n < 0)
{int neg = n * -1;
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
else if (n <= 9)
{
_putchar(n + 48);
}
else if (n >= 10)
{
_putchar((n / 10) + 48);
_putchar((n % 10) + 48);
}
if (n != 98)
{
_putchar(44);
_putchar(32);
}
else
{_putchar('\n');
}
}
}
return (0);
}
