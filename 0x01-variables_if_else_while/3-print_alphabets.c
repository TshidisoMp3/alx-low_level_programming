#include <stdio.h>

/**
 * main - entry point
 *
 * Return:  0 (Sucess)
 *
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	        putchar('\n');

	return (0);
}
