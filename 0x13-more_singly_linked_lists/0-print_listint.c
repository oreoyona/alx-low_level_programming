#include "lists.h"
/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list head
 * Return: nlan int
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}

	return (i);
}
