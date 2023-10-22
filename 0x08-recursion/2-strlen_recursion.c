#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - a function that is able to return a string 
 * @s: pointer to string
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int lengthsss = 0;

	if (*s != '\0')
	{
		lengthsss = _strlen_recursion(s + 1);
		++lengthsss;
	}
	return (lengthsss);
}
