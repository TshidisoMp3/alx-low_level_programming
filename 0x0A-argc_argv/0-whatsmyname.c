#include "main.h"
#include <stdio.h>

/**
 * main - function that prints the name of program
 * @argc: the count of number of arguments
 * @argv: The array of arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

return (0);
}
