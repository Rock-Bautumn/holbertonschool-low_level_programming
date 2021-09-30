#include "main.h"

/**
 * print_last_digit - returns the last digit
 * @n: this is the number we are checking
 * Return: the last digit of the number
 */

int print_last_digit(int n)
{
	n = n % 10;
	if (n >= 0)
	{
	        _putchar('0' + n);
		return (n);
	}
	else
	{
	        n = -n;
		_putchar('0' + n);
		return (n);
	}
}
