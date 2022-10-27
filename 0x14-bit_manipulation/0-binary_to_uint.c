#include "main.h"
/**
 * binary_to_uint - converts binary number to an unsigned int
 * @b: the number to convert
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 1, y = 0, i = 0;

	if (b == NULL)
		return (0);

	while (b[i])
		i++;

	while (i)
	{
		if (b[i - 1] != '0' && b[i - 1] != '1')
			return (0);

		if (b[i - 1] == '1')
			y += x;
		x *= 2;
		i--;
	}
	return (y);
}
