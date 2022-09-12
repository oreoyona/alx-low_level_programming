#include <stdio.h>

/**
 * main - prints all the letters of the alphabet
 * Return: 0 uppon success and 1 otherwise
 */
int main(void)
{
	char alphabet[26] = "abcdefghijlmnopqrstuvwxyz";
	int i = 0;
	
	for (i = 26; i > -1; i--)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
