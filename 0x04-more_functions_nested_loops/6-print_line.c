#include "main.h"

/**
 * print_line - print a new line to std outpout
 * @n: the number of line to be printed
 * Return: void
 */
int print_line(int n)
{
	int count = 0;

	if (n <= 0)
		return;
	while (count < n)
	{
		count++;
		_putchar('_');
	}
}
