#include <stdlib.h>
#include "main.h"

/**
 * _memset - allocated memory
 *
 * @str: its a string
 * @ch: the input character
 * @n: the amount of bytes
 *
 * Return: string
 */

char *_memset(char *str, char ch, unsigned int n)
{
	unsigned int tip = 0;

	while (tip < n)
		str[tip++] = ch;

	return (str);
}

/**
* _calloc - allocation of memory of an array with the using malloc.
*
* @nmemb: n elements of an array.
* @size: byte amounts.
*
* Return:  pointer to the allocated memory else NULL for failuare.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ftp;

	if (size <= 0 || nmemb == 0)
		return (0);

	ftp = malloc(nmemb * size);
	if (!ftp)
		return (0);

	return (_memset(ftp, 0, nmemb * size));
}
