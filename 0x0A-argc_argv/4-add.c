#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* isNumber - checks if the strings are numbers.
* @str: string params
*
* Return: 1 if number else 0.
*/

int isNumber(char *str)
{
	int mj = strlen(str);

	while (mj--)
	{
		if (str[mj] > 47 && str[mj] < 58)
			continue;
		return (0);
	}
return (1);
}

/**
* main - adds positive numbers you get
* @argc: command line arguments
* @argv: arrays that have the program command line arguments
*
* Return: 0 if success else 1.
*/

int main(int argc, char *argv[])
{
	int bv, ums = 0, tonc = 0;

	if (argc - 1 > 0)
	{
		for (bv = 1; bv < argc; ++bv)
		{
			if (!isNumber(argv[bv]))
				++tonc;
			else
				ums += atoi(argv[bv]);
		}
	}

	if (argc - 1 == 0 || tonc == argc - 1)
		printf("0\n");

	else if (tonc > 0)
	{
		printf("Error\n");
		return (1);
	}

	else
		printf("%d\n", ums);

return (0);
}
