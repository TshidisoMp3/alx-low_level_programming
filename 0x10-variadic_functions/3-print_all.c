#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_all - fuction to print anything.
* @format:  arguments passed to the function.
*/
void print_all(const char * const format, ...)
{
	va_list list;
	int mj = 0;
	char *strgss, *sepor = "";

	va_start(list, format);
	if (format)
	{
		while (format[mj])
		{
			switch (format[mj])
			{
			case 'c':
				printf("%s%c", sepor, va_arg(list, int));
				break;
			case 'i':
				printf("%s%d", sepor, va_arg(list, int));
				break;
			case 'f':
				printf("%s%f", sepor, va_arg(list, double));
				break;
			case 's':
				strgss = va_arg(list, char *);
				if (!strgss)
					strgss = "(nil)";
				printf("%s%s", sepor, strgss);
				break;
			default:
				mj++;
				continue;
			}
			sepor = ", ";
			mj++;
		}
	}
	printf("\n");
	va_end(list); /* Clean up argument list. */
}
