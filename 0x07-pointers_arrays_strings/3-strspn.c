#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: the string
 * @accept: the substring
 * Return: the length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x;
	char * y;

	for (x = 0; *s; s++, x++)
	{
		for (y = accept; *y && *p != *s; y++)
		{
		}
		if (!*y)
			break;
	}
	return (x);
}
