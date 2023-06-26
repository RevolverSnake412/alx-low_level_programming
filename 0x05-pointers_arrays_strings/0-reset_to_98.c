#include "main.h"
/**
 * reset_to_98 - it affects an int
 *
 * @n: int
*/
void reset_to_98(int *n)
{
	int *p_n = *&n;
	*p_n = 98;
}
