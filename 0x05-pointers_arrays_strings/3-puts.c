#include "main.h"

/**
 * _puts - Prints a string, followed by a new line, to stdout
 * @str: String to be printed
 * Return: No return
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
