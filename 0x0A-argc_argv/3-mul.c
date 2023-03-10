#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication of two numbers, followed by a new line
 * @argc: number of arguments supplied to the program
 * @argv: array of pointers to the arguments
 *
 * Return: 0 if two arguments are received
 *	   1 if two arguments are not received
 */

int main(int argc, char *argv[])
{
	int num1, num2, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);

	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	prod = num1 * num2;

	printf("%d\n", prod);

	return (0);
}
