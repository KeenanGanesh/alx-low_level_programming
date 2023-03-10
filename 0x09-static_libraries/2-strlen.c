#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: String we want length of
 * Return: The length of string
 *
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')

	{

		s++;
		len++;

	}

	return (len);
}
