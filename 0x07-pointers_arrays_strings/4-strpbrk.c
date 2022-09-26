#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string we will work on
 * @accept: the substring
 * Return: a pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int x, y, z = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (z = 0; accept[z] != '\0'; z++)
		{
			if (s[x] == accept[z])
				y = 1;
		}
		z = 0;
		if (y == 1)
			return (s + x);
	}
	return (0);
}
