#include <stdio.h>
/**
 * main - main
 *
 * Return: 0 on success
*/
int main(void)
{unsigned long a = 0, b = 1, s = 0, i = 0;
for (; i != 50; i++)
{
s = a + b;
printf("%lu", s);
a = b;
b = s;
if (i != 49)
printf(", ");
}
putchar('\n');
return (0);
}
