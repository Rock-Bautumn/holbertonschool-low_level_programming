#include "main.h"
#include <stdio.h>

void _putchar(char);

/**
 * print_binary - print binary value of a number
 * @n: integer
 * Return: void
 */
void print_binary(unsigned long int n)
{

	if (n > 1)
		print_binary((n >> 1));

	_putchar((n&1) + '0');
}
