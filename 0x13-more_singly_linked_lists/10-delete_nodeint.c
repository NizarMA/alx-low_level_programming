#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of a linked list.
 * @head: Pointer to a pointer to the first node of the list.
 * @index: The index of the node to delete.
 *
 * Return: 1 if succeeded, -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *last;
	unsigned int i;

	if
		(head == NULL || *head == NULL)
			return (-1);

	if
		(index == 0)
		{
			current = *head;
			*head = (*head)->next;
			free(current);
			return (1);
		}

	last = *head;
	current = (*head)->next;

	for
		(i = 1;
		 current != NULL && i < index;
		 i++)
		{
			last = current;
			current = current->next;
		}

	if
		(current == NULL)
			return (-1);

	last->next = current->next;
	free(current);

	return (1);
}
