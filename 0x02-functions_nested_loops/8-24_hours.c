#include "main.h"
/**
 * jack_bauer - prints hours 
 * Return: void. only prints the jack bauer hours
 */
void jack_bauer(void)
{
	int x, y = 0;

	for (x = 0; x < 24; x++)
	{
		for (y = 0; y < 60; y++)
		{
			if ( x < 9 || y < 9)
			{
				_putchar('0');
				_putchar(x);
				_putchar(':');
				_putchar('0');
				_putchar(y);
				_putchar('\n');
			}
			_putchar(x);
			_putchar(':');
			_putchar(y);
			_putchar('\n');
		}
	}
}
