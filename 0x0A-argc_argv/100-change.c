#include <stdio.h>
#include <stdlib.h>

/**
* main - prints name name of program.
* @argc: number of command line arguments
* @argv: An array containing the program command line arguments
*
* Return: Always success.
*/

int main(int argc, char *argv[])
{
	int changess, c25s = 0, c10s = 0, c5s = 0, c2s = 0, c1s = 0;

	if (argc - 1 != 1)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) < 0)
		printf("0\n");
	else
	{
		changess = atoi(argv[1]);
		if (changess >= 25)
		{
			c25s = changess / 25;
			changess = changess % 25; }
		if (changess >= 10)
		{
			c10s = changess / 10;
			changess = changess % 10; }
		if (changess >= 5)
		{
			c5s = changess / 5;
			changess = changess % 5; }
		if (changess >= 2)
		{
			c2s = changess / 2;
			changess = changess % 2; }
		if (changess >= 1)
			c1s = changess;

		printf("%d\n", c25s + c10s + c5s + c2s + c1s);
	}
return (0);
}
