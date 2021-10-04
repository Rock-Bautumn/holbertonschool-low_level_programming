#include "main.h"

/**
 * time_table - returns a times table up to 9x9
 * Return: void
 */

void times_table(void)
{
	int row = 0;
	int product = 0;

	/* go through each row */
	for (row = 0; row <=9; row++)
	{
		int colu = 0;

		for (colu = 0; colu <= 9; colu++)
		{
			product = row * colu;
			printCell(colu, product);
		}

		/* done with the row, so newline */
		_putchar('\n');
	}

}


/**
 * printCell - prints a productd cell for times_table
 * @c: column
 * @p: product

 * Return: void
 */

void printCell(int c, int p)
{
	int ones = p % 10;
	int tens = p / 10;

	if (c == 0)
	{
		_putchar('0');
	}
	/* add only one space if product is two digits */
	else if (tens >= 1)
	{
		_putchar(' ');
		_putchar('0' + tens);
		_putchar('0' + ones);
	}
	/* there should only be one digit products remaining */
	else
	{
		_putchar(' ');
		_putchar(' ');
		_putchar('0' + ones);
	}
	if (c != 9)
		_putchar(',');

}
