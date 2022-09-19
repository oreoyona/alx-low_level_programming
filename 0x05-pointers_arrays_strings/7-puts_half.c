#include "main.h"
/**
 * puts_half -  prints half of a string
 * @str: the string we will be working on
 * Return: void
 */
void puts_half(char *str)
{
	int x, y;
	char z;

	for (x = 0; str[x] != 0; x++)
	{
	}
	if (x % 2 == 0)
	{
		for ((y = x / 2); str[y] != 0; y++)
		{
			z = str[y];
			_putchar(z);
		}
	}
	else
	{
		for ((y = (x - 1) / 2); str[y] != 0; y++)
		{
			z = str[y];
			_putchar(z);
		}
	}
	_putchar('\n');
}
