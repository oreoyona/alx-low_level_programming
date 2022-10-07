#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid
 * @grid: a pointer to a 2D array
 * @height: the height
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int x;

	if (grid == NULL || height == 0)
		return (NULL);
	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
