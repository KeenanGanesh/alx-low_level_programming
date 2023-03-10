#include <stdio.h>

/**
 * main - prints the program name, followed by a new line.
 * @argc: the number of arguments supplied to the program
 * @argv: arrary of pointers to the arguments
 *
 * Return: Always 0
 *
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
