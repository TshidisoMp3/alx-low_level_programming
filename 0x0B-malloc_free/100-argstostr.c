#include <stdlib.h>

/**
 * argstostr - concatenate command line arguments.
 *
 * @ac: count of command line arguments
 * @av: vector of command line arguments
 *
 * Return: string
 */

char *argstostr(int ac, char **av)
{
	int tip, mj, klk;
	int lengthss, arguLength = 0;
	char *str, *temp;

	if (!ac || av ==  NULL)
		return (NULL);

	for (tip = 0; tip < ac; tip++)
	{
		lengthss = 0;
		temp = av[tip];

		while (*temp++ != '\0')
			lengthss++;

		arguLength += ++lengthss;
	}

	str = malloc(sizeof(char) * arguLength + 1);
	if (str == NULL)
		return (NULL);

	for (tip = 0; tip < ac; tip++)
	{
		lengthss = 0;
		temp = av[tip];
		while (*temp++ != '\0')
			lengthss++;

		for (mj = 0; mj < lengthss; mj++, klk++)
			str[klk] = av[tip][mj];
		str[klk++] = '\n';
	}

	str[klk] = '\0';
	return (str);
}
