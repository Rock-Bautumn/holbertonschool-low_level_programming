#include "main.h"

/**
 * _strlen_recursion - return a string's length
 *
 * @s: the string we receive
 * Return: always void
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(++s));
	}
}
