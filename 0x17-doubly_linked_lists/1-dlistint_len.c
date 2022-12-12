#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a ll
 * @h: head of the ll
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int x;

	x = 0;

	if (h == NULL)
		return (x);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		x++;
		h = h->next;
	}

	return (x);
}
