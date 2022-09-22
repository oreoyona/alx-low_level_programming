#include "main.h"
/**
 * _strcat - joins 2 strings
 * @dest: the first string
 * @src: the second string
 */
char *_strcat(char *dest, char *src)
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
	*string1 = '\0';

	return (dest);
}
