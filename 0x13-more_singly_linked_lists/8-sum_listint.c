#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a  list
 * @head: head
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *runner = head;

	while (runner)
	{
		sum += runner->n;
		runner = runner->next;
	}

	return (sum);
}
