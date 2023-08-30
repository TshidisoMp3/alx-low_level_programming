#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: its an input one to concat
 * @s2: its an input two to concat
 *
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)

{
	char *conct;

	int ti, pe;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	ti = pe = 0;

	while (s1[ti] != '\0')
		ti++;

	while (s2[pe] != '\0')
		pe++;

	conct = malloc(sizeof(char) * (ti + pe + 1));

	if (conct == NULL)
		return (NULL);

	ti = pe = 0;

	while (s1[ti] != '\0')
	{
		conct[ti] = s1[ti];

		ti++;
	}

	while (s2[pe] != '\0')
	{
		conct[ti] = s2[pe];

		ti++, pe++;
	}

	conct[ti] = '\0';
	return (conct);
}
