#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function to print a name
 * @name: strings
 * @f: the pointers to the functions
 *
 * Return: 0.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
