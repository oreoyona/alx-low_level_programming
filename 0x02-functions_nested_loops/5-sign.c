#include "main.h"

/**
 * print_sign - tells wether a given number is positive or not
 * @n: the number to be tested
 * Return: 1 if positive
 * 0 if 0
 * -1 f negative
 */
int print_sign(int n)
{
	int code = -1;

	if (n == 0)
	{
		code = 0;
		_putchar('0');
	}
	else if (n > 0)
	{
		code = 1;
		_putchar('+');
	}
	else
		_putchar('-');
	return (code);
}
