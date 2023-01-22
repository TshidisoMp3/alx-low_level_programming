#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - The function that executes a funtion of an array
 * @array: a pointer to an array
 * @size: number of elements in an array 
 * @action: pointer to a funtion
 *
 * Return: Nothing
 *
 **/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
