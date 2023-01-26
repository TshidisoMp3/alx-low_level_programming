#include "main.h"
#include <stddef.h>

/**
 * _strchr - finds the location of the string
 * @s: the string
 * @c: the character
 *
 * Return: a pointer to a character
 */

char *_strchr(char *s, char c);
{
	int i;

	for (i=0; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
