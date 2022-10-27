#include "main.h"
/**
 * print_binary - prints a formated binary number
 * @n: the binary num
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned int x = 0, max = 32768;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (max)
	{
		if (x == 1 && (n & max) == 0)
			_putchar('0');
		else if ((n & max) != 0)
		{
			_putchar('1');
			x = 1;
		}
		max >>= 1;
	}
}
