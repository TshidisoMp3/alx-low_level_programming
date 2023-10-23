#include "main.h"
#include <stdio.h>

/**
 * main -  it prints an arguments passed in the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);

return (0);
}
