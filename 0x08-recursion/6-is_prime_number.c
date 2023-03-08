#include "main.h"

/**
 * is_divisible - checks if a number is divisible
 * @num: The number to be checked
 * @div: the divisor
 *
 * Return: if number is divisible 0, if number is not -1
 *
 */

int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}

/**
 * is_prime_number - check if it is a prime
 * @n: number to check
 *
 * Return: if it is a prime 1, if not then 0
 *
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (is_divisible(n, div));
}
