#include "lists.h"
#include <stdio.h>
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int x;
	const dlistint_t *runner;

	x = 0;
	runner = h;
	while (runner != NULL)
		runner = h->prev;
	while (runner != NULL)
	{
		x++;
		printf("%lu\n", runner->n);
		runner = h->next;
	}
	return (x);
}
