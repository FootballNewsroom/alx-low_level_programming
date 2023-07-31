#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list.
 * @h: Pointer to the linked list to traverse.
 *
 * Return: number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		h = h->next;
		cnt++;
	}
	return (cnt);
}
