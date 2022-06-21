#include "search_algos.h"
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
 * binary_search - Searches a sorted array for an integer
 *
 * @array: The array to be searched through
 * @size: Number of elements in @array
 * @value: The value to search for
 * Return: The index of the array the value appears
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (rabs(array, value, 0, size - 1));
}


int rabs(int *array, int value, int left, int right)
{
	int mid;
	if (right < left)
		return (-1);
	printf("Searching in array: ");
	print_array(&array[left], (right - left + 1));
	mid = (left + right) / 2;
	if (array[mid] == value)
		return (mid);
	else if (array[mid] < value)
		return (rabs(array, value, mid + 1, right));
	return (rabs(array, value, left, mid - 1));
	
}
