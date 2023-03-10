#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: number of arguments supplied to the program
 * @argv: array of pointers to the arguments
 *
 * Return: Always 0
 *
 */

int main(int argc, char *argv[])
{
	int arg = 0;

	while (arg < argc)
		printf("%s\n", argv[arg++]);

	return (0);
}
