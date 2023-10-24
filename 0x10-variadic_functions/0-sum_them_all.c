#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* sum_them_all - project the  sum of all its params.
*
* @n: number of params that have been passed to function.
*
* Return: sum else fail otherwise.
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int tip;
	int ums = 0;

	if (n == 0)
		return (0);

	va_start(list, n); /* Initialize the argument list. */

	for (tip = 0; tip < n; tip++)
		ums += va_arg(list, int);    /* Get the next argument value. */

	va_end(list); /* Clean up argument list. */

return (ums);
}
