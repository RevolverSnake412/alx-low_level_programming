#include "main.h"
/**
 * print_alphabet - from a to z lowercased
 *
 * return: 0 on success
*/
int print_alphabet(void)
{int i;
for (i = 97; i <= 122; i++)
{_putchar(i);
}
_putchar('\n');
return (0);
}
