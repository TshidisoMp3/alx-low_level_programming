#include "main.h"

/**
 *_puts_recursion - prints a string, then followed by a new line
 *@s: pointer to string
 *Return: 0
 **/

void _puts_recursion(char *s);
{
	if (*s == '\0')
        {
		_putchar('\n');

	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
