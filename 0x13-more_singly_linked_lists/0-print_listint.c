#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: first node of the list.
 *
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t nizar = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nizar++;
	}

	return (nizar);
}
