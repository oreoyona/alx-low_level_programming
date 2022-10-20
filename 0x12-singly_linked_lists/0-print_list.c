#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - counts the number of nodes
 * @h: the linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", h->str);
		h = h->next;
	}
	return (x);
}
