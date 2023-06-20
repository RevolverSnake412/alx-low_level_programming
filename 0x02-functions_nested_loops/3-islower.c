#include "main.h"
/**
 * islower - checks if lowercase or no
 *
 * Return: 0 on success
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{_putchar(49);
}
else
{_putchar(48);
}
_putchar('\n');
return (0);
}
