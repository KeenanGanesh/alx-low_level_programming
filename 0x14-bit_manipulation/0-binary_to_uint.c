#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: A pointer to a string of 0 and 1 chars
 * Return: unsigned int
 *
 */

unsigned int binary_to_uint(const char *b)
{
	int len = 0;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}

	len--;
	while (*b != '\0')
	{
		if (*b == '1')
			sum +=(1 << len);
		len--;
		b++;
	}

	return (sum);
}
