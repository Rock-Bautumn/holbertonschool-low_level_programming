#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array up to n elements
 *
 * @a: the pointer of the array
 * @n: the number of elements to print
 * Return: void
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d",  a[index]);
		if (index != n - 1)
			printf(", ");
	}
	printf("\n");
}
