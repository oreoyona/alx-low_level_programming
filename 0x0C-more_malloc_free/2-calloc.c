#include "main.h"
#include <stdlib.h>

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
	else
	{
		x = malloc(nmemb * size);
		bziro(x, nmemb * size);

		return (x);
	}
}

