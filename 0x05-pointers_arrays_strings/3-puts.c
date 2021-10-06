#include "main.h"
/**
 * print_reverse - prints a string in reverse
 *
 * @str: the string we are printing the characters of
 * Return: void
 */

void print_reverse(char *str)
{
	while (*str != '\0')
	{
        	str++;
	}

	while (*str != '\0')
	{
		_putchar(*str);
		str--;
	}
	_putchar('\n');
}
