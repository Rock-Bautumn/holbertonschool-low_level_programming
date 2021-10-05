#include "main.h"
/**
 * _puts - prints a string
 *
 * @str: the string we are printing the characters of
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
