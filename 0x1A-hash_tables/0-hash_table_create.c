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
	unsigned long int i;

	if (!size)
		return (NULL);
	myTable = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (myTable == NULL)
	{
		return (NULL);
	}
	myTable->size = size;
	myTable->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);
	if (myTable->array == NULL)
	{
		free(myTable);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		myTable->array[i] = NULL;
	return (myTable);
}
