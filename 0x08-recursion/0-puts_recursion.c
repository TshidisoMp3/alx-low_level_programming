#include "main.h"
#include <stdio.h>

/**
 *_puts_recursion - the recursion function that prints a string
 *@s: a pointer to a string
 *Return: 0
 **/

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
		_putchar('\n');
}
