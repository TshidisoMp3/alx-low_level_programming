
#include <stdio.h>
#include <stdlib.h>


/**
 * malloc_checked - funtion that allocates memory using malloc
 * @b: its the size of the allocated memory
 *
 * Return: the pointer that is allocated to memeory or exit with 98
 */


void *malloc_checked(unsigned int b)

{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
