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
if (j == 0)
{_putchar(number + 48);
}
if (number < 10 && j != 0)
{_putchar(44);
_putchar(32);
_putchar(32);
_putchar(number + 48);
}
else if (number >= 10)
{_putchar(44);
_putchar(32);
_putchar((number / 10) + 48);
_putchar((number % 10) + 48);
}
}
_putchar('\n');
}
return (0);
}
