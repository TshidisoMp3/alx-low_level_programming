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
	char *cate;
	int dexi, len = 0;

	if (str == NULL)
		return (NULL);

	for (dexi = 0; str[dexi]; dexi++)
		len++;

	cate = malloc(sizeof(char) * (len + 1));

	if (cate == NULL)
		return (NULL);

	for (dexi = 0; str[dexi]; dexi++)
		cate[dexi] = str[dexi];

	cate[len] = '\0';

	return (cate);
}
