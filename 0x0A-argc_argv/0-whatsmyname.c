#include <stdio.h>

/**
 * main - prints out the name of the program
 * @argc: - number of arguments passed
 * @argv: - command line parameters
 * Return: always 0;
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
