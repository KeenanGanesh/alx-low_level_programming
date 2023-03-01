#include "main.h"

/**
 * string_toupper - Converts all lowercase letters of a string to uppercase
 *
 * @str: The string to be converted
 *
 * Return: The string with all lowercase letters converted to uppercase
 *
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		i++;
	}

	return (str);
}
