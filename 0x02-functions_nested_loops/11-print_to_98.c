#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - iterates a print in the direction of 98 and stops
 * @n: this is the first number we are adding
 * Return: void
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		int x;

		for (x = n; x >= 98; x--)
		{
			printf("%d", x);
			if (x != 98)
				printf(", ");
		}
	}
	else if (n < 98)
	{
		int x;

		for (x = n; x <= 98; x++)
		{
			printf("%d", x);
			if (x != 98)
				printf(", ");
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}
