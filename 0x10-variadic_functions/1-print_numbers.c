#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_numbers - prints numbers, followed by a new line.
*
* @separator: string printed between numbers.
* @n: number of integers going trough to the function.
*
* Return: 0.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int tip;

	if (n != 0)
	{
		va_start(list, n);

		for (tip = 0; tip < n - 1; tip++)
		{
			printf("%d", va_arg(list, int));
			if (separator)
				printf("%s", separator);
		}
		printf("%d", va_arg(list, int));

		va_end(list);
	}
printf("\n");
}
