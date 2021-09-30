#include "main.h"

/**
 * print_sign - checks if the value passed is a letter or not
 * @n: this is the character we are checking
 * Return: 1 and prints + if n is gt zero, 0 and 0 if 0, and -1 and - if lt zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
