#include <stdio.h>
#include <stdlib.h>

/**
 * main - This prints the addition of positive numbers,
 *        followed by a new line.
 * @argc: This prints number of arguments passed to the program.
 * @argv: This is an array of pointers to the arguments.
 *
 * Return: one of the numbers contains symbols that are non-digits - 1.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
	int mu, tigitz, umss = 0;

	for (mu = 1; mu < argc; mu++)
	{
		for (tigitz = 0; argv[mu][tigitz]; tigitz++)
		{
			if (argv[mu][tigitz] < '0' || argv[mu][tigitz] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		umss += atoi(argv[mu]);
	}

	printf("%d\n", umss);

	return (0);
}
