#include <stdio.h>
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
while (n > 98)
printf("%d, ", n--);
printf("%d", n);
}
else
{
while (n < 98)
printf("%d, ", n++);
printf("%d", n);
}
printf("\n");
return (0);
}
