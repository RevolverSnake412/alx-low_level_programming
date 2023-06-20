#include "main.h"
/**
 * add - a + b
 *
 * @a: int
 * @b: int
 *
 * Return: 0 when success
*/
int add(int a, int b)
{int result = a + b;
if (result / 10 == 0)
{_putchar(result + 48);
}
else
{_putchar((result / 10) + 48);
_putchar((result % 10) + 48);
}
return (0);
}
