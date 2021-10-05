#include "main.h"

/**
 * swap_int - switches the values of two ints
 *
 * @a: the first address we are swapping
 * @b: the second address we are swapping
 * Return: Always void.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
