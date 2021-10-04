#include "main.h"

/**
 * print_diagonal - prints a diagonal line using \  n times, using _putchar
 *
 * @n: number of times to print \
 * Return: Always void
 */
void print_diagonal(int n)
{
	int x;

	/* _putchar('0' + (n / 10));
	 * _putchar('0' + (n % 10));
	 * _putchar(':');
	 * _putchar('\n');
	 *
	 */

	if (n < 1)
		_putchar('\n');
	for (x = 0; x < n; x++)
	{
		int y;
		for (y = 0; y < x; y++)
			_putchar(' ');
		_putchar('Z' + 2);
		_putchar('\n');
	}
}
