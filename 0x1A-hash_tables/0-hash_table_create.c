#include "hash_tables.h"

/**
 * hash_table_create - initializes a hashtable
 * with the specified size
 * @size: the size of the table
 * Return: a pointer to the hashtable
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	int i;

	if (size == NULL)
		return (NULL);
	hash_table_t *ht[size];

	if (ht == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ht[i] = NULL;
	}
	return (ht);
}
