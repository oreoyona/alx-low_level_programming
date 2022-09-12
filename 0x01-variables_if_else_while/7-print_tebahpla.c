#include <stdio.h>

/**
 * main - prints all the letters of the alphabet
 * Return: 0 uppon success and 1 otherwise
 */
int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; --l)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
