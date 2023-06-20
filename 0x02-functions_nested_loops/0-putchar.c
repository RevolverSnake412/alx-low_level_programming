#include <stdio.h>
#include "main.h"
/**
 * main - main main
 *
 * _putchar - bunch of putchar instructions
 *
 * Return: 0 success
*/
int main(void)
{_putchar('_');
_putchar('p');
_putchar('u');
_putchar('t');
_putchar('c');
_putchar('h');
_putchar('a');
_putchar('r');
_putchar('\n');
return (0);
}
int _putchar(char c)
{return write(1, &c, 1);
}

