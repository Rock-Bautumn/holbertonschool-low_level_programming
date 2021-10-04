#include "main.h"

/**
 * print_numbers - prints 11 characters, 0123456789\n, using _putchar
 *
 * Return: Always void
 */
void print_numbers(void)
{

	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
