#include "search_algos.h"

/**
 * interpolation_search - Search for a value in an array using an interpolated
 * search strategy
 * @array: The array to search through
 * @size: The quantity of items in the array
 * @value: The value to search for
 * Return: The position/index of the array that contains the value
*/

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, mid;

	if (!array)
		return (-1);

	mid = low + (((double)(high - low) / (array[high] -
			array[low])) * (value - array[low]));
	if (mid > high)
		printf("Value checked array[%ld] is out of range\n", mid);

	while ((array[high] != array[low]) &&
		(value >= array[low]) && (value <= array[high]))
	{
		mid = low + (((double)(high - low) / (array[high] -
			array[low])) * (value - array[low]));
		printf("Value checked array[%ld] = [%d]\n", mid, array[mid]);
		if (mid > high)
			printf("Value checked array[%ld] is out of range\n",
				mid);
		else if (array[mid] < value)
			low = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
		else
			return (mid);
	}

	if (value == array[low])
		return (low);
	else
		return (-1);
}
