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
putchar(48);
putchar(44);
putchar(32);
for (; j <= n; j++)
{int result = i * j;
if (result >= 100)
{putchar((result / 100) + 48);
putchar(((result / 10) % 10) + 48);
putchar((result % 10) + 48);
}
else if (result >= 10 && result <= 99)
{putchar(32);
putchar((result / 10) + 48);
putchar((result % 10) + 48);
}
else
{putchar(32);
putchar(32);
putchar(result + 48);
}
if (j != n)
{putchar(44);
putchar(32);
}
}
if (i != n)
{
putchar('\n');
}
}
return (0);
}
