#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: the minimum value
 * @max: the max value
 * Return: a pointer
 */
int *array_range(int min, int max)
{
	int *x;
	int y, z;

	if (min > max)
		return (NULL);
	y = max - min;
	x = malloc((y + 1) * sizeof(int));

	if (x == NULL)
		return (NULL);
	for (z = 0; z <= y; min++, z++)
	{
		x[z] = min;
	}
	return (x);
}
