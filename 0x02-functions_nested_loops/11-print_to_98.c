#include "main.h"

/**
 * print_to_98 - print the integers between a given interval
 * @n: the interval
 * Return: void
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (i = n; i <= 98; i--)
		{
			_putchar(i % 10 + '0');
			_putchar(',');
			_putchar('\n');
		}
	}
	else if (n < 0)
	{
		for (i = n; i < 98; i++)
		{
			_put
