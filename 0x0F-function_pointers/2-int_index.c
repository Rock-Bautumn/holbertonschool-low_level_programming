#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer, returns the index of the first element
 * for which cmp function does not return 0
 * @array: the array to search
 * @size: how far into the array to search
 * @cmp: the function used to compare
 * Return: returns the first element matching from the array, otherwise -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{

	int x;


	/* check if impossible */
	if (!array || !size || !cmp)
		return -1;

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]) != 0)
			return (x);
	}
	return (-1);
}
