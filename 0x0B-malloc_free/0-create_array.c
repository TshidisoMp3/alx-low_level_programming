#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and
 *                initializes it with a specific char.
 * @size: Its the size of the array to be initialized.
 * @c: IT   the specific char to intialize the array with.
 *
 * Return: size == 0 or the function fails - NULL.
 *         Otherwise - a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *arrayss;
	unsigned dexi;

	if (size == 0)
		return (NULL);

	arrayss = malloc(sizeof(char) * size);

	if (arrayss == NULL)
		return (NULL);

	for (dexi = 0; dexi < size; dexi++)
		arrayss[dexi] = c;

	return (arrayss);
}
