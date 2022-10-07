#include "main.h"
#include <stdlib.h>
/**
 * _memcpy - implementation of the memcpy function
 * @dst: first arg
 * @src: the old mem
 * @x: the size
 * Return: a pointer
 */
void *_memcpy(void *dst, const void *src, unsigned int x)
{
	char *y = (char *)dst;
	const char *z = (const char *)src;

	if ((y != NULL) && (z != NULL))
	{
		while (x)
		{
			*(y++) = *(z++);
			--x;
		}
	}
	return (dst);
}
/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the memory previously allocated
 * @old_size: size, in bytes, of the allocated space
 * @new_size: the size of the new memory block
 * Return: a pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (!ptr)
		return (malloc(new_size));
	else if (new_size <= old_size)
		return (ptr);
	void *ptrNew = malloc(new_size);

	if (ptrNew)
	{
		_memcpy(ptrNew, ptr, old_size);
		free(ptr);
	}
	return (ptrNew);
}
