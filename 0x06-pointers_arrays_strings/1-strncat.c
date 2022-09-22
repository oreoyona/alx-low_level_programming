#include "main.h"
/**
 * _strncat - joins 2 strings
 * @dest: the first string
 * @src: the second string
 * @n: the number of byte
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *string1;

	for (i = 0; i <= dest[i]; i++)
	{
	}
	string1 = dest + i;

	while (*src != '\0')
	{
		*string1++ = *src++;
	}
	if (string1[n] == 0)
		*string1 = '\0';

	return (dest);
}
