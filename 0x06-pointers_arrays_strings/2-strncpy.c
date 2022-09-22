#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: first string
 * @src: second string
 * @n: number of copies
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, l = 0;

	while(a != n)
	{
		dest[l] = src[i];
		l++;
		i++;
		if (src[i] == '\0')
			break;
	}
	while (l != n)
		dest[l++] = '\0';
	return (dest);
}
