#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints out the product of two numbers
 * @argc: - number of arguments passed
 * @argv: - command line parameters
 * Return: always 0;
 */

int main(int argc, char *argv[])
{

	int product;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	product = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", product);
	return (0);
}
