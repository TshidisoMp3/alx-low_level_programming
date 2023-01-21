#include <stdio.h>
#include "function_pointers.h"
#include "stdlib.h"

/**
 * print_name - funtion that prints a name
 * @name: a pointer to a character
 * @f: its a pointer to a funtion that returns nothing
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL)
		f(name);
}
