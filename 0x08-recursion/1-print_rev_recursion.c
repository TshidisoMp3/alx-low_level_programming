#include "main.h"

/**
 * _print_rev_recursion - a function that able to print a string in reverse
 * @s: This is a  pointer of the string
 *
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		printf(*s);
		_print_rev_recursion(s + 1);
	}
}