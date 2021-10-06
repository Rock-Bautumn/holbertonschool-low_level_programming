#include "main.h"
/**
 * puts2 - prints a string, alternating chars
 *
 * @str: the string we are printing the characters of
 * Return: void
 */

void puts2(char *str)
{
	int x = 0;

	while (*str != '\0')
	{
		if (x % 2 == 0)
			_putchar(*str);
		str++;
		x++;
	}
	_putchar('\n');
}
