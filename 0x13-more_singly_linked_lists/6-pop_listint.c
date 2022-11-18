#include "lists.h"

/**
 * pop_listint - deletes the head node of a ll
 * @head: head
 * Return: an int
 */
int pop_listint(listint_t **head)
{
	listint_t *runner;
	int x;

	if (!head || !*head)
		return (0);

	x = (*head)->n;
	runner = (*head)->next;
	free(*head);
	*head = runner;

	return (x);
}
