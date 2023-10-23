#include <stdlib.h>
#include "main.h"

/**
* _realloc - recreates a memory block with the use using malloc and free.
*
* @ptr:  previously allocated pointer.
* @old_size: the size which is in bytes of the allocated space for ptr.
* @new_size: the new size which in bytes of the new memory block.
*
* Return: pointer to the newly created array elseNULL if it is a failure.
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *rellocBlo, *blockClone;
	unsigned int tip = 0;

	if (ptr == NULL)
		return (malloc(new_size));

	if (old_size == new_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	rellocBlo = malloc(new_size);
	if (rellocBlo == NULL)
	{
		free(ptr);
		return (NULL);
	}

	blockClone = ptr;
	if (old_size > new_size)
		old_size = new_size;

	while (tip < old_size)
	{
		rellocBlo[tip] = blockClone[tip];
		++tip;
	}

	free(ptr);
	return (rellocBlo);
}
