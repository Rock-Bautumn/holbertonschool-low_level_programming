#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - Prints strings that are separated by a string separator
 * @separator: The string that is separating the numbers
 * @n: number of integers passed to the function
 * Return: Always void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	unsigned int i = 1;
	char *thisStr;

	va_list args;

	va_start(args, n);

	while (i <= n)
	{
		thisStr = va_arg(args, char*);
		if (thisStr == NULL)
			printf("(nil)");
		else
			printf("%s", thisStr);

		if (separator)
			if (i < n)
				printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(args);
}
