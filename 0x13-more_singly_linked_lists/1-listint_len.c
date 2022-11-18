#include "lists.h"
/**
 * listint_len - computes the number of el in a ll
 * @h: linked list head
  * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}

	return (x);
}
