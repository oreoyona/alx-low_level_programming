#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: pointer to the hash table
 * Return: no return
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *h1;
	hash_node_t *h2;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		h1 = ht->array[i];
		while ((h2 = h1) != NULL)
		{
			h1 = h1->next;
			free(h2->key);
			free(h2->value);
			free(h2);
		}
	}
	free(ht->array);
	free(ht);
}
