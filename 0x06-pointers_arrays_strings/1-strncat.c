#include "main.h"
/**
 * _strncat - joins 2 strings
 * @dest: the first string
 * @src: the second string
 * @n: the number of byte
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int l = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[l] != '\0' && l < n)
	{
		dest[i] = src[l];
		l++;
		i++;
	}
	return (dest);
}
