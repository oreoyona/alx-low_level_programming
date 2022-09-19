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

	for (i = 0; src[i] != 0; i++)
	{
		dest[i] = src[i];
		x++;
		dest[x++] = '\0';
	}
	return (dest);
}
