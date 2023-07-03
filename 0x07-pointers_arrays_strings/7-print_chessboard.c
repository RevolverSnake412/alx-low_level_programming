#include "main.h"
/**
 * print_chessboard - print_chessboard
 *
 * @a: char
 *
 * Return: 0 on success
*/
void print_chessboard(char (*a)[8])
{	int i, j;

	for (i = 0; i <= 7; i++)
	{
		for (j = 0; j <= 7; j++)
		{
			if (a[i][j] == ' ')
			{
				break;
			}
			else
			{
				_putchar(a[i][j]);
			}
		}
		_putchar('\n');
	}
}
