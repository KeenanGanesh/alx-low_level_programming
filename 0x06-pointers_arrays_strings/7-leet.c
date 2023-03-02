#include "main.h"

/**
 * leet - Encodes a string into 1337
 *
 * @str: The string to be encoded
 *
 * Return: A pointer to the encoded string
 *
 */

char *leet(char *str)
{
	char a[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char b[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	int i, j;

	for (j = 0; str[j] != '\0'; j++)
	{
		for (i = 0; i < 10; i++)
		{
			if (str[j] == a[i])
				str[j] = b[i];
		}
	}

	return (str);
}
