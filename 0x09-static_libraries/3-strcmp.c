#include "main.h"

/**
 * _strcmp - Compare two strings
 *
 * @s1: Pointer to first string
 * @s2: Pointer to second string
 *
 * Return: Negative interger if s1 is less than s2, 0 if they're equal,
 * Positive interger if s1 is greater than s2
 *
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
