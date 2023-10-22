#include "main.h"

/**
 * _strlen_recursion - size of the letters
 * @s: pointer to strings 
 * Return: recursion answer
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * p1 - palindrome checker
 * @s: pointer to strings
 * @l: position of letters
 * Return: boolena
 */

int p1(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}

	if (*s == *(s + l))
	{
		return (p1(s + 1, l - 2));
	}
	return (0);
}

/**
 * is_palindrome - palindrome checker
 * @s: pointer to the strings
 * Return: the recursions
 */

int is_palindrome(char *s)
{
	int lengthss = _strlen_recursion(s);

	return (p1(s, lengthss - 1));
}
