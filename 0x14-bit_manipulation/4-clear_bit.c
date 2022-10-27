#include "main.h"
/**
 * clear_bit - sets a bit to 0 at given index
 * @n: num
 * @index: index dear bettyt
 * Return: 1
 * -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max = 0x01;

	max = ~(max << index);
	if (max == 0x00)
		return (-1);
	*n &= max;
	return (1);
}
