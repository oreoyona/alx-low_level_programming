#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: the array
 * @size: the size
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int x, somme = 0, somme2 = 0;

	for (x = 0; x < size; x++)
	{
		somme += a[x];
		somme2 += a[size - x - 1];
		a += size;
	}
	printf("%d ", somme);
	printf("%d\n", somme2);
}
