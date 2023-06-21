#include "main.h"
/**
 * print_to_98 - from n to 98
 *
 * @n: int
 *
 * Return: 0 if successful
 */
int print_to_98(int n)
{
if (n >= 98)
{
while (n >= 98)
{printf("%d", n--);
if (n != 98)
{_putchar(44);
_putchar(32);
}
}
}
else
{
while (n <= 98)
{printf("%d", n++);
if (n != 98)
{_putchar(44);
_putchar(32);
}
}
}
return (0);
}
