#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - its bytes
 * @s: its a pointer to char
 * @accept: its a pointer to char
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int te;

	while (*s)
	{
		for (te = 0; accept[te]; te++)
		{
			if (*s == accept[te])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
