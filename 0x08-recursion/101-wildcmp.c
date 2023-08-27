#include "main.h"

/**
 * wildcmp -  This is a function that compares two strings 
 * @s1: This is 1st string to be compared
 * @s2: This is the second string containing '*' or not
 *
 * Return: 1 is the strings that can be considered as identical, and 0 if not
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	if (*s2 == '\0')
		return (0);

	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	if (*s1 == '\0')

	{
		if (*s2 != '*')
			return (0);
		else
			return (wildcmp(s1, s2 + 1));

	}
	return (0);
}