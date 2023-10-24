#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - call of a function
 * @array: the array pointers
 * @size: The array sizes
 * @action: The pointer a to function
 *
 * Return: 0.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int tip;

	if (size > 0 && array && action)
	{
		for (tip = 0; tip < size; ++tip)
			action(array[tip]);
	}
}
