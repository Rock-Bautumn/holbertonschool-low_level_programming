#include "main.h"

/**
 * print_triangle - prints a right-aligned triangle of n length
 *
 * @n: length of triangle width and height
 * Return: Always void
 */
void print_triangle(int n)
{

	int height;
	int spaces;
	int octothorp;

	height = 0;

	while (height < n)
	{
		height++;

		spaces = n - height;
		while (spaces > 0)
		{
			spaces--;
			_putchar(' ');
		}
		octothorp = 0;

		while (octothorp < height)
		{
			octothorp++;
			_putchar('#');
		}
	_putchar('\n');
	}
	if (n < 1)
		_putchar('\n');
}
