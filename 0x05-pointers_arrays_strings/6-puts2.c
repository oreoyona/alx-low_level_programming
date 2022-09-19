#include "main.h"
/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * followed by a new line
 * @str: the string we will be working on
 * Retun : void
 */
void puts2(char *str)
{
	int i;
	char x;

	for (i = 0; str[i] != 0; i++)
	{
		if (i % 2 == 0)
		{
			x = str[i];
			_putchar(x);
		}
	}
	_putchar('\n');
}
