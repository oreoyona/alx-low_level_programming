#include "main.h"

/**
 * print_square - print a new line to std outpout
 * @size: the size of the square
 * Return: void
 */
void print_square(int size)
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
				_putchar('#');
				count2++;
			}
			count++;
			count2 = 0;
			_putchar('\n');
		}
	}
}
