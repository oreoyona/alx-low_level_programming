#include <stdio.h>

/**
 * main - prints all the letters of the alphabet
 * Return: 0 uppon success and 1 otherwise
 */
int main(void)
{
       	int i = 0;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		putchar(' ');
		putchar(',');
	}
	putchar('\n');
	return (0);
}
