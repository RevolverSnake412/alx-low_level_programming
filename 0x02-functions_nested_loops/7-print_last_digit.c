#include "main.h"
/**
 * print_last_digit - prints the last digit of an integer
 *
 * @r: int
 *
 * @LastDig: int
 *
 * Return: LastDig, 0 on success
*/
int print_last_digit(int r)
{
if (r < 0)
{r *= -1;
}
r %= 10;
_putchar(48 + r);
return (r);
return (0);
}
