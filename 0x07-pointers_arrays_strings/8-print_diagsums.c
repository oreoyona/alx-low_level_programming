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
	int x, somme = 0;
	int somme2;

	for (x = 0; x < size; x++)
	{
		somme += a[x];
		somme2 += a[size - 1 - 1];
		x += size;
	}
	printf("%d ", somme);
	printf("%d ", somme2);
}
