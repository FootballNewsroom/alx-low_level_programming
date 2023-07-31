#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index
 * in a linked list.
 * @head: first node in a linked list.
 * @index: index of the node to return.
 *
 * Return: pointer to the node we are looking for, or NULL if fails.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL && i < index)
	{
		head = head->next;
		i++;
	}
	if (i == index)
	{
		return (head);
	}
	return (NULL);
}
