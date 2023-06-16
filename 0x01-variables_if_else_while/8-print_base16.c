#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: 0 on successful execution
 */
int main(void)
{int hex;
for (hex = 48; hex <= 102; hex++)
{
if (hex > 57 && hex < 97)
{continue;
}
else
{putchar(hex);
}
}
return (0);
}
