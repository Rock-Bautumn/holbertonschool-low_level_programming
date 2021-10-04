#include "main.h"
#include <stdio.h>

/**
 * main - read the code
 *
 * Return: Always 0
 */
int main(void)
{
	int y;

	for (y = 1; y <= 100; y++)
	{
	        if (y % 3 == 0)
			printf("Fizz");
		if (y % 5 == 0)
			printf("Buzz");
		if (y % 3 != 0 && y % 5 != 0)
			printf("%d", y);
		printf(" ");
	}
	printf("\n");
	return (0);
}
