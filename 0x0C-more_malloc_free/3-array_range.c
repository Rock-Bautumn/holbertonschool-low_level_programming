#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers, inclusive min and max
 * @min: the starting point
 * @max: the ending point
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int x = min;
	int i = 0;
	int rangesize;
	int *newArray;

	if (min > max)
		return (NULL);
	if (max - min < 0)
		return (NULL);
	rangesize = max - min + 1;
	newArray = malloc(sizeof(int) * rangesize);
	if (newArray == NULL)
		return (NULL);
	for (x = min; x <= max; i++, x++)
	{
		*(newArray + i) = x;
	}
	return (newArray);
}
