#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the number of type int to be computed
 * Return: the last digit of a number
 */
int print_last_digit(int n)
{
	int ld;

	if ( n < 0)
	{
		n = -n;
	}
	ld = n % 10;
	_putchar(ld);

	return (ld);
}
