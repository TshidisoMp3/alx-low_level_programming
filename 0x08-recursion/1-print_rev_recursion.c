#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - a recurtion fuction that is able to reverse a string
 * @s: a pointer to a string
 *
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
