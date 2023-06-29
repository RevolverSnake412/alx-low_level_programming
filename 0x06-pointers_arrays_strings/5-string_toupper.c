#include "main.h"
/**
 * string_toupper - string_toupper
 *
 * @str: char
 *
 * Return: str
*/
char *string_toupper(char *str)
{int i = 0, j;

while (str[i] != '\0')
{i++;
}
for (j = 0, j <= i, j++)
{
if (str[j] <= 122 && str[j] >= 97)
{str[j] -= 32;
}
}
return (str);
}
