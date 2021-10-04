#include "main.h"

/**
 * print_line - prints _ n times, using _putchar
 *
 * @n: number of times to print _
 * Return: Always void
 */
void print_line(int n)
{

	int x = 0;

	while (x < n)
	{
		x++;
		_putchar('_');
	}
	_putchar('\n');
}
