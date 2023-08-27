#include "main.h"

/**
 * _strlen_recursion - a function that is able to return the length of a string
 * @s: This is pointer to string
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}