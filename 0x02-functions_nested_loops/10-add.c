#include "main.h"
/**
 * add - a + b
 *
 * @a: int
 * @b: int
 *
 * Return: 0 when success
*/
#include <stdio.h>
int add(int a, int b)
{int sum = a + b;
int sign = 1;
if (sum < 0)
{sum = -sum;
sign = -1;
}
int result = 0;
while (sum != 0)
{int digit = sum % 10;
result = result * 10 + digit;
sum /= 10;
}
if (sign == -1)
{putchar('-');
}
while (result != 0)
{int digit = result % 10;
putchar(digit + 48);
result /= 10;
}
return (0);
}
