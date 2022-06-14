#include "search_algos.h"

/**
 * linear_search - Searches a sorted array for an integer,
 * one item at a time
 *
 * @array: The array to be searched through
 * @size: Number of elements in @array
 * @value: The value to search for
 * Return: The index in the array where the value appears
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
