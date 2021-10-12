#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse using recursion
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
