#include "main.h"

/**
 * print_most_numbers - prints 9 characters, 01356789\n, using _putchar twice
 *
 * Return: Always void
 */
void print_most_numbers(void)
{

	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		if (ch != '2' && ch != '4')
		_putchar(ch);
	}
	_putchar('\n');
}
