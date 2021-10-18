#include <stdio.h>

/**
 * main - prints out the number of arguments provided to the program
 * @argc: - number of arguments passed
 * @argv: - command line parameters
 * Return: always 0;
 */

int main(int argc, char *argv[])
{

	int actualargc = argc - 1;

	(void) argv;

	printf("%d\n", actualargc);
	return (0);
}
