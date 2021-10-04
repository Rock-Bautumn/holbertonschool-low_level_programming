#include "main.h"

/**
 * more_numbers - prints 01234567891011121314\n, 10 times, using _putchar
 *
 * Return: Always void
 */
void more_numbers(void)
{

	int ch;
	int tentimes = 0;

	while (tentimes < 10)
	{
		tentimes++;
		for (ch = 0; ch <= 14; ch++)
		{
			int chones = ch % 10;
			int chtens = ch / 10;

			if (chtens != 0)
				_putchar('0' + chtens);
			_putchar('0' + chones);
		}
		_putchar('\n');
	}
}
