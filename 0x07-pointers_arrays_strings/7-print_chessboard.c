#include "main.h"

/**
 * print_chessboard - prints the chessboard state
 * @a: this is the array we get with the chessboard state
 *
 */
void print_chessboard(char (*a)[8])
{
	int row;
	int col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(a[row][col]);
		}
		_putchar('\n');
	}


}
