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
	int countsA;
	for(countsA=0; countsA<argc; countsA++)
		printf("argv[%2d]: %s\n",countsA,argv[countsA]);
	
	return 0;
}
