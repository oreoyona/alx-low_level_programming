#include "main.h"

/**
 * print_diagonal - print a new line to std outpout
 * @n: the number of line to be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int count = 0;
	int count2 = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (count < n)
		{
			while (count2 < count)
			{
				_putchar(' ');
				count2++;
			}
			count++;
			count2 = 0;
			_putchar(92);
			_putchar('\n');
		}
	}
}
