#include "main.h"
#include <string.h>
/**
 * _strcat - strcat
 *
 * Return: dest
*/
char _strcat(char *dest, char *src)
{
	strcat(*dest, *src);
	return (*dest);
}
