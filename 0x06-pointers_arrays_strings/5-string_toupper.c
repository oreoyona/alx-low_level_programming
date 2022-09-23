#include "main.h"
/**
 * string_toupper - changes to lc
 * @s: the string we will work on
 * Return: a pointer
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] <= 'z' && s[i] >= 'a')
		{
			s[i] -= 32;
		}
	}
	return (s);
}
