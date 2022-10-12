#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array: the array we will work on
 * @size: of the array
 * @cmp: a pointer
 * Return: an int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	while (x < size)
	{
		if (cmp(array[i]))
			return (x);
		x++;
	}
	return (-1);
}
