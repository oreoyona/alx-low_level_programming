#include "lists.h"
#include <string.h>

/**
 * add_node - adds a node as the head of linked list
 * @head: pointer that points to the head of ll
 * @str: pointer to string
 * Return: pointer to new head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *h;
	int count = 0;

	h = malloc(sizeof(list_t));
	if (h == NULL)
		return (NULL);

	while (str[count])
		count++;

	h->len = count;
	h->str = strdup(str);
	h->next = *head;
	*head = h;
	return (h);
}
