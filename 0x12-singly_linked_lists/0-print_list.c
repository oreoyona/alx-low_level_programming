#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - counts the number of nodes
 * @h: the linked list
 */
size_t print_list(const list_t *h)
{
	size_t x = 0;
	const list_t *head = h;
	const list_t *runner = h -> next;

	if (h -> str == NULL)
		printf("%s\n", "[0] (nil)");
	while (head)
	{
		x++;
		head = runner;
	}
	return (x);
}
