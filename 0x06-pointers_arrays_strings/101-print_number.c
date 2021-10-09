#include "holberton.h"
#include <stdio.h>
/**
 * print_number - print the number using _putchar
 *
 * @n: the number to print
 * Return: Always void
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	print_number_upper_half(n);
}
/**
 * print_number_upper_half - prints the first half of digits using _putchar
 *
 * @n: the number to print
 * Return: Always void
 */
void print_number_upper_half(int n)
{
	int needzeros = 0;

	if ((n / 1000000000) > 0 || needzeros == 1)
	{
		_putchar('0' + (n / 1000000000 % 10));
		n = n % 1000000000;
		needzeros = 1;
	}
	if (n / 100000000 > 0 || needzeros == 1)
	{
		_putchar('0' + (n / 100000000 % 10));
		n = n % 100000000;
		needzeros = 1;
	}
	if (n / 10000000 > 0 || needzeros == 1)
	{
		_putchar('0' + (n / 10000000 % 10));
		n = n % 10000000;
		needzeros = 1;
	}
	if (n / 1000000 > 0 || needzeros == 1)
	{
		_putchar('0' + (n / 1000000 % 10));
			n = n % 1000000;
		needzeros = 1;
	}
	print_number_lower_half(n, needzeros);
}
/**
 * print_number_lower_half - prints the second half of the digits
 * @n: the remaining digits bestowed upon us by print_number_upper_half
 * @needzeros: do we need to print a zero or not, 1 if yes, 0 is no
 * Return: void
 */
void print_number_lower_half(int n, int needzeros)
{
	if (n / 100000 > 0 || needzeros == 1)
	{
		_putchar('0' + (n / 100000 % 10));
		n = n % 100000;
		needzeros = 1;
	}
	if (n / 10000 > 0 || needzeros == 1)
	{
		_putchar('0' + (n / 10000 % 10));
		n = n % 10000;
		needzeros = 1;
	}
	if (n / 1000 > 0 || needzeros == 1)
	{
		_putchar('0' + (n / 1000 % 10));
		n = n % 1000;
		needzeros = 1;
	}
	if (n / 100 > 0 || needzeros == 1)
	{
		_putchar('0' + (n / 100 % 10));
		n = n % 100;
		needzeros = 1;
	}
	if (n / 10 > 0 || needzeros == 1)
	{
		_putchar('0' + (n / 10 % 10));
		n = n % 10;
		needzeros = 1;
	}
	_putchar('0' + (n));

}
