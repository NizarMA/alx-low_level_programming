#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **MAROC;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	MAROC = malloc(sizeof(int *) * height);

	if (MAROC == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		MAROC[x] = malloc(sizeof(int) * width);

		if (MAROC[x] == NULL)
		{
			for (; x >= 0; x--)
				free(MAROC[x]);

			free(MAROC);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			MAROC[x][y] = 0;
	}

	return (MAROC);
}
