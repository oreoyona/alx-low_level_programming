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
	while(src)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
