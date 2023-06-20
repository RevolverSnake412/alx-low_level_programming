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
int print_last_digit(int r, int LastDig)
{
if (r < 0)
{r *= -1;
}
LastDig = r % 10;
return (LastDig);
return (0);
}
