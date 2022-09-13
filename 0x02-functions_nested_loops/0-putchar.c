#include <stdio.h>
#include "main.h"
/**
 * main - prints a string to stdo
 * Return: 0 upon success, 1 otherwise
 */
int main(void)
{
	char word[8] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		putchar(word[i]);
	}
	putchar('\n');
	return (0);
}
