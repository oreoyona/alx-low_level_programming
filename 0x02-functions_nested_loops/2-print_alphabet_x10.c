#include "main.h"

/**
 * print_alphabet_x10 - print 10x the alphabet in lower_case
 * Return:0 upon success, 1 otherwise
 */
void print_alphabet_x10(void)
{
	char letter;
	int x = 0;

	while (x < 10)
	{
		x++;
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
