#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: pointer to the head of the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *freedom;

	while (*head != NULL)
	{
		freedom = *head;
		*head = (*head)->next;
		free(freedom);
	}

	*head = NULL;
}
