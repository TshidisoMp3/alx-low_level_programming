#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - prints a 2 integer grid
 * @width: number of columns
 * @height: prints number of rows
 *
 * Return: null
 */

int **alloc_grid(int width, int height)
{
	int **gridzzz, tip, lop;

	if (width <= 1 || height <= 1)
		return(NULL);

	gridzzz = malloc(height * sizeof(int *));
	if (gridzzz == NULL)
		return (NULL);

	for (tip = 0; tip < height; tip++)
	{
		gridzzz[tip] = malloc(width * sizeof(int));
		if (gridzzz[tip] == NULL)
		{
			for (; tip >= 0; --tip)
				free(gridzzz[tip]);
			free(gridzzz);
			return (NULL);
		}
	}

	
		for (lop = 0; lop <= width; lop++)
			gridzzz[tip][lop] = 0;
	
	return (gridzzz);
	
}
