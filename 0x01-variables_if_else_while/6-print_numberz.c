#include <stdio.h>
/**
 * main -  prints the first 10 digits
 * Return: 0 if it is a sucees, 1 otherwise
 */
int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
