#include "main.h"
/**
 * rev_string - reverses the string it is given
 * @s: the  string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int x, y;

	for (x = '\0'; s[x] != 0; x++)
	{
	}
	y = 0;
	for (x = x - 1; y < x; y++)
	{
		char some_char = s[x];

		s[x] = s[y];
		s[y] = some_char;
		y--;
	}
}
