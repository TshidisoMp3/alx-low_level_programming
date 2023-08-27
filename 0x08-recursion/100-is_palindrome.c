#include "main.h"

/**
 * _strlen_recursion - finds the length of a string
 * @s: The pointer to string
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}

/**
 * is_palind_recursive - checks if two chars of a string are equal
 * @s: string to be checked
 * @et: first index
 * @dt: last index
 *
 * Return: 1 if equal, else 0
 */

int is_palind_recursive(char *s, int et, int dt)
{
	if (et == dt)
		return (1);

	if (et == dt - 1)
		return (s[et] == s[dt]);

	if (s[et] != s[dt])
		return (0);
	return (is_palind_recursive(s, et + 1, dt - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: pointer to string
 *
 * Return: 1 if string is palindrome  else 0
 */

int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);

	if (len == 0 || *s != s[len - 1])
		return (0);
	return (is_palind_recursive(s, 0, len - 1));
}