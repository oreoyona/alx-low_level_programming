#include "main.h"
/**
 * _strcpy - copies the string pointed to by src
 * @dest: pointer1
 * @src: pointer2
 * Return: a char
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int x;

	x = 0;
	while(src)
	{
		x++;
	}
	dest = malloc(x * sizeof(char));

	i = 0;
	while(src)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	free(dest);
	return (dest);
}
