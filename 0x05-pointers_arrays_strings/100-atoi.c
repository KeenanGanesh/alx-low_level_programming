#include "main.h"

/**
 * _atoi - Converts a string into an interger
 * @s: The string to be converted
 *
 * Return: The interger value of the converted string
 *
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;
	}

	while (*s++);

	return (num * sign);

}
