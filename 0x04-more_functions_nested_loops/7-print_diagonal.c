#include "main.h"

/**
 * print_diagonal - print a new line to std outpout
 * @n: the number of line to be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int count = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (count < n)
		{
			count++;
			_putchar('\');
			_putchar('\n');
		}
		_putchar('\n');
	}
}
