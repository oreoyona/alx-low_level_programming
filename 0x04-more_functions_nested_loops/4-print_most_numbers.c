#include "main.h"
/**
 * print_most_numbers - prints all the digit
 * except 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		while (i != 2 && i != 4)
			_putchar(i + '0');
	}
	_putchar('\n');
}
