#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - print_all
 *
 * @format: const char
 */
void print_all(const char * const format, ...)
{	int i = 0;
	char *string;
	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(args, int));
					break;
				case 'i':
					printf("%d", va_arg(args, int));
					break;
				case 'f':
					printf("%f", va_arg(args, double));
					break;
				case 's':
					string = va_arg(args, char *);
					if (string == NULL)
						string = "(nil)";
					printf("%s", string);
					break;
				default:
					i++;
					continue;
			}
			i++;
			while (format[i] != '\0')
			{
				printf(", ");
				break;
			}
		}
	}
	putchar('\n');
	va_end(args);
}
