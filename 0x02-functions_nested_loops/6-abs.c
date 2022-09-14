#include "main.h"
#include <math.h>
/**
 * _abs - prints the absolute value of a number
 * @n: the number to be computed
 * Return: the absolute value o the given number
 */
int _abs(int n)
{
	int db = n * n;
	int rc = sqrt(db);

	return rc;
}
