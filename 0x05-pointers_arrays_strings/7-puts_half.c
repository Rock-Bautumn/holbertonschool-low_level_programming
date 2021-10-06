#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: the string we are counting the characters of
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int length;

	length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}


/**
 * puts_half - prints a string
 *
 * @str: the string we are printing the characters of
 * Return: void
 */

void puts_half(char *str)
{
	int c = 0;
	int l = _strlen(str);
	if (l % 2 == 1)
		l = l / 2 + 1;
	else
		l = l / 2;

	while (*str != '\0')
	{
		if (c >= l)
			_putchar(*str);
		c++;
		/* _putchar(*str);*/
		str++;
	}
	_putchar('\n');
}
