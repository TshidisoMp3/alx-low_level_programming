#include "main.h"
#include <stdlib.h>

/**
 * free_grid - it frees a 2d integer grid previously created by alloc_grid
 * @grid: its thepointer to array of ints
 * @height: the number of rows
 *
 * Return: nothing, frees memory
 */

void  free_grid(int **grid, int height)
{
	int tip;

	for (tip = 0; tip < height; tip++)
	{
		free(grid[tip]);
	}

	free(grid);
}
