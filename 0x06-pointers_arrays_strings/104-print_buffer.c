#include "main.h"
#include <stdio.h>
/**
 * print_buffer - print buffer
 *
 * @b: char
 *
 * @size: int
*/
void print_buffer(char *b, int size)
{
        int i, j, check = 0;
        if (size <= 0)
        {
                _putchar('\n');
                return;
        }
        while (check < size)
        {
                j = size - check < 10 ? size - check : 10;
                printf("%08x: ", check);
                for (i = 0; i <= 9; i++)
                {
			if (i < j)
                                printf("%02x", *(b + check + i));
                        else
                                printf("  ");
                        if (i % 2)
                        {
                                printf(" ");
                        }
                }
                for (i = 0; i < j; i++)
                {
                        int c = *(b + check + i);
                        if (c < 32 || c > 132)
                        {
                                c = '.';
                        }
                        printf("%c", c);
                }
                printf("\n");
                check += 10;
        }
}
