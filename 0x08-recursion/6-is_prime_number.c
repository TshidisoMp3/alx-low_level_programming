#include "main.h"

/**
 * is_prime - if checks if the numbers are prime
 *
 * @n: integer numbers made
 * @i: integer, if n/2 is lethen i
 *
 * Return: 1 if number is prime, else 0
 */

int is_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (i <= n / 2)
	{
		if (n % i == 0)
			return (0);

		return (is_prime(n, ++i));
	}

	return (1);
}

/**
 * is_prime_number - it checks if the numbers are prime
 *
 * @n: integer numbers made
 *
 * Return: 1 if number is prime, else 0
 */

int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
