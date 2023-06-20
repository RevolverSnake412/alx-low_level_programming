#include "main.h"
/**
 * print_last_digit - prints the last digit of an integer
 *
 * @r: int
 *
 * Return: LastDig, 0 on success
*/
int print_last_digit(int r)
{int lastdig;
if (r < 0)
{r *= -1;
}
lastdig = r % 10;
if (lastdig < 0)
{lastdig *= -1;
}
_putchar(48 + lastdig);
return (lastdig);
return (0);
}
