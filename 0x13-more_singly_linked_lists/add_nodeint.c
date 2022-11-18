#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: head of the list
 * @n: content of the new node
 * Return: a struct
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nNode;

	nNode = malloc(sizeof(listint_t));
	if (!nNode)
		return (NULL);

	nNode->n = n;
	nNode->next = *head;
	*head = nNode;

	return (nNode);
}
