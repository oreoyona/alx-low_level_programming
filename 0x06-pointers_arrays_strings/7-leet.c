#include "main.h"
/**
 * leet - this function encodes a string in 1337
 * @s: the string we will be working on
 * Return: *s the string encoded
 */
char *leet(char *s)
{
	int x;
	int y;
	char *chars1 = "aAeEoOtTlL";
	char *chars2 = "4433007711";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (s[x] == chars1[x])
				s[x] = chars2[y];
		}
	}
	return (s);
}
