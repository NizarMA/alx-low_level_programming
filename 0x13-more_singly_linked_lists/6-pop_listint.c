#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - the head node of a listint_t linked list.
 * @head: Double pointer to the head of the list.
 *
 * Return: The head node's data (n), or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int pop;
	listint_t *node;

	if (*head == NULL)
	{
		return (0);
	}
	pop = (*head)->n;
	node = *head;
	*head = (*head)->next;
	free(node);

	return (pop);
}
