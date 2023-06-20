#include <stdio.h>
/**
 * print_to_98 - from n to 98
 *
 * @n: int
 *
 * Return: 0 when successful
*/
int print_to_98(int n)
{i = n;
int number = i;
int digits[3];
if (n <= 98)
{
for (i; i <= 98; i++)
{
if (i != n)
{putchar(44);
putchar(32);
}
if (number < 0)
{putchar(45);
number *= -1;
}
int count = 0;
do {digits[count++] = number % 10;
number /= 10;
} while (number > 0);
int j = count - 1;
for (j; j >= 0; j--)
{putchar(digits[j] + 48);
}
}
}
else
{
for (i; i >= 98; i--)
{
if (i != n)
{putchar(44);
putchar(32);
}
int number = i;
if (number < 0)
{putchar(45);
number *= -1;
}
int digits[3];
int count = 0;
do {digits[count++] = number % 10;
number /= 10;
} while (number > 0);
for (int j = count - 1; j >= 0; j--)
{putchar(digits[j] + 48);
}
}
}
putchar('\n');
return (0);
}
