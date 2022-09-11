#include <stdio.h>

/**
 * main - prints out the alphabet
 * Return: 0 if the program runs succesfully
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	char alphaBET[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;

	for (i = 0; i < 26; ++i)
		putchar(alphabet[i]);
	for (i = 0; i < 26; ++i)
		putchar(alphaBET[i]);
	putchar('\n');
	return (0);
}
