#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 * terms not exceeding 4000000
 *
 * Return: Always 0
 *
 */

int main(void)
{
	int sum = 0;
	int a = 1, b = 2, c;

		while (b <= 4000000)
		{
			if (b % 2 == 0)
			{
				sum += b;
			}
				c = a + b
				a = b;
				b = c;
			}

			printf("%d\n", sum);

			return (0);
}
