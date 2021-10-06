#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string in reverse
 *
 * @str: the string we are printing the characters of
 * Return: void
 */

void print_rev(char *str)
{
	char *myStr = str;
	int rc = 0;
	/* int s; */

	while (*myStr != '\0')
	{
		myStr++;
		rc++;
	}
	myStr--;
	while (*myStr != '\0')
	{
		_putchar(*myStr);
		myStr--;
	}
	_putchar('\n');
}
