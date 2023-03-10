#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: pointer to the memory area
 * @b: constant value
 * @n: number of bytes to fill
 * Return: pointer to the dest
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			s[i] = b;
	}

	return (s);
}
