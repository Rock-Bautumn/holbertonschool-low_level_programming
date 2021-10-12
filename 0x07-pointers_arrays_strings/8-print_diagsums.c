#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int firstsum;
	int x = 0;
	int *matrix;
	matrix = a;

	while (x < (size - 1))
	{
		firstsum += matrix[x][x];
		x++;
	}
	printf("first sum is %d", firstsum);


}
