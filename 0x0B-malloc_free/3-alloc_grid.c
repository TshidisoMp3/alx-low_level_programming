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
	int **gridzz, tip, lop;

	if (width <= 0 || height <= 0)
		return (NULL);

	gridzz = malloc(height * sizeof(int *));
	if (gridzz == NULL)
		return (NULL);

	for (tip = 0; tip < height; tip++)
	{
		gridzz[tip] = malloc(width * sizeof(int));
		if (gridzz[tip] == NULL)
		{
			for (; tip >= 0; tip--)
				free(gridzz[tip]);
			free(gridzz);
			return (NULL);
		}

		for (lop = 0; lop <= width; lop++)
			gridzz[tip][lop] = 0;
	}

return (gridzz);
}
