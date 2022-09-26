#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s:the string
 * @c: the char
 * Return: a pointer
 */
char *_strchr(char *s, char c)
{
	int x;
	char v;
	

	for (x = 0; x < s[x]; x++)
	{
		if (s[x] == c)
		{
			v = s[x];
			return (&v);
		}
	}
	return (NULL);
}
