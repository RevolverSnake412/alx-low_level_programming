#include "main.h"
/**
 * cap_string - cap_string
 *
 * @str: char
 *
 * Return: str
*/
char *cap_string(char *str)
{int i = 0, j;

while (str [i] != '\0')
{i++;
}
for (j = 0; j <= i; j++)
{
if (str[i] == 32 && (str[i + 1] <= 122 && str[i + 1 >= 97]))
{str[i+1] -= 32;
}
}
return (str);
}
