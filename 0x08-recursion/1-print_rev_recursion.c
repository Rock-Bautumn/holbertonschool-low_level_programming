#include "main.h"

/**
 * _puts_recursion - prints a string using recursion
 *
 * @s: the string we receive
 * Return: always void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_print_rev_recursion(++s);
		_putchar(*s);
	}

}
