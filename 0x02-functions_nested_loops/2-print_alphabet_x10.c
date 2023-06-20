#include "main.h"
/**
 * print_alphabet_x10 - from a to z lowercased 10 times
 *
 * Return: 0 on success
*/
int print_alphabet(void)
{int i, counter;
while (counter<11)
{
for (i = 97; i <= 122; i++)
{_putchar(i);
}
_putchar('\n');
counter++;
}
return (0);
}
