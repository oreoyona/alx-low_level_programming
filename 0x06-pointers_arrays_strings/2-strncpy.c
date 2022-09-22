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

	if (n <= 0)
	{
		return (0);
	}
	else
	{
		while (*src && n--)
		{
			*dest = *src;
			dest++;
			src++;
		}
	*dest = '\0';
	return (pString);
	}
}
