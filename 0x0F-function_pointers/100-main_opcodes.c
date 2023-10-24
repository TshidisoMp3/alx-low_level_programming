#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of itself.
 * @argc: number of arguments put to the program.
 * @argv: array pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int yp, dexo;
	int (*address)(int, char **) = main;
	unsigned char codesArc;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	yp = atoi(argv[1]);

	if (yp < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (dexo = 0; dexo < yp; dexo++)
	{
		codesArc = *(unsigned char *)address;
		printf("%.2x", codesArc);

		if (dexo == yp - 1)
			continue;
		printf(" ");

		address++;
	}

	printf("\n");

	return (0);
}
