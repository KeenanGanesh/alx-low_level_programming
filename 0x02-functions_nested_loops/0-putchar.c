#include <_putchar>

/**
 * main - Prints the command "_putchar" follwed by new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char p[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(p[i]);
	}
		_putchar('\n');

	return (0);
}
