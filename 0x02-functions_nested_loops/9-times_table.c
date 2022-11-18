#include "main.h"

/**
 * times_table - print the 9 times table
 * Return: void
 */
void times_table(void)
{
	int t = 9, r, c, m;

	for (r = 0; r <= t; r++)
	{
		for (c = 0; c <= t; c++)
		{
			m = r * c;

			if (m / 10)
				_putchar(48 + (m / 10));
			else if (c != 0) 
				_putchar(' ');

			_putchar(48 + (m % 10));

			if (c != t)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
