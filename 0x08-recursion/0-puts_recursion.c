#include "main.h"

/**
 *_puts_recursion - this funtion is made to print a string follwed by a new line
 *@s: This is a pointer to a string
 *Return: 0
 **/

void _puts_recursion(char *s)

{
	if (*s == '\0')
	{
		putchar('\n');
	}
	putchar(*s);
	_puts_recursion(s + 1);
}