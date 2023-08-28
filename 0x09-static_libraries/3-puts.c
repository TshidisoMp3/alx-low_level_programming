#include "main.h"

/**
 *_puts - a funtion that is able to print a string, followed  by a new line to a stdout
 *@str: the string to print
*/

void _puts(char *str)
{
    int pt;

	for (pt = 0; str[pt] != '\0'; pt++)
	{
		_putchar(str[pt]);
	}
	_putchar(10);
}
