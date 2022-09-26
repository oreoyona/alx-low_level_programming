#include "main.h"
/**
 * _memcpy -  copies memory area
 * @dest: where we will copy
 * @src: what we will be copying
 * @n: the number of byte to copy
 * Return: a pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		src[x] = dest[x];
	}
	return (dest);
}
