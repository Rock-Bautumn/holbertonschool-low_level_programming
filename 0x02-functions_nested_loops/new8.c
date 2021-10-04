#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - wowee must be a super kewl guy
 * Return: void
 */

void jack_bauer(void)
{
	int h = 0;

	for (h = 0; h <= 23; h++)
	{
		int m = 0;

		for (m = 0; m <= 59; m++)
		{
			int htens =  h / 10;
			int hones =  h % 10;
 		        int mtens = m / 10;
			int mones = m % 10;
			_putchar('0' + htens);
			_putchar('0' + hones);
			_putchar(':');
			_putchar('0' + mtens);
			_putchar('0' + mones);
			_putchar('\n');
		}
	}
}
