#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: the string
 * @needle: the substring
 * Return: a char
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *x = haystack;
		char *y = needle;

		while (*y == *haystack && *y != '\0'
		       && *haystack != '\0')
		{
			haystack++;
			y++;
		}
		if (*y == '\0')
			return (x);
		haystack = x + 1;
	}
	return ('\0');
}
