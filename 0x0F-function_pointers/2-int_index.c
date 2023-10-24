#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - search integers for the values in an array
 * @array: the array pointers
 * @size: the array sizes
 * @cmp: the pointers to the function to compare values
 *
 * Return: 0 success, failure (-1).
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int tip;

	if (size <= 0 || !array || !cmp)
		return (-1);

	for (tip = 0; tip < size; ++tip)
	{
		if (cmp(array[tip]))
			return (tip);
	}

return (-1);
}
