#include "main.h"
#include <stdlib.h>

/**
 * _strdup - It returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: its the string to be copied.
 *
 * Return: str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *cates;
	int dexil, len = 0;

	if (str == NULL)
		return (NULL);

	for (dexil = 0; str[dexil]; dexil++)
		len++;

	cates = malloc(sizeof(char) * (len + 1));

	if (cates == NULL)
		return (NULL);

	for (dexil = 0; str[dexil]; dexil++)
		cates[dexil] = str[dexil];

	cates[len] = '\0';

	return (cates);
}