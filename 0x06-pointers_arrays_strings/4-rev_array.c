#include "main.h"
/**
 * reverse_array - a function that 
 * reverses the content of an array of integers
 * @a: the array
 * @n: the length of the array
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int demi;

	for (demi = n / 2; demi > 0; demi--, i++)
	{
		a[n - i - 1] += a[i];
		a[i] = a[n - i - 1] - a[i];
		a[n - i - 1] = a[n - i - 1] - a[i];
	}
}
