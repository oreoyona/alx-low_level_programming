#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list
 * @head: header
 * @idx: index
 * @n: data to insert in the new node
 * Return: a struct
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *nNode;
	listint_t *runner = *head;

	nNode = malloc(sizeof(listint_t));
	if (!nNode || !head)
		return (NULL);

	nNode->n = n;
	nNode->next = NULL;

	if (idx == 0)
	{
		nNode->next = *head;
		*head = nNode;
		return (nNode);
	}

	for (i = 0; runner && i < idx; i++)
	{
		if (i == idx - 1)
		{
			nNode->next = runner->next;
			runner->next = nNode;
			return (nNode);
		}
		else
			runner = runner->next;
	}

	return (NULL);
}
