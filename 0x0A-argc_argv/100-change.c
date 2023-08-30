#include <stdio.h>
#include <stdlib.h>

/**
 * main - This Prints the minimum number of ns to
 *        make change for an amount of money.
 * @argc: this is the number of arguments provided to the program.
 * @argv: This is an array of pointers to the arguments.
 *
 * Return: If the number of arguments is not exactly one - 1.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
	int ts, ns = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	ts = atoi(argv[1]);

	while (ts > 0)
	{
		ns++;
		if ((ts - 25) >= 0)
		{
			ts -= 25;
			continue;
		}
		if ((ts - 10) >= 0)
		{
			ts -= 10;
			continue;
		}
		if ((ts - 5) >= 0)
		{
			ts -= 5;
			continue;
		}
		if ((ts - 2) >= 0)
		{
			ts -= 2;
			continue;
		}
		ts--;
	}

	printf("%d\n", ns);

	return (0);
}
