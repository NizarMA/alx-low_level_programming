#include "liists.h"

/**
 *  print_listint - prints all the elements of a list.
 *  @h: linked list of listnt_t to print
 *  Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t c = 0;

	while (h)
	{
		printf("%d\n", h->n);
		c++;
		h = h->next;
	}
	return (c);
}
