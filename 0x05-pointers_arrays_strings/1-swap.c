#include "main.h"
/**
 * swap_int - swaps values
 *
 * @a: int
 *
 * @b: int
*/
void swap_int(int *a, int *b)
{
	int a2 = *a;
	*a = *b;
	*b = a2;
}
