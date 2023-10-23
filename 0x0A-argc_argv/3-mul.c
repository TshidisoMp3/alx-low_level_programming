#include "main.h"
#include <stdio.h>

/**
 * main -  it prints an arguments passed in the program
 * @argc: number of arguments
 * @argv: array of arguments
 * ans: result of multiplication
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc - 1 != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

return (0);
}
