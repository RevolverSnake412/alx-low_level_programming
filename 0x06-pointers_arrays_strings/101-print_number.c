#include "main.h"
/**
 * print_number - print number
 * 
 * @n: int
 *
 * Return: 0
*/
void print_number(int n)
{	unsigned int digit;
        digit = n;
        if (n <= 1)
        {
                _putchar(45);
                digit *= -1;
        }
        if (digit / 10 != 0)
        {
                print_number(digit / 10);
        }
        _putchar((digit % 10) + 48);
}
