#include "main.h"

/**
 * print_last_digit - returns the last digit
 * @n: this is the number we are checking
 * Return: the last digit of the number
 */

int print_last_digit(int n)
{

	if (n >= 0)
	{
		n = n % 10;
		_putchar('0' + n);
		return (n);
	}
	else
	{
		n = n * -1;
		n = n % 10;
		_putchar('0' + n);
		return (n);
	}
}
