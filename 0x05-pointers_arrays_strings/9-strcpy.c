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

	i = 0;
	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
