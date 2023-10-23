#include <stdlib.h>
#include "main.h"

/**
* array_range - makes an array of integers using malloc.
*
* @min: integer minimum.
* @max: integer maximum.
*
* Return: pointer to the newly created array, or NULL if it fails.
*/

int *array_range(int min, int max)
{
	int *usedArray, *tempoArray;

	if (min > max)
		return (NULL);

	usedArray = malloc((max - min + 1) * sizeof(int));
	if (!usedArray)
		return (NULL);

	tempoArray = usedArray;
	while (min <= max)
		*tempoArray++ = min++;

return (usedArray);
}
