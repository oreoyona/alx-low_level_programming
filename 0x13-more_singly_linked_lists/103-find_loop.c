#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *l1 = head;
	listint_t *l2 = head;

	if (!head)
		return (NULL);

	while (l1 && l2 && l2->next)
	{
		l2 = l2->next->next;
		l1 = l1->next;
		if (l2 == l1)
		{
			l2 = head;
			while (l2 != l1)
			{
				l1 = l1->next;
				l2 = l2->next;
			}
			return (l2);
		}
	}

	return (NULL);
}
