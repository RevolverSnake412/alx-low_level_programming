#include "main.h"
/**
 * print_times_table - multip table x and y axis n time
 *
 * @n: int
 *
 * Return: 0 on success
*/
int print_times_table(int n)
{int i, j;
for (i = 0; i <= n; i++)
{j = 1;
_putchar(48);
_putchar(44);
_putchar(32);
for (; j <= n; j++)
{int result = i * j;
if (result >= 100)
{_putchar((result / 100) + 48);
_putchar(((result / 10) % 10) + 48);
_putchar((result % 10) + 48);
}
else if (result >= 10 && result <= 99)
{_putchar(32);
_putchar((result / 10) + 48);
_putchar((result % 10) + 48);
}
else
{_putchar(32);
_putchar(32);
_putchar(result + 48);
}
if (j != n)
{_putchar(44);
_putchar(32);
}
}
if (i != n)
{
_putchar('\n');
}
}
_putchar('\n');
return (0);
}
