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

	int tip, pets;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	tip = pets = 0;

	while (s1[tip] != '\0')
		tip++;

	while (s2[pets] != '\0')
		pets++;

	conct = malloc(sizeof(char) * (tip + pets + 1));

	if (conct == NULL)
		return (NULL);

	tip = pets = 0;

	while (s1[tip] != '\0')
	{
		conct[tip] = s1[tip];

		tip++;
	}

	while (s2[pets] != '\0')
	{
		conct[tip] = s2[pets];

		tip++, pets++;
	}

	conct[tip] = '\0';
	return (conct);
}
