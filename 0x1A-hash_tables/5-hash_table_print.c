#include "hash_tables.h"
/**
 * hash_table_print - prints a ht
 * @ht: pointer to the ht
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *h;
	char *sep;

	if (ht == NULL)
		return;

	printf("{");
	sep = "";

	for (i = 0; i < ht->size; i++)
	{
		h = ht->array[i];
		while (h != NULL)
		{
			printf("%s'%s': '%s'", sep, h->key, h->value);
			sep = ", ";
			h = h->next;
		}
	}
	printf("}\n");
}
