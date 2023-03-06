#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard
 * @a: the chessboard to be printed
 *
 * Return: no return
 *
 */

void print_chessboard(char (*a)[8])
{
	int row;
	int column;

	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
			_putchar(a[row][column]);
		_putchar('\n');
	}
}
