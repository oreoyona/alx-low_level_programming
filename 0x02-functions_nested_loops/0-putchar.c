#include <main.h>
/**
 * main - prints a string to stdo
 * Return: 0 upon success, 1 otherwise
 */
int main(void)
{
	char word[7] = "_putchar";
	int i = 0;

	for (i = 0; i < 7; i++)
	{
		putchar(word[i]);
	}
	putchar('\n');
	return (0);
}
