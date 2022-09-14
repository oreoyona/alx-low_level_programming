#include "main.h"

/**
 * _abs - prints the absolute value of a number
 * @n: the number to be computed
 * Return: the absolute value o the given number
 */
int _abs(int n)
{
	if (n < 0)
		n = -n;
	return n;
}
