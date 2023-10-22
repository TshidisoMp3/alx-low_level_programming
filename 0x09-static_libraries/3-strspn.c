#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: contains bytes that may or may not compose parts of the string
 *
 * Return: the number of bytes that compose the length
 */

unsigned int _strspn(char *s, char *accept)
{
	int iv;
	int jh;
	unsigned int lengths;

	lengths = 0;
	for (iv = 0; s[iv] != '\0'; iv++)
	{
		for (jh = 0; accept[jh] != '\0' && accept[jh] != s[iv]; jh++)
			;
		if (s[iv] == accept[jh])
			lengths++;
		if (accept[jh] == '\0')
			return (lengths);
	}
	return (lengths);

}
