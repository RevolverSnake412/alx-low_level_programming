#include <stdio.h>
/**
 * main - main
 *
 * Return: 0 on return
*/
int main(void)
{unsigned long int a = 1, b = 2, s, result;
int i;
for (i = 1; i <= 33; i++)
{
if (a < 4000000 && (a % 2) == 0)
{
result = result + a;
}
s = a + b;
a = b;
b = s;
}
printf("%lu", result);
putchar('\n');
return (0);
}
