#include "main.h"

/**
 * print_last_digit - returns the last digit
 * @n: this is the number we are checking
 * Return: the last digit of the number
 */

int print_last_digit(int n)
{

	if (n > 0)
	{
		n = n % 10;
		_putchar(n);
		return (n);
	}
	else if (n < 0)
	{
		n = n * -1;
		n = n % 10;
		_putchar(n);
		return (n);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
