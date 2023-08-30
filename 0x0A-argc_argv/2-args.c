#include <stdio.h>
/**
 * main - this prints all arguments it receives.
 * @argc: this is the number of command line arguments.
 * @argv: this is the array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int hg;

	for (hg = 0; hg < argc; hg++)
		printf("%s\n", argv[hg]);
	return (0);
}
