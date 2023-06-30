#include "main.h"
/**
 * rev_string - reverse string
 * @n: char
 * Return: 0 on success
*/
void rev_string(char *n)
{int i = 0, j;
char temp;

while (*(n + i) != '\0')
{
i++;
}
i--;
for (j = 0; j < i; j++, i--)
{
temp = *(n + j);
*(n + j) = *(n + i);
*(n + i) = temp;
}
}

/**
 * infinite_add - infinite add
 * @n1: char
 * @n2: char
 * @r: char
 * @size_r: int
 * Return: call func
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{int lever = 0, i = 0, j = 0, digits = 0;
int val1 = 0, val2 = 0, tot = 0;

while (*(n1 + i) != '\0')
{
i++;
}
while (*(n2 + j) != '\0')
{
j++;
}
i--;
j--;

if (j >= size_r || i >= size_r)
{
return (0);
}

while (j >= 0 || i >= 0 || lever == 1)
{
if (i < 0)
{
val1 = 0;
}
else
{
val1 = *(n1 + i) - '0';
}

if (j < 0)
{
val2 = 0;
}
else
{
val2 = *(n2 + j) - '0';
}

tot = val1 + val2 + lever;

if (tot >= 10)
{
lever = 1;
}
else
{
lever = 0;
}

if (digits >= (size_r - 1))
{
return (0);
}

*(r + digits) = (tot % 10) + '0';
digits++;
j--;
i--;
}

if (digits == size_r)
{
return (0);
}

*(r + digits) = '\0';
rev_string(r);
return (r);
}
