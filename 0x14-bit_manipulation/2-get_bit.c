#include "main.h"
/**
 * get_bit - gets a bit at a given index
 * @n: the num
 * @index: the index (obviouzly)
 * Return:the bit
 * -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int max = 0x01;

	max <<= index;
	if (max == 0)
		return (-1);

	if ((n & max))
		return (1);
	else
		return (0);
}
