#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the top left to bottom right and top right to bottom
 * left diagonal sums of a matrix
 *
 * @a: the array of the matrix
 * @size: the size of one side of the matrix
 * Return: Always void
 */
void print_diagsums(int *a, int size)
{
	int firstsum = 0;
	int secondsum = 0;
	int x = 0;

	while (x < size)
	{
		firstsum += *(a + (x * size) + x);
		secondsum += *(a + size - 1 + (x * size) - x);
		x++;
	}
	printf("%d, %d\n", firstsum, secondsum);
}
