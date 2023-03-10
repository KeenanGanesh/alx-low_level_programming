#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: destination memory area
 * @src: source memory area
 * @n: bytes filled
 * Return: pointer to dest
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			dest[i] = src[i];
	}

	return (dest);
}
