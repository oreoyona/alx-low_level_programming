#include "hash_tables.h"
/**
 * hash_table_create - initializes a hashtable
 * with the specified size
 * @size: the size of the table
 * Return: a pointer to the hashtable
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *myTable;

	if (!size)
		return (NULL);
	myTable = calloc(1, sizeof(hash_table_t));
	if (!myTable)
	{
		return (NULL);
	}
	myTable->size = size;
	myTable->array = calloc(size, sizeof(hash_node_t *));
	if (!myTable->array)
	{
		free(myTable);
		return (NULL);
	}
	return (myTable);
}
