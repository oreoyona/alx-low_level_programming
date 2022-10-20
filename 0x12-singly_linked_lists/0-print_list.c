#include "lists.h"
#include <stdio.h>
/**
 * print_list - counts the number of nodes
 * @h: the linked list
 */
size_t print_list(const list_t *h)
{
	size_t x = 0;
	list_t head = h;
	list_t runner = h.next;

	if (h.str == NULL)
		printf("%s\n", "[0] (nil)");
	while (head)
	{
		x++;
		head = runner;
	}
	return (x);
}
