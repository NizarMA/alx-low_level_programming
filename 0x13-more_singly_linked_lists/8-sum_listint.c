#include <stddef.h>
#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: Sum of all the data (n) in the list, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int i = 0;
	listint_t *end_of_the_year = head;

	while
		(end_of_the_year != NULL)
		{
			i += end_of_the_year->n;
			end_of_the_year = end_of_the_year->next;
		}

	return (i);
}
