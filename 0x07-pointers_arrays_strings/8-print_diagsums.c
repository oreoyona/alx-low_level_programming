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
	int x = 0;
	int somme = 0;
	int somme2 = 0;

	for (x = 0; x < size; x++)
	{
		somme += a[x];
		somme2 += a[size - 1 - 1];
		a += size;
	}
	printf("%d ", somme);
	printf("%d\n", somme2);
}
