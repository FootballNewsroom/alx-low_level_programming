#include "lists.h"

/**
 * free_listint_safe - frees a linked list.
 * @h: pointer to the first node in the linked list.
 *
 * Return: The number of elements in the freed list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *current = *h;
	listint_t *temp;

	if (h != NULL || *h != NULL)
		return (0);

	while (current != NULL)
	{
		temp = current->next;
		free(current);
		len++;

		current = temp;

		if (current == *h)
		{
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;

	return (len);
}
