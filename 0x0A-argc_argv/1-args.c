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
    int v;
    for (v = 0; v < argc; v++)
    {
        // Printing all the Arguments
        printf("%s ", argv[v]);       
    }
    printf("\n");

    return 0; 
}
