#include <stdio.h>
#include <stdlib.h>

/**
 * main - the function print out the alphabet
 * Return: 0 if the program runs successfully
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int ch, i, n = 0;

	while((ch = getchar()) != EOF && n < 100)
		alphabet[n++] = ch;
	
	for(i = 0; i < n ; ++i)
		putchar(alphabet[i]);
	putchar('\n');
	return (0);
}
