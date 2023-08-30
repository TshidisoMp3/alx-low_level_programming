#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - it concatenates all arguements to the program
 * @ac: its an arguement count
 * @av: its a pointer to arguements
 *
 * Return: pointer to new space in memory or null
 */

char *argstostr(int ac, char **av)
{
	char *strDuppy;
	int ti, lo, kv, size;

	if (ac == 0 || av == NULL)
		return (NULL);
	size = 0;

	for (ti = 0; ti < ac; ti++)
	{
		for (lo = 0; av[ti][lo] != '\0'; lo++)
			size++;
		size++;
	}
	size++;

	strDuppy = malloc(sizeof(char) * size);
	if (strDuppy == NULL)
		return (NULL);

	kv = 0;
	for (ti = 0; ti < ac; ti++)
	{
		for (lo = 0; av[ti][lo] != '\0'; lo++)
		{
			strDuppy[kv++] = av[ti][lo];
		}
		strDuppy[kv++] = '\n';
	}
	strDuppy[kv] = '\0';
	return (strDuppy);
}
