#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anythingwe give it
 * @format: types of arguments
 */
void print_all(const char * const format, ...)
{
	int x = 0;
	char *str, *sprtr = "";

	va_list y;

	va_start(y, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
			case 'c':
				printf("%s%c", sprtr, va_arg(y, int));
				break;
			case 'i':
				printf("%s%d", sprtr, va_arg(y, int));
				break;
			case 'f':
				printf("%s%f", sprtr, va_arg(y, double));
				break;
			case 's':
				str = va_arg(y, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", sprtr, str);
				break;
			default:
				x++;
				continue;
			}
			sprtr = ", ";
			x++;
		}
	}

	printf("\n");
	va_end(y);
}
