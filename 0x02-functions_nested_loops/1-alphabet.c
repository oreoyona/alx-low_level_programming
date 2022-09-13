/**
 * print_alphabet - print the alphabet in lower_case
 * Return:0 upon success, 1 otherwise
 */
#include "main.h"

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter < 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
