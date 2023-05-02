#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Add a new node at the end of a listint_t list.
 * @head: Pointer to the head of the list.
 * @n: Value to be added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_one, *present;

	new_one = malloc(sizeof(listint_t));
	if (new_one == NULL)
		return (NULL);

	new_one->n = n;
	new_one->next = NULL;

	if (*head == NULL)
	{
		*head = new_one;
	}
	else
	{
		present = *head;
		while
			(present->next != NULL)
		{
			present = present->next;
		}
	present->next = new_one;
	}

	return (new_one);
}
