#include "main.h"
#define NULL 0

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: first string to search
 * @accept: target matches in second string
 *
 * Return: pointer to the index of string at the first occurance
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s = &s[i];
				return (s);
			}
		}
		i++;
	}
	return (NULL);
}
