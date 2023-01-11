#include <stdio>


#include "main.h"

/**
 * main - print an arguments passed in the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 * */

int main(argc, char *argv[])

{
	(void)argv;
	printf("%d\n", argc-1);


	return(0);

}

