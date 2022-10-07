#include "main.h"
#include <stdlib.h>

/**
 * _memset - stimulates how the memset function works
 * @s: first argument
 * @b: second argument
 * @n: the 3rd arg
 * Return: a pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
/**
 * _calloc -  allocates memory for an array, using malloc
 * @nmemb: an unsigned int
 * @size: the size of the array
 * Return: a pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	x = malloc(nmemb * size);

		if (x == NULL)
			return (NULL);
		_memset(x, 0, (nmemb * size));

		return (x);
}

