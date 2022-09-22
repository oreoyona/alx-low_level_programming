#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: the destination
 * @src: the sourve
 * @n: the limit
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
