#include "lists.h"

/**
 * get_nodeint_at_index - computes the index
 * @head: head
 * @index: index
 * Return: struct
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *runner = head;

	while (runner && i < index)
	{
		runner = runner->next;
		i++;
	}

	return (runner ? runner : NULL);
}
