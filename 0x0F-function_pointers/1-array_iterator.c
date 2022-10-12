#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: the array
 * @size: of the array
 * @action: the 3rd param
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x = 0;

	while (x < size)
	{
		x++;
		action(array[x]);
	}
}
