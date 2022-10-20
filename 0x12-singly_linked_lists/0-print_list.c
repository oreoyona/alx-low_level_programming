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
	const list_t *head = h;
	const list_t *runner = h->next;
	while (head)
	{
		printf("[%u] ", head->len);
		if (head->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", head->str);
		head = runner;
	}
	return (x);
}
