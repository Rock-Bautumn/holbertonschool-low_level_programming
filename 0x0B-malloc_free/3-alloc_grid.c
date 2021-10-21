#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * alloc_grid - Returns a pointer to a grid created of width x height
 * dimensions
 * @width: the number of columns (x axis)
 * @height: the number of rows (y axis)
 * Return: the address of the first row and column, NULL if failed
 */
/* we want an array of pointers of y quantity that are x in length */
/* because we are supposed to have a **pointer function */
int **alloc_grid(int width, int height)
{
	int x = 0;
	int y = 0;

	int **newGrid;

	if (!width || !height || height < 1 || width < 1)
		return (NULL);
	newGrid = malloc(height * sizeof(newGrid));
	if (newGrid == NULL)
		return (NULL);
	while (x < height)
	{
		*(newGrid + x) = malloc(width * sizeof(int));
		if (*(newGrid + x) == NULL)
			return (NULL);
		y = 0;
		while (y < width)
		{
			*(*(newGrid + x) + y) = 0;
			y++;
		}
		x++;
	}
	return (newGrid);
}
