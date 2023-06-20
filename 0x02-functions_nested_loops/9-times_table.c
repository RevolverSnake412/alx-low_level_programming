#include "main.h"
/**
 * times_table - multiplication table 0..9
 *
 * Return: 0 when success
*/
int times_table(void)
{int i, j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{int number = j * i;
int xTenDigit = number / 10;
int xOneDigit = number % 10;
if (xTenDigit == 0)
{_putchar(xOneDigit + 48);
}
else
{_putchar(xTenDigit + 48);
_putchar(xOneDigit + 48);
}
if (j != 9)
{_putchar(44);
_putchar(32);
_putchar(32);
}
}
_putchar('\n');
}
return (0);
}
