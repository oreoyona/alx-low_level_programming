#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list
 * @head: head
 * @index: index
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *runner = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(runner);
		return (1);
	}

	while (i < index - 1)
	{
		if (!runner || !(runner->next))
			return (-1);
		runner = runner->next;
		i++;
	}


	current = runner->next;
	runner->next = current->next;
	free(current);

	return (1);
}
