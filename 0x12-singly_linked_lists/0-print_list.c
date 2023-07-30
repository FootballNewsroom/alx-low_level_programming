#include <stdio.h>
#include "lists.h"

/***
 * print_list - prints all elements of a linked list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes printed.
 */
size_t print_list(const list_t *h)
{
	size_t node_c = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		node_c++;
		h = h->next;
	}

	return (node_c);
}
