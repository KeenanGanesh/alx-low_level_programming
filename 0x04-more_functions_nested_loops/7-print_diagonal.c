#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: Is the number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int len, space;
	{
		for (len = 0; len < n; len++)
		{
			for (space = 0; space < len; space++)
				_putchar(' ');
			_putchar('\\');

			if (len == n - 1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
