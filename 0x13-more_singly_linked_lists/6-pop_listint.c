#include "lists.h"

/**
 * pop_listint - deletes the head note of a linked list.
 * @head: pointer to the first element of a linked list.
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (data);
}
