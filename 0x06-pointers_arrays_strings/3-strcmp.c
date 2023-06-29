#include "main.h"
/**
 * _strcmp - strmcpm
 *
 * @s1: char
 *
 * @s2: char
 *
 * Return: 0 on success, and s1 + s2
*/
int _strcmp(char *s1, char *s2)
{int i = 0;

while (s1[i] != '\0' && s2[i] != '\0')
{
if (s2[i] != s1[i])
{
return (s1[i] - s2[i]);
}
i++;
}
return (0);
}
