#include "main.h"
#include <stdio.h>

/**
 * times_table - returns absolute value
 * @n: this is the number we are checking
 * Return: the magniture or absolute value of the number
 */

void times_table(void)
{

	int row = 0;
	int product = 0;

	/* go through each row */
	for (row = 0; row <= 9; row++)
	{
	        /* print each column */

		int colu = 0;
		
		for (colu = 0; colu <= 9; colu++)
		{
			product = row * colu;
			tableData(colu, product);
		}
		/* done with the columns, new row */
		_putchar('\n');
	}
	/* _putchar('\n'); */
}
void tableData(int c, int p)
{
	int ones = p % 10;
	int tens = p / 10;
        /* keep it simple if it starts with 0 */
	if (c == 0)
	{
		_putchar('0');
	}
	/* add only one space before the number if two digits */
	else if (tens > 1)
	{
		_putchar(' ');
		_putchar('0' + tens);
		_putchar('0' + ones);
	}
	/* anything left should be single digit */
	else
	{
		_putchar(' ');
		_putchar(' ');
		_putchar('0' + ones);
	}
	if (c != 9)
		_putchar(',');
	
}
