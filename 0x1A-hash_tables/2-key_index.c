#include "hash_tables.h"
/**
 * key_index - returns the index of a key
 * @key: the key to find the index of
 * @size: the size of the array
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i, c;

	c = hash_djb2(key);
	i = c % size;
	return (index);
}
