#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: head of the list
 * @n: data to insert in the new element
 * Return: struct
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nNode;
	listint_t *runner = *head;

	nNode = malloc(sizeof(listint_t));
	if (!nNode)
		return (NULL);

	nNode->n = n;
	nNode->next = NULL;

	if (*head == NULL)
	{
		*head = nNode;
		return (nNode);
	}

	while (runner->next)
		runner = runner->next;

	runner->next = nNode;

	return (nNode);
}
