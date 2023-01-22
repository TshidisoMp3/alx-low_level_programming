#include <stdio.h>
#include "funtion_pointers.h"

/**
 * int_index - funtion that searches an integer
 * @array: pointer to an array
 * @size : number of elements in the array 
 * @cmp : pointer to the function to be used to compare values
 *
 * Return: first element index,on succes or return -1
 **/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);

	}
	         
	        return (-1);
}
