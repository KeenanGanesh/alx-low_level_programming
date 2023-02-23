#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: Is the number of times the character _ should be printed
 */

void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}
	_putchar('\n');
}
