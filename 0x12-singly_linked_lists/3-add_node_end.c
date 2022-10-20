#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - adds a node to the end of linked list
 * @head: pointer to a pointers to the head
 * @str: str
 * Return: pointer to last node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *h, *tmp;
	unsigned int count = 0;

	h = malloc(sizeof(list_t));
	if (h == NULL)
		return (NULL);

	while (str[count])
		count++;

	h->len = count;
	h->str = strdup(str);
	if (*head == NULL)
	{
		h->next = *head;
		*head = h;
	}
	else
	{
		h->next = NULL;
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = h;
	}
	return (h);
}
