#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - wowee must be a super kewl guy
 * Return: void
 */

void jack_bauer(void)
{
	int h1 = 0;

	for (h1 = 0; h1 <= 23; h1++)
	{
		int m1 = 0;

		for (m1 = 0; m1 <= 59; m1++)
		{
			if (h1 < 10)
				printf("0%d", h1);
			else
				printf("%d", h1);
			/* printf("  h1 and m1 is "); */
			if (m1 < 10)
				printf(":0%d\n", m1);
			else
				printf(":%d\n", m1);
		}
	}
}
