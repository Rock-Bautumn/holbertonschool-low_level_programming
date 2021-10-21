#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * free_grid - Returns a pointer to a grid created of width x height
 * dimensions
 * @height: the number of rows (y axis)
 * @grid: the grid we are freeing from memory
 * Return: always void
 */
/* we want an array of pointers of y quantity that are x in length */
/* because we are supposed to have a **pointer function */
void free_grid(int **grid, int height)
{
	int x = height;

	while (x >= 0)
	{
		free(*(grid + x));
		x--;
	}
	free(grid);
}
