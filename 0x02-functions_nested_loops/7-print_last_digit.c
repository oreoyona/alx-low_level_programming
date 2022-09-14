#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the number of type int to be computed
 * Return: the last digit of a number
 */
int print_last_digit(int n)
{
	int ld;

	if (n < 0 && n != -2147483648)
	{
		n = -n;
		ld = n % 10;
	}

	else if (n == -2147483648)
		ld = -(n % 10);
	else
		ld = n % 10;
	_putchar(ld + '0');
	return (ld);
}
