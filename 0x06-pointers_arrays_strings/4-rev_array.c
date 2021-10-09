#include "holberton.h"
#include <stdio.h>
/**
 * reverse_array - reverses an array of integers
 *
 * @a: the array of integers
 * @n: the number of elements in the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int *copy = a;
	int i = 0;
	int hold;

	while (i < n / 2)
	{
		hold = *(a + i);
		*(a + i) = *(copy + (n - i - 1));
		*(copy + (n - i - 1)) = hold;
		i++;
	}
}
