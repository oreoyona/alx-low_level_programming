#include "main.h"
#include <stdio.h>

/**
 * create_array - creates an array of chars, 
 * and initializes it with a specific char
 * @size: the size of the array
 * @c: the char
 * Return: a pointer to a char
 */
char *create_array(unsigned int size, char c)
{
	char theArray[] = malloc(sizeof(c) * size);

	if (size == 0)
	{
		return (NULL);
	}
	else
		return (0);
