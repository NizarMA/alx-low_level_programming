#include <stdlib.h>
#include "lists.h"

/**
 * free_listnt - frees a linked list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *freedom;

	while (head)
	{
		freedom = head->next;
		free(head);
		head = freedom;
	}
}
