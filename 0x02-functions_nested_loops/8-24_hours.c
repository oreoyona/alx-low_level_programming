#include "main.h"
#include <stdio.h>
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
				printf("0%d:0%d", x, y);
				_putchar('\n');
			}
			printf("%d:%d", x, y);
			_putchar('\n');
		}
	}
}
