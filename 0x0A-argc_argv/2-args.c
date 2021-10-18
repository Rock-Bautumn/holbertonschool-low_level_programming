#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints out each argument provided onto a new line
 * @argc: - number of arguments passed
 * @argv: - command line parameters
 * Return: always 0;
 */

int main(int argc, char *argv[])
{

	int x = 0;

	while (x < argc)
	{
	        printf("%s\n", argv[x]);
		x++;
	}
	return (0);
}
