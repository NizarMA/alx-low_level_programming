#include <stddef.h>
#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: A pointer to a pointer to the first node of the list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *last = NULL;
	listint_t *present = *head;
	listint_t *next;

	while
		(present != NULL)
		{
			next = present->next;
			present->next = last;
			last = present;
			present = next;
		}

	*head = last;

	return (*head);
}
