#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its paramters
 * @n: number of args
 * @...: args
 * Return: an int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list x;
	unsigned int y;
	unsigned int z = 0;

	va_start(x, n);

	for (y = 0; y < n; y++)
	{
		z += va_arg(x, int);
	}
	va_end(x);
	return (z);
}
