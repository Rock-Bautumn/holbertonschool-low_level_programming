#include "main.h"

/**
 * _puts_recursion - prints a string using recursion
 *
 * @s: the string we receive
 * Return: always void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);

	}

}
