#include "main.h"


/**
 * print_alphabet - prints the alphabet using _putchar
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{

	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}

/**
 * print_alphabet_x10 - prints the alphabet 10x using print_alphabet
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{

	int x;

	for (x = '0'; x <= '9'; x++)
	{
		print_alphabet();
	}
}
