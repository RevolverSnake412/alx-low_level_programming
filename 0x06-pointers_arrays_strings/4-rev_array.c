#include "main.h"
/**
 * reverse_array - revwrse_array
 *
 * @a: int
 *
 * @n: int
*/
void reverse_array(int *a, int n)
{
int i, temp;
for (i = 0; i <= n; i++)
{
temp = a[i];
a[i] = a[n];
a[n] = temp;
}
}
