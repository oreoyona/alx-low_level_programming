#include "main.h"
/**
 * print_number - prints an integer
 * @n: the integer to be printed
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	if (n / 10)
		print_number (n1 / 10);
	_putchar ((n % 10) + '0');
}
