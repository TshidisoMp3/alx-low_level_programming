#include "main.h"

/**
 * _abs - this computes the absolute value of an integer
 * @n: its the int type number
 * Return: the absolute value of @n
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
