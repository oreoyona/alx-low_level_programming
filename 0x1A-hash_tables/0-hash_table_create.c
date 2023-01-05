#include "hash_tables.h"
#define MAX_SIZE 21474836
/**
 * hash_table_create - initializes a hashtable
 * with the specified size
 * @size: the size of the table
 * Return: a pointer to the hashtable
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *ht[MAX_SIZE];

	if (ht == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ht[i] = NULL;
	}
	return (*ht);
}
