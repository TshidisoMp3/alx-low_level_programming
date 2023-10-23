#include <stdlib.h>
#include "main.h"

/**
* malloc_checked - allocates memory with the use of malloc.
*
* @b: The size of the pointers that will be made
*
* Return:  it will retun the ponter,  else 98 if it fails.
*/

void *malloc_checked(unsigned int b)
{
	void *ftp;

	ftp = malloc(b);
	if (ftp == NULL)
		exit(98);

	return (ftp);
}
