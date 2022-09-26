#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string we will work on
 * @accept: the substring
 * Return: a pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int x = 0;
	int y = 0;
	int z = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (; accept[z] != '\0'; z++)
		{
			if (s[x] == accept[z])
				y = 1;
		}
		z = 0;
		if (y == 1)
			return (s + x);
		x++;
	}
	return (0);
}
