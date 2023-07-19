#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints name
 *
 * @name: name of user
 * @f: pointer
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
