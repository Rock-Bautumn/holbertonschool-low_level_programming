#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - iterates through a given array n times, performing a
 * function on each item
 * @array: the array we are iterating through
 * @size: the number of items to iterate through
 * @action: the function that we are calling on each item
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{

	unsigned int i;

/* check if impossible */
	if (!array || !size || !action)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);

	}
}
