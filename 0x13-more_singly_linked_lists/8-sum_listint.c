#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint list.
 * @head: The first node in the list.
 *
 * Return: resulting sum.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
