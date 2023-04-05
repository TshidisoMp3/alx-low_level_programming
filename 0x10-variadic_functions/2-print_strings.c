#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - funtion that prints strings
 * @seperator: the sperator funtion
 * @n: funtion of the number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *ptr;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(strings, char *);
		if (ptr == NULL)
			printf("(nil)");
		else
		{
			printf("%s", ptr);
			if(i < n - 1 && seperator != NULL)
			       printf("%s", seperator);	
		}

	}
	va_end(strings);
	printf("\n");
}
