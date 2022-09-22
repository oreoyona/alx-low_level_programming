#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: first string
 * @src: second string
 * @n: number of copies
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *pString = dest;

	if (dest == NULL)
	{
		return (NULL);
	}
	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (pString);
}
