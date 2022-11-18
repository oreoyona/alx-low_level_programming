#include "main.h"

/**
 * counter - counterbof digits
 * @n: the int
 * Return: number of digits in @n
 */
int counter(int n)
{
	int c = 0;


	do {
		n /= 10;
		c++;
	} while (n > 0);
	return (c);
}

/**
 * putspace - puts space
 * @n: number of spaces to put
 * Return: void
 */
void putspace(int n)
{
	int i = 0;

	for (; i < n; i++)
		_putchar(' ');
}

/**
 * print_times_table - print times table of @n
 * @n: an int
 * Return: void
 */
void print_times_table(int n)
{
	int r, c, m;

	if (n > 15 || n < 0)
		return;
	for (r = 0; r <= n; r++)
	{
		for (c = 0; c <= n; c++)
		{
			m = r * c;
			if (c == 0)
			{
				_putchar('0');
				continue;
			}
			_putchar(',');
			switch (counter(m))
			{
			case 1:
				putspace(3);
				_putchar(48 + (m % 10));
				break;
			case 2:
				putspace(2);
				_putchar(48 + ((m / 10) % 10));
				_putchar(48 + (m % 10));
				break;
			case 3:
				putspace(1);
				_putchar(48 + ((m / 10) / 10));
				_putchar(48 + ((m / 10) % 10));
				_putchar(48 + (m % 10));
				break;
			default:
				break;
			}
		}
		_putchar('\n');
	}
