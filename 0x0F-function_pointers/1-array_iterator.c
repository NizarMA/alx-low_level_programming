#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints
 * @array: array
 * @size: size
 * @action: pointer
 * Return: no
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
