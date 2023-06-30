#include "main.h"
/**
 * rot13 - rot13
 *
 * @str: char
 *
 * Return: str on success
*/
char *rot13(char *str)
{int i = 0, j;
char normal[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (str[i] == normal[j])
{
str[i] = rot13[j];
break;
}
}
}
return (str);
}
