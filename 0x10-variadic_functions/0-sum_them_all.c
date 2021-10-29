#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - adds numbers passed to it
 * @n: number of numbers to add
 * Return: the sum of the numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(args, n);

	while (i < n)
	{
		sum += va_arg(args, int);
		i++;
	}
	va_end(args);
	return (sum);
}
