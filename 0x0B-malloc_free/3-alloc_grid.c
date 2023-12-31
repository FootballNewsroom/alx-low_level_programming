#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid.
 * @width: width input.
 * @height: height input.
 *
 * Return: pointer to 2 dm array.
 */
int **alloc_grid(int width, int height)
{
	int **mee;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	mee = malloc(sizeof(int *) * height);

	if (mee == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		mee[x] = (int *)malloc(sizeof(int) * width);

		if (mee[x] == NULL)
		{
			for (y = 0; y < x; y++)
				free((void *)mee[x]);

			free(mee);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			mee[x][y] = 0;
	}
	return (mee);
}
