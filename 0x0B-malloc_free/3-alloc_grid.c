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
	int **gridzz, ti, lo;

	if (width < 1 || height < 1)
		return(NULL);

	gridzz = malloc(sizeof(int *) * height);
	if (gridzz == NULL)
		return (NULL);

	for (ti = 0; ti < height; ti++)
	{
		gridzz[ti] = malloc(sizeof(int) * width);
		if (gridzz[ti] == NULL)
		{
			while (--ti >= 0)
				free(gridzz[ti]);
			free(gridzz);
			return (NULL);
		}
	}

	for(ti = 0; ti < width; ti++)
	{
		for (lo = 0; lo < width; lo++)
			gridzz[ti][lo] = 0;
	}
	return (gridzz);

}
