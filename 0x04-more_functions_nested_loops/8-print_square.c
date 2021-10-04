#include "main.h"

/**
 * print_square - prints a square of n dimensions, using _putchar of #
 *
 * @n: number of times to print \
 * Return: Always void
 */
void print_square(int n)
{
	int y;

	for (y = 0; y < n; y++)
	{
		int x;

		for (x = 0; x < n; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (n < 1)
		_putchar('\n');
}
