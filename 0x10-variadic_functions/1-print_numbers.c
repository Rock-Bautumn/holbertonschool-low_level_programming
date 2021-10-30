#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - Prints numbers that are separated by a string
 * @separator: The string that is separating the numbers
 * @n: number of integers passed to the function
 * Return: Always void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int i = 1;

	va_list args;

	va_start(args, n);

	while (i <= n)
	{
		printf("%d", va_arg(args, int));
		if (separator)
			if (i < n)
				printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(args);
}
