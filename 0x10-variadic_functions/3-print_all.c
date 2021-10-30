#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <string.h>

/**
 * print_all - Prints all of the things, using format as its guide
 * @format: The string that tells us which datatype to expect
 * Return: Always void
 */

void print_all(const char *format, ...)
{
	unsigned int i = 0;
	char *thisStr;
	int printSeparator = 0;
	va_list args;

	va_start(args, format);
	while (format[i])
	{
		printSeparator = 0;
		switch (format[i])
		{
		case 'c':
			printSeparator = 1;
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printSeparator = 1;
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printSeparator = 1;
			printf("%f", va_arg(args, double));
			break;
		case 's':
			printSeparator = 1;
			thisStr = va_arg(args, char *);
			if (thisStr == NULL)
				printf("(nil)");
			else
				printf("%s", thisStr);
		}
		if (format[i + 1] && printSeparator == 1)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
