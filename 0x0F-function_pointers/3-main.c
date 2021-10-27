#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - prints out the result of a simple arithmetic function.
 * syntax: $ calc number1 operator number2
 * example: $ calc 32 / 7
 * @argc: the number of arguments we have
 * @argv: the arguments we have
 * Return: exit with status 98 if not 4 arguments, exit with status 99 if
 * operator does not match
 * return 100 if user tries to divide by 0
 * otherwise, print the answer result
*/

int main(int argc, char *argv[])
{
	int a;
	int b;
	char *validops = "+-*/%";
	int (*opchoice)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (!strstr(validops, argv[2]))
	{
		printf("Error\n");
		exit(99);
	}

	opchoice = get_op_func(argv[2]);

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", opchoice(a, b));

	return (0);

}
