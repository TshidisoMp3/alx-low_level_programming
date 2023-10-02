#include "main.h"
#include <stdio.h>

/**
 * main -  it prints an arguments passed in the program
 * @argc: number of arguments
 * @argv: array of arguments
 * ans: result of multiplication
 * Return: Always 0
 */

int main()
{
    int v1, v2, ans;

    printf("Enter first No: ");
    scanf("%d", v1);

    printf("Enter Secound No: ");
    scanf("%d", v2);

    ans= v1*v2;
    printf("The answer is: %d\n", ans);

    return 0;
}
