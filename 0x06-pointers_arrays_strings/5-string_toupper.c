#include "main.h"
/**
 * string_toupper - string_toupper
 *
 * @str: char
 *
 * Return: str
*/
char *string_toupper(char *str)
{int i = 0;

while (str[i] != '\0')
{
if (str[i] >= 97 && str[i] <= 122)
{str[i] -= 32;
}
i++;
}
return (str);
}
