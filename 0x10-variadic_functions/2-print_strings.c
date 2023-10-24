#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_strings - prints strings followed by a new line.
*
* @separator: the string to be printed strings.
* @n: number of strings passed through a function.
*
* Return: 0.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int tip;
	char *strgsss;

	va_start(list, n);
	for (tip = 0; tip < n; tip++)
	{
		strgsss = va_arg(list, char*);
		if (strgsss)
			printf("%s", strgsss);
		else
			printf("(nil)");

		if (separator && tip < n - 1)
			printf("%s", separator);
	}

	va_end(list);
	printf("\n");
}
