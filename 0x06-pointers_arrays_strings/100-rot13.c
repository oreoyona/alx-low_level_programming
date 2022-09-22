#include "main.h"
/**
 * rot13 - encodes @s into rot13
 * @s: the string we will be working on
 * Return: encoded string
 */
char *rot13(char *s)
{
	int x;
	int y;

	char chars1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char chars2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; chars1[y] != '\0'; y++)
		{
			if (s[x] == chars1[y])
			{
				s[x] = chars2[y];
				break;
			}
		}
	}
	return (s);
}
