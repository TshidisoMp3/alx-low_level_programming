#include "main.h"

/**
 * sqtRecursive - computes square root recursively
 * @n: the number
 * @m: the comparison number
 *
 * Return: 1 when sqrroot not found or sqrroot
 */

int sqtRecursive(int n, int m)
{
	if (n <= 0)
		return (-1);

	if (n * n == m)
		return (n);
	return (sqtRecursive(n - 1, m));

}

/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: the number
 *
 * Return: square root of n or -1
 */

int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	return (sqtRecursive(n / 2, n));
}

/**
 * is_prime_number - checks if a given number is prime
 * @n: the number
 *
 * Return: 1 if number is prime else 0
 */

int is_prime_number(int n)
{
	if (n <= 1 || _sqrt_recursion(n) >= 1)
		return (0);

	if (_sqrt_recursion(n) == -1)
		return (1);
	return (_sqrt_recursion(n));
}