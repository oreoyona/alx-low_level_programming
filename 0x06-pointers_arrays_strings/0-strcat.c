#include "main.h"
/**
 * _strcat - joins 2 strings
 * @dest: the first string
 * @src: the second string
 */
char *_strcat(char *dest, char *src)
{
	int x, y = 0;

	while (dest[x] != '\0')
		x++;
	while (src[y] != '\0')
	{
		dest[x] == src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
