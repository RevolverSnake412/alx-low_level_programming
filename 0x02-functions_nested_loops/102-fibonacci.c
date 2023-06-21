#include <stdio.h>
/**
 * main - main
 *
 * Return: 0 on success
*/
int main(void)
{long long int a = 0;
long long int b = 1;
long long int i, s;
for (i = 0; i != 50; i++)
{
s = a + b;
a = b;
b = s;
}
printf("%lld", a);
return (0);
}

