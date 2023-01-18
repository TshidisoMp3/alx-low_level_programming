#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - prints a 2 integer grid
 * @width: number of columns
 * @height: prints number of rows
 *
 * Return: null
 */

int **alloc-grid(int width, int height)
{
	int **grid, i, j;

	if (width < 1 || height < 1)
		return(NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			while (--i >= 0)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}

	for(i = 0; i < width; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);

}
