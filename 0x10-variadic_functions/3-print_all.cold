#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - Prints all of the things, using format as its guide
 * @format: The string that tells us which datatype to expect
 * Return: Always void
 */

void print_all(const char *format, ...)
{
	unsigned int i = 0;
	char *thisStr, c;

	va_list args;

	va_start(args, format);
	while (format && format[i] != '\0')
	{
		c = format[i];
		switch (c)
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			thisStr = va_arg(args, char *);
			if (thisStr == NULL)
				printf("(nil)");
			else
				printf("%s", thisStr);
			break;
		}
		if ((format[i + 1] != '\0') &&
		    ((c == 'c') || (c == 'i') || (c == 'f') || (c == 's')))
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");

}
