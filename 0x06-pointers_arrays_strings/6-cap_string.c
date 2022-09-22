#include "main.h"
/**
 * cap_string - changesa given s to uc
 * @s: the string we will work on
 * Return: a pointer
 */
char *cap_string(char *s)
{
	int x;
	int y;

	char chars[] = {' ', '\t', '\n', ',', ';', '.',
			'!', '?', '"', '(', ')', '{', '}'};

	for (x = 0; s[x] != '\0'; x++)
	{
		if (x == 0 && s[x] >= 'a' && s[x] <= 'z')
			s[x] -= 32;
		for (y = 0; y < 13; y++)
		{
			if (s[x] == chars[y])
			{
				if (s[x + 1] >= 'a' && s[x + 1] <= 'z')
				{
					s[x + 1] -= 32;
				}
			}
		}
	}
	return (s);
}
