#include "hash_tables.h"

/**
 * add_node - adds a nodeat a given index
 * @head: head of the hash linked list
 * @key: key of the hash
 * @value: value
 * Return: pointer to the node first element
 */
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *h;

	h = *head;

	while (h != NULL)
	{
		if (strcmp(key, h->key) == 0)
		{
			free(h->value);
			h->value = strdup(value);
			return (*head);
		}
		h = h->next;
	}

	h = malloc(sizeof(hash_node_t));

	if (h == NULL)
		return (NULL);

	h->key = strdup(key);
	h->value = strdup(value);
	h->next = *head;
	*head = h;
	return (*head);
}
/**
 * hash_table_set - adds elements to a table*
 * @ht: pointer to the ht
 * @key: key of the hashtable
 * @value: value
 * Return: 1 uppon successes, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;

	if (ht == NULL)
		return (0);

	if (key == NULL || *key == '\0')
		return (0);

	i = key_index((unsigned char *)key, ht->size);

	if (add_node(&(ht->array[i]), key, value) == NULL)
		return (0);

	return (1);
}
