#include <stdlib.h>
#include "main.h"

/**
* string_nconcat - function that is able to concatenate the 1st n character
* of the 2nd string with the 1st string.
*
* @s1: pointers to the 1st string.
* @s2: pointers to the 2nd string.
* @n: concatnated number of pointers.
*
* Return:  a pointer string else NULL fails.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strpoints, *temporpoints;
	unsigned int sizezz, sizezz1 = 0, sizezz2 = 0;

	if (!s1)
		s1 = "";
	else
		while (*(s1 + sizezz1++))
			;

	if (!s2)
		s2 = "";
	else
		while (*(s2 + sizezz2++))
			;

	if (n > sizezz2)
		n = sizezz2;

	if (sizezz1 == 0)
		sizezz1 = 1;

	sizezz = sizezz1 + n;
	strpoints = malloc(sizezz * sizeof(char));

	if (!strpoints)
		return (NULL);

	temporpoints = strpoints;
	while (*s1)
		*temporpoints++ = *s1++;

	while (sizezz1++ < sizezz)
		*temporpoints++ = *s2++;
	*temporpoints = '\0';

return (strpoints);
}
