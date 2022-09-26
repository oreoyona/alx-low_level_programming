#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s:the string
 * @c: the char
 * Return: a pointer
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; *s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (*s == c)
		return (s);
	else
		return (NULL);
}
