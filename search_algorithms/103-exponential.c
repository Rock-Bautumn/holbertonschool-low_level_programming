#include "search_algos.h"

#define MIN(X, Y) ((X) < (Y) ? X : Y)

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */

void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}

/**
 * rabs - Recursive advanced binary search, returns the first position of value
 * @array: The array to search through
 * @value: The value to search for
 * @left: The left index of the subarray
 * @right: The right index of the subarray
 * Return: the index of the found value, -1 if not found
*/

int rabs(int *array, int value, int left, int right)
{
	int mid;

	if (right < left)
		return (-1);
	printf("Searching in array: ");
	print_array(&array[left], (right - left + 1));
	if (left == right || (right - left) == 1)
	{
		if (array[left] == value)
			return (left);
		return (rabs(array, value, left + 1, right));
	}
	mid = (left + right) / 2;
	if (array[mid] == value)
	{
		while (array[mid - 1] == value)
			mid -= 1;
		return (mid);
	}
	else if (array[mid] < value)
		return (rabs(array, value, mid + 1, right));
	return (rabs(array, value, left, mid));
}

/**
 * exponential_search - Search for a value in a list in an
 * exponential search way
 * @array: The array to search through
 * @size: The quantity of items in the array
 * @value: The value to search for
 * Return: The position/index of the array that contains the value
*/

int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;

	if (!array || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
		bound / 2, MIN(bound, size - 1));
	return (rabs(array, value, bound / 2, MIN(bound, size - 1)));
}
