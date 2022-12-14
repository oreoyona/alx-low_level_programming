#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of diagonals
 * @a: an array
 * @size: dimension of the a
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	unsigned int sum1, sum2;
	int row, col;

	row = 0;
	col = 0;
	sum1 = 0;

	while (row < size)
	{
		sum1 += *(a + (row * size + col));
		row++;
		col++;
	}

	row = 0;
	/* start from last col then move backwards */
	col = size - 1;
	sum2 = 0;

	while (row < size)
	{
		sum2 += *(a + (row * size + col));
		row++;
		col--;
	}

	printf("%d, %d\n", sum1, sum2);

}
