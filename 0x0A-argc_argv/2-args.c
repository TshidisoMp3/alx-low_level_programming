#include "main.h"
#include <stdio.h>

/**
 * main -  it prints an arguments passed in the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int bv;

	if (argc > 0)
	{
		for (bv = 0; bv < argc; ++bv)
			printf("%s\n", argv[bv]);
	}

return (0);
}
