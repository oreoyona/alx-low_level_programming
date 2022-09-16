#include "main.h"

/**
 * more_numbers - prints 10 times the first 14 digits
 * Return: void
 */
void more_numbers(void)
{
	int i, count = 0;

	while (count < 10)
	{
		count++;
		for (i = 0; i < 15; i++)
		{
			while (count < 10)
			{
				_putchar(i + '0');
				if (i > 10)
				{
					_putchar(i / 10 + '0');
					_putchar(i % 10 + '0');
				}
			}
		}
	}
}
