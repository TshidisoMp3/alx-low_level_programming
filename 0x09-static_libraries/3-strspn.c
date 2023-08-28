#include "main.h"

/**
* _strspn - Its the length of a prefix substring.
* @s: This is the string where substring will look.
* @accept: its substring of accepted chars.
* Return: The Length of occurrence.
*/
unsigned int _strspn(char *s, char *accept)
{
	int dq = 0;
	char *pt = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				dq++;
				break;
			}
		if (!(*--accept))
			break;
		accept = pt;
	}
	return (dq);
}
