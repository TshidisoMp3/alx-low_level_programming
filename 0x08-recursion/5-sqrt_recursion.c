#include "main.h"

/**
 * _sqrt_recursion - square root created
 *
 * @n: integer numbers made
 *
 * Return: sqrt roots
 */

int _sqrt_recursion(int n)
{
	return (sqrt(n, 1));
}

/**
 * _sqrt - natural square created
 *
 * @n: integer numbers made
 * @i: integer, which is less then n
 *
 * Return: sqrt roots
 */

int sqrt(int n, int i)
{
	if (n < 0)
		return (-1);

	if ((i * i) > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (sqrt(n, ++i));
}