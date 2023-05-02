#include <stddef.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node, starting at 0.
 *
 * Return: the nth node, or NULL if it does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int i = 0;

	while
		(node != NULL && i < index)
		{
			node = node->next;
			i++;
		}
	if
		(i == index && node != NULL)
		{
			return (node);
		}
	else
	{
		return (NULL);
	}
}
