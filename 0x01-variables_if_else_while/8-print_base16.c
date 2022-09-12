#include <stdio.h>

/**
 * main - prints all the letters of the alphabet
 * Return: 0 uppon success and 1 otherwise
 */
int main(void)
{
	char ltr;
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
	}
	for (ltr = 'a'; ltr < 'g'; ltr++)
		putchar(ltr);
	putchar('\n');
	return (0);
}
