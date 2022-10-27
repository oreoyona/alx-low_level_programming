#include "main.h"
/**
 * flip_bits - gets number of bits needed
 * @n: firzt
 * @m: second
 * Return: hiw many flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int x = 0;
	unsigned long int y = (n ^ m);
	unsigned long int max = 0x01;

	while (max <= y)
	{
		if (max & y)
			x++;
		max <<= 1;
	}
	return (x);
}
