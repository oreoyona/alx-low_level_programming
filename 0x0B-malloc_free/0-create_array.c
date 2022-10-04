#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * and initializes it with a specific char
 * @size: the size of the array
 * @c: the char
 * Return: a pointer to a char
 */
char *create_array(unsigned int size, char c)
{
	char *theArray = malloc(size);

	if (size == 0 || theArray == 0)
	{
		return (0);
	}
	else
	{
		while (size--)
			theArray[size] = c;
	}
	return (theArray);
}
