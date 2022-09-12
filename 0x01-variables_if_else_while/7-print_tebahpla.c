#include <stdio.h>

/**
 * main - prints all the letters of the alphabet
 * Return: 0 uppon success and 1 otherwise
 */
int main(void)
{
	char alphabet[26] = "abcdefghijqklmnopqrstuvwxyz";
	int i = 0;
	
	for ( i = 0; i < 26; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
