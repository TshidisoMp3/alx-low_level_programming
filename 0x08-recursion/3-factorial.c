#include "main.h"
#include <stdio.h>

/**
 * factorial - this function returns the factorial 
 * @n - given number
 *
 * Return: factorial
 */

int factorial(int n)
{
	int factoss;

	if (n > 0)
	{
		factoss = n * factorial(n - 1);
		return (factoss);
	}

	else if (n == 0)
		return (1);

	else
		return (-1);
}
