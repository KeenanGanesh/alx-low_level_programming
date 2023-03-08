#include "main.h"

/**
 * find_sqrt - find the square root of num
 * @num: number to find the square root of
 * @root: the root to be tested
 *
 * Return: natural square root, or -1 if not natural root
 *
 */

int find_sqrt(int num, int root)
{
	if (root * root > num)
		return (-1);

	if (root * root == num)
		return (root);

	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: n
 *
 * Return: natural square root, or -1 if not natural root
 *
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (find_sqrt(n, 0));
}
