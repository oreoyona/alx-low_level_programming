#include <stdio.h>
#include <stdlib.h>

/**
 * main - the function print out the alphabet
 * Return: 0 if the program runs successfully
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	for (i = 0; i < 26 ; ++i)
	{
		if(alphabet[i] != 'e' && alphabet[i] != 'q')
			putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
